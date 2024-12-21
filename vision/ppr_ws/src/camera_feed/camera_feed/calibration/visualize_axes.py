import numpy as np
import cv2

from calibration.calibration_result import P1, P2, P3, P4, g_spatial_cam4

def normalize_pixels(x):
    return x[0:2] / x[2]

axis_points = np.array([[0, 0, 0], [1, 0, 0], [0, 1, 0], [0, 0, 1]])

camera1_img = cv2.imread("calibration_images/blank/camera_0/image_000.jpg")
camera2_img = cv2.imread("calibration_images/blank/camera_1/image_000.jpg")
camera3_img = cv2.imread("calibration_images/blank/camera_2/image_000.jpg")
camera4_img = cv2.imread("calibration_images/blank/camera_3/image_000.jpg")

g_cam4_spatial = np.linalg.inv(g_spatial_cam4)

# plot axes
for i in range(500):
    for j in range(axis_points.shape[0]):
        loc = i*axis_points[j]
        homog = np.append(loc, [1])
        spatial_coord = g_cam4_spatial @ homog
        pix1 = normalize_pixels(P1@spatial_coord)
        pix2 = normalize_pixels(P2@spatial_coord)
        pix3 = normalize_pixels(P3@spatial_coord)
        pix4 = normalize_pixels(P4@spatial_coord)
        color = [0, 0, 0] # in BGR
        if j == 1:
            color = [255, 0, 0] # x is blue
        elif j == 2:
            color = [0, 255, 0] # y is green
        elif j == 3:
            color = [0, 0, 255] # z is red
        camera1_img = cv2.circle(camera1_img, (int(pix1[0]), int(pix1[1])), 4, color, -1)
        camera2_img = cv2.circle(camera2_img, (int(pix2[0]), int(pix2[1])), 4, color, -1)
        camera3_img = cv2.circle(camera3_img, (int(pix3[0]), int(pix3[1])), 4, color, -1)
        camera4_img = cv2.circle(camera4_img, (int(pix4[0]), int(pix4[1])), 4, color, -1)

# plot table points. want to verify cameras agree on position
table_points = [
    np.array([-76.2, -137.16, 0]), 
    np.array([76.2, -137.16, 0]), 
    np.array([-76.2, 137.16, 0]), 
    np.array([76.2, 137.16, 0]), 
]

for point in table_points:
    homog = np.append(point, [1])
    spatial_coord = g_cam4_spatial @ homog
    pix1 = normalize_pixels(P1@spatial_coord)
    pix2 = normalize_pixels(P2@spatial_coord)
    pix3 = normalize_pixels(P3@spatial_coord)
    pix4 = normalize_pixels(P4@spatial_coord)
    color = [255, 37, 120] # in BGR
    camera1_img = cv2.circle(camera1_img, (int(pix1[0]), int(pix1[1])), 4, color, thickness=1)
    camera2_img = cv2.circle(camera2_img, (int(pix2[0]), int(pix2[1])), 4, color, thickness=1)
    camera3_img = cv2.circle(camera3_img, (int(pix3[0]), int(pix3[1])), 4, color, thickness=1)
    camera4_img = cv2.circle(camera4_img, (int(pix4[0]), int(pix4[1])), 4, color, thickness=1)

cv2.imshow('camera1', camera1_img)
cv2.imshow('camera2', camera2_img)
cv2.imshow('camera3', camera3_img)
cv2.imshow('camera4', camera4_img)

cv2.imwrite("calibration_images/checkerboard/axes_visualized0.jpg", camera1_img)
cv2.imwrite("calibration_images/checkerboard/axes_visualized1.jpg", camera2_img)
cv2.imwrite("calibration_images/checkerboard/axes_visualized2.jpg", camera3_img)
cv2.imwrite("calibration_images/checkerboard/axes_visualized3.jpg", camera4_img)

k = cv2.waitKey()


