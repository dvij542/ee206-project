#!/usr/bin/env python
import cv2 as cv
import numpy as np

def calibrate_camera(images_names, show_checkerboard = False):
    # images_names = sorted(glob.glob(images_folder))
    images = []
    for imname in images_names:
        im = cv.imread(imname, 1)
        images.append(im)

    # criteria used by checkerboard pattern detector.
    # Change this if the code can't find the checkerboard
    criteria = (cv.TERM_CRITERIA_EPS + cv.TERM_CRITERIA_MAX_ITER, 100, 0.0001) # (..., max_iter, accuracy level) https://docs.opencv.org/4.x/d9/d5d/classcv_1_1TermCriteria.html#a56fecdc291ccaba8aad27d67ccf72c57a857609e73e7028e638d2ea649f3b45d5

    rows = 6  # number of checkerboard rows.
    columns = 7  # number of checkerboard columns.
    world_scaling = 5  # change this to the real world square size. (cm)

    # coordinates of squares in the checkerboard frame (not the camera frame)
    objp = np.zeros((rows*columns, 3), np.float32)
    objp[:, :2] = np.mgrid[0:rows, 0:columns].T.reshape(-1, 2)
    objp = world_scaling*objp

    # frame dimensions. Frames should be the same size.
    width = images[0].shape[1]
    height = images[0].shape[0]

    # Pixel coordinates of checkerboards
    imgpoints = []  # 2d points in image plane.

    # coordinates of the checkerboard in checkerboard world space.
    objpoints = []  # 3d point in real world space

    # print(len(images))


    for i, frame in enumerate(images):
        gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)

        # find the checkerboard
        ret, corners = cv.findChessboardCorners(gray, (rows, columns), None)
        # pdb.set_trace()

        if ret == True:

            # Convolution size used to improve corner detection. Don't make this too large.
            conv_size = (11, 11)

            # opencv can attempt to improve the checkerboard coordinates
            corners = cv.cornerSubPix(
                gray, corners, conv_size, (-1, -1), criteria)
            
            if show_checkerboard:
                print(i)
                cv.drawChessboardCorners(frame, (rows,columns), corners, ret)
                cv.imshow('img', frame)
                k = cv.waitKey()

            objpoints.append(objp)
            imgpoints.append(corners)

    assert len(objpoints) > 0 and len(imgpoints) > 0
    print("objpoints")
    # print(objpoints[0])
    print(len(objpoints), objpoints[0].shape)
    print("imgpoints")
    # print(imgpoints[0])
    print(len(imgpoints), imgpoints[0].shape)
    ret, mtx, dist, rvecs, tvecs = cv.calibrateCamera(
        objpoints, imgpoints, (width, height), None, None)
    # print('rmse:', ret)
    # print('camera matrix:\n', mtx)
    # print('distortion coeffs:', dist)
    # print('Rs:\n', rvecs)
    # print('Ts:\n', tvecs)
    # R, _ = cv.Rodrigues(rvecs[0])
    # T = tvecs[0]

    # calculate reprojection error
    total_error = 0
    for i in range(len(objpoints)):
        imgpoints2, _ = cv.projectPoints(
            objpoints[i], rvecs[i], tvecs[i], mtx, dist)
        error = cv.norm(imgpoints[i], imgpoints2, cv.NORM_L2)/len(imgpoints2)
        total_error += error
    avg_reproj_error = total_error / len(objpoints)

    return mtx, dist, rvecs, tvecs, avg_reproj_error


def stereo_calibrate(mtx1, dist1, mtx2, dist2, c1_names, c2_names):
    # read the synched frames
    # c1_names = sorted(glob.glob(camera1_folder))
    # c2_names = sorted(glob.glob(camera2_folder))

    c1_images = [cv.imread(c1_name, 1) for c1_name in c1_names]
    c2_images = [cv.imread(c2_name, 1) for c2_name in c2_names]

    # change this if stereo calibration not good.
    criteria = (cv.TERM_CRITERIA_EPS + cv.TERM_CRITERIA_MAX_ITER, 100, 0.0001)

    rows = 6  # number of checkerboard rows.
    columns = 7  # number of checkerboard columns.
    world_scaling = 5  # change this to the real world square size. (cm)

    # coordinates of squares in the checkerboard world space
    objp = np.zeros((rows*columns, 3), np.float32)
    objp[:, :2] = np.mgrid[0:rows, 0:columns].T.reshape(-1, 2)
    objp = world_scaling*objp

    # frame dimensions. Frames should be the same size.
    width = c1_images[0].shape[1]
    height = c1_images[0].shape[0]

    # Pixel coordinates of checkerboards
    imgpoints_left = []  # 2d points in image plane.
    imgpoints_right = []

    # coordinates of the checkerboard in checkerboard world space.
    objpoints = []  # 3d point in real world space

    for frame1, frame2 in zip(c1_images, c2_images):
        gray1 = cv.cvtColor(frame1, cv.COLOR_BGR2GRAY)
        gray2 = cv.cvtColor(frame2, cv.COLOR_BGR2GRAY)
        c_ret1, corners1 = cv.findChessboardCorners(
            gray1, (rows, columns), None)
        c_ret2, corners2 = cv.findChessboardCorners(
            gray2, (rows, columns), None)

        if c_ret1 == True and c_ret2 == True:
            corners1 = cv.cornerSubPix(
                gray1, corners1, (11, 11), (-1, -1), criteria)
            corners2 = cv.cornerSubPix(
                gray2, corners2, (11, 11), (-1, -1), criteria)

            objpoints.append(objp)
            imgpoints_left.append(corners1)
            imgpoints_right.append(corners2)

    stereocalibration_flags = cv.CALIB_FIX_INTRINSIC
    ret, CM1, dist1, CM2, dist2, R, T, E, F = cv.stereoCalibrate(objpoints, imgpoints_left, imgpoints_right, mtx1, dist1,
                                                                 mtx2, dist2, (width, height), criteria=criteria, flags=stereocalibration_flags)

    # print(ret)
    return R, T