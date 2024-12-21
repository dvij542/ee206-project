import cv2 as cv
import numpy as np
from scipy import linalg
import os
import glob
import matplotlib.pyplot as plt

from calibration.calibration_result import P1, P2, P3, P4
from scene_interpreter.triangulation import DLT

def detect_checkerboard(frame1_name, frame2_name, frame3_name, frame4_name):
    # Detect and triangulate checkerboard positions in space
    
    images = [cv.imread(frame1_name, 1), 
              cv.imread(frame2_name, 1), 
              cv.imread(frame3_name, 1), 
              cv.imread(frame4_name, 1)]

    criteria = (cv.TERM_CRITERIA_EPS + cv.TERM_CRITERIA_MAX_ITER, 30, 0.001)

    rows = 6
    columns = 7
    # rows = 4
    # columns = 5

    cam_corners_pixel = []

    for camera_num in range(4):
        frame = images[camera_num]
        cv.imshow('img', frame)
        k = cv.waitKey()
        gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
        ret, corners = cv.findChessboardCorners(gray, (rows, columns), None)
        print(ret, corners)
        if ret == True:
            conv_size = (11, 11)
            corners = cv.cornerSubPix(gray, corners, conv_size, (-1, -1), criteria)
            
            cv.drawChessboardCorners(frame, (rows,columns), corners, ret)
            cv.imshow('img', frame)
            k = cv.waitKey()

            # draw and labelthe checkerboard corners
            cv.drawChessboardCorners(frame, (rows,columns), corners, ret)
            for i, corner in enumerate(corners):
                corner = (int(corner[0][0]), int(corner[0][1]))
                cv.putText(frame, str(i), (corner[0], corner[1]), cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 0, 125), 1)
        
        cv.imwrite('calibration_images/checkerboard/labeled_camera_{}.jpg'.format(camera_num+1), frame)
        
        cam_corners_pixel.append(corners)

    return np.array(cam_corners_pixel)

def triangulate_checkerboard(cam_corners_pixel):
    
    cam_pattern_spatial = []

    for pixel_slice in range(len(cam_corners_pixel[0])):
        u1, u2, u3, u4 = cam_corners_pixel[:,pixel_slice]
        u1, u2, u3, u4 = u1[0], u2[0], u3[0], u4[0]

        proj_center_pair = [(P1, u1), (P2, u2), (P3, u3), (P4, u4)]
        active_pairs = [pair for pair in proj_center_pair if pair[1] is not None]

        ball_xyzw = DLT(active_pairs)
        ball_xyz = ball_xyzw[0:3]
        cam_pattern_spatial.append(ball_xyz)
    
    return cam_pattern_spatial

def triangulate_checkerboard_handpicked(cam1_pix, cam2_pix, cam3_pix, cam4_pix):
    
    cam_pattern_spatial = []

    for pixel_slice in range(len(cam1_pix)):
        u1, u2, u3, u4 = cam1_pix[pixel_slice], cam2_pix[pixel_slice], cam3_pix[pixel_slice], cam4_pix[pixel_slice]
        print(u1, u2, u3, u4)

        proj_center_pair = [(P1, u1), (P2, u2), (P3, u3), (P4, u4)]
        active_pairs = [pair for pair in proj_center_pair if pair[1] is not None]

        ball_xyzw = DLT(active_pairs)
        # ball_xyz = ball_xyzw[0:3]
        cam_pattern_spatial.append(ball_xyzw)
    
    return cam_pattern_spatial


# corners_pixel = detect_checkerboard(
#         "calibration/calibration_images/big_checkerboard/camera_1/image_000.jpg",
#         "calibration/calibration_images/big_checkerboard/camera_2/image_000.jpg",
#         "calibration/calibration_images/big_checkerboard/camera_3/image_000.jpg",
#         "calibration/calibration_images/big_checkerboard/camera_4/image_000.jpg")

corners_pixel = detect_checkerboard(
        "calibration_images/checkerboard/camera_0/image_000.jpg",
        "calibration_images/checkerboard/camera_1/image_000.jpg",
        "calibration_images/checkerboard/camera_2/image_000.jpg",
        "calibration_images/checkerboard/camera_3/image_000.jpg",)

print(corners_pixel)

# corners_spatial = triangulate_checkerboard(corners_pixel)
corners_spatial = triangulate_checkerboard(corners_pixel)

# extract pure 3D points
corners_mat = np.vstack(corners_spatial)[:,:3]
# given points are along a square grid, find the center and edges of the grid
# NOTE: this assumes all checkerboard points are found (no gaps). This seems to
# be the case now, but should note in near future if something changes
center = np.mean(corners_mat, axis=0)
# find vectors corresponding to the edges of the grid
# note the 4 corners will be the 4 points furthest from the center
# NOTE: again, assumes registration finds a dense, regular grid of points
center_dists = np.linalg.norm(corners_mat - center, axis=1)
# sort the distances and take the 4 largest indices
edge_indices = np.argsort(center_dists)[-4:]
# take the corresponding points
edge_points = corners_mat[edge_indices]

# NOTE: the following can be modified depending on what we want
# (x, y, z) will be. This will just need to be checked with a visualizer)

# choose arbitrary corner, then find vectors to adjacent corners
base_point = edge_points[0]
print(base_point)
base_lengths = np.linalg.norm(edge_points - base_point, axis=1)
# keep 2 closest points (excluding itself), this corresponds to edges of the grid
base_indices = np.argsort(base_lengths)[1:3]
edges = edge_points[base_indices] - base_point

# translation is just inverse of center
translation = -center
# rotation is inverse of rotation matrix taking (e_1, e_2, e_3) to edges
# use manual gram schmidt to find orthonormal basis
R_x = edges[[0],:].T
R_x = R_x / np.linalg.norm(R_x)
R_y = edges[[1],:].T - R_x@R_x.T@edges[[1],:].T
R_y = R_y / np.linalg.norm(R_y)
R_xy = np.hstack((R_x, R_y))
# note cross product of two orthonormal vectors is orthogonal to both and normalized
# R_z = np.cross(R_x.T, R_y.T).T
R_z = np.cross(R_y.T, R_x.T).T
# theroetically R_z should be normalized already, but just in case
R_z = R_z / np.linalg.norm(R_z)

# stack vectors into matrix
R = np.hstack((R_xy, R_z))
# inverse of rotation is just transpose
rotation = R.T

print(f'translation: {repr(translation)}')
print(f'rotation: {repr(rotation)}')

# [origin, x-axis, y-axis]

camera1_axis_pixels = [(1108 , 923), (653 , 613), (1366 , 740)]
camera2_axis_pixels = [(651 , 981), (863 , 512), (1064 , 986)]
camera3_axis_pixels = [(1039 , 656), None, (797 , 987)]
camera4_axis_pixels = [(360 , 962), None, (79 , 786)]


# camera3_axis_pixels = [(1039 , 656), (810 , 958), None]
# camera4_axis_pixels = [(449 , 780), (175 , 633), None]

axis_spatial = triangulate_checkerboard_handpicked(camera1_axis_pixels, camera2_axis_pixels, camera3_axis_pixels, camera4_axis_pixels)

origin = axis_spatial[0][:3]
x_vec = axis_spatial[1][:3] - origin
y_vec = axis_spatial[2][:3] - origin

x_vec = x_vec[:3]/np.linalg.norm(x_vec[:3])
y_vec = y_vec[:3]/np.linalg.norm(y_vec[:3])
z_vec = np.cross(x_vec, y_vec)

# print(x_vec, y_vec, z_vec)

R = np.array([[x_vec[0], y_vec[0], z_vec[0]],
              [x_vec[1], y_vec[1], z_vec[1]],
              [x_vec[2], y_vec[2], z_vec[2]]])

R = np.linalg.inv(R)
print("R:", repr(R))
T = -origin
print("T:", repr(T))



# print(axis_spatial)
# images = [cv.imread('calibration/calibration_images/blank/camera_1/image_000.jpg', 1), 
#               cv.imread('calibration/calibration_images/blank/camera_2/image_000.jpg', 1), 
#               cv.imread('calibration/calibration_images/blank/camera_3/image_000.jpg', 1), 
#               cv.imread('calibration/calibration_images/blank/camera_4/image_000.jpg', 1)]

# show_reprojection(images[0], P1, axis_spatial[0])
# show_reprojection(images[0], P1, axis_spatial[1])
# show_reprojection(images[0], P1, axis_spatial[2])

# show_reprojection(images[1], P2, axis_spatial[0])
# show_reprojection(images[1], P2, axis_spatial[1])
# show_reprojection(images[1], P2, axis_spatial[2])

# show_reprojection(images[2], P3, axis_spatial[0])
# show_reprojection(images[2], P3, axis_spatial[1])
# show_reprojection(images[2], P3, axis_spatial[2])

# show_reprojection(images[3], P4, axis_spatial[0])
# show_reprojection(images[3], P4, axis_spatial[1])
# show_reprojection(images[3], P4, axis_spatial[2])







