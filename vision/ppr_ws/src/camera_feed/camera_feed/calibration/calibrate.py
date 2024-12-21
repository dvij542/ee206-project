#!/usr/bin/env python
import cv2 as cv
import numpy as np
from scipy import linalg
import os
import glob
import matplotlib.pyplot as plt
import pdb
from calibration.utils import calibrate_camera, stereo_calibrate

# reference: calibration_images/calibration_images

cam_0_image_nums = [
    777,
    825,
    869,
    935,
    971,
    1020,
    1073,
    1127,
    1177,
    1230,
    1276,
    1325,
    1408,
    1457,
    1518,
    1574,
    1628,
]

cam_1_image_nums = [
    683,
    731,
    777,
    1073,
    1127,
    1177,
    1230,
    1276,
    1325,
    1408,
    1457,
    1518,
    1574,
    1628,
]

cam_2_image_nums = [
    1127,
    1179,
    1232,
    1277,
    1330,
    1410,
    1460,
    1521,
    1576,
    1627,
    1671,
    1730,
    1840,
    1895,
    1937,
    1985,
    2026,
    2076,
    2131,
    2181,
    2220,
    # 2265,
]

cam_3_image_nums = [
    0,
    120,
    202,
    802,
    860,
    929,
    997,
    1064,
    1145,
    1229,
    1305
]


cam_0_paths = [f'calibration_images/calibration_images/camera_0/image_{i:03d}.jpg' for i in cam_0_image_nums]
cam_1_paths = [f'calibration_images/calibration_images/camera_1/image_{i:03d}.jpg' for i in cam_1_image_nums]
cam_2_paths = [f'calibration_images/calibration_images/camera_2/image_{i:03d}.jpg' for i in cam_2_image_nums]
cam_3_paths = [f'calibration_images/calibration_images2/camera_3/image_{i:03d}.jpg' for i in cam_3_image_nums]

cam_0_image_nums = [
    59,
    149,
    235,
    321,
    399,
    516,
    606,
    686,
]

cam_1_image_nums = [
    59,
    149,
    235,
    321,
    399,
    516,
    606,
    686,
]

cam_0_paths += [f'calibration_images/additional_calibration_images/camera_0/image_{i:03d}.jpg' for i in cam_0_image_nums]
cam_1_paths += [f'calibration_images/additional_calibration_images/camera_1/image_{i:03d}.jpg' for i in cam_1_image_nums]

cam_0_image_nums = [
    793,
    869,
    1719,
    1789,
    1874,
    1955,
    2039,
    2149,
    2313,
    2558,
]

cam_1_image_nums = [

]

cam_2_image_nums = [
    45,
    142,
    222,
    300,
    392,
    477,
    556,
    714,
    874,
    944,
    1062,
    1368,
]

cam_3_image_nums = [
    45,
    142,
    222,
    300,
    392,
    477,
    556,
    714,
    874,
    944,
    1062,
    1368,
]

cam_0_paths += [f'calibration_images/additional_calibration_images2/camera_0/image_{i:03d}.jpg' for i in cam_0_image_nums]
cam_1_paths += [f'calibration_images/additional_calibration_images2/camera_1/image_{i:03d}.jpg' for i in cam_1_image_nums]
cam_2_paths += [f'calibration_images/additional_calibration_images2/camera_2/image_{i:03d}.jpg' for i in cam_2_image_nums]
cam_3_paths += [f'calibration_images/additional_calibration_images2/camera_3/image_{i:03d}.jpg' for i in cam_3_image_nums]


# reference: calibration_images/pairs
pair_03_image_nums = [
    578,
    1005,
    1062,
    1124,
]
pair_13_image_nums = [
    508,
    561,
    708,
    736,
    767,
    802,
    830,
    870,
    934,
    1011,
    1076,
    1171,
    1224
]
pair_23_image_nums = [
    0,
    210,
    351,
    439,
    535,
    600,
    661,
    773,
    857,
    929,
    1296,
    1343,
]

pair_03_cam_0_paths = [f'calibration_images/pairs03/camera_0/image_{i:03d}.jpg' for i in pair_03_image_nums]
pair_03_cam_3_paths = [f'calibration_images/pairs03/camera_3/image_{i:03d}.jpg' for i in pair_03_image_nums]
pair_13_cam_1_paths = [f'calibration_images/pairs13/camera_1/image_{i:03d}.jpg' for i in pair_13_image_nums]
pair_13_cam_3_paths = [f'calibration_images/pairs13/camera_3/image_{i:03d}.jpg' for i in pair_13_image_nums]
pair_23_cam_2_paths = [f'calibration_images/pairs23/camera_2/image_{i:03d}.jpg' for i in pair_23_image_nums]
pair_23_cam_3_paths = [f'calibration_images/pairs23/camera_3/image_{i:03d}.jpg' for i in pair_23_image_nums]

pair_03_image_nums = [
    207,
    261,
    305,
    357,
    453,
    513,
    580,
    663,
    729,
    820,
    944,
]

pair_03_cam_0_paths += [f'calibration_images/more_pairs/camera_0/image_{i:03d}.jpg' for i in pair_03_image_nums]
pair_03_cam_3_paths += [f'calibration_images/more_pairs/camera_3/image_{i:03d}.jpg' for i in pair_03_image_nums]

pair_03_image_nums = [
    125,
    218,
    283,
    333,
    382,
    # 442,
    749,
]

pair_03_cam_0_paths += [f'calibration_images/more_pairs2/camera_0/image_{i:03d}.jpg' for i in pair_03_image_nums]
pair_03_cam_3_paths += [f'calibration_images/more_pairs2/camera_3/image_{i:03d}.jpg' for i in pair_03_image_nums]


cam_0_all_paths = (pair_03_cam_0_paths + cam_0_paths)
# print(cam_0_all_paths[20])
# cam_0_all_paths = cam_0_all_paths[:20] + cam_0_all_paths[21:]
cam_2_all_paths = pair_23_cam_3_paths + cam_2_paths
# print(cam_2_all_paths[33])
# cam_2_all_paths = cam_2_all_paths[:33] + cam_2_all_paths[34:]
mtx0, dist0, rvecs0, tvecs0, avg_re0 = calibrate_camera(cam_0_all_paths)
mtx1, dist1, rvecs1, tvecs1, avg_re1 = calibrate_camera(pair_13_cam_1_paths + cam_1_paths)
mtx2, dist2, rvecs2, tvecs2, avg_re2 = calibrate_camera(cam_2_all_paths)
cam_3_all_paths = pair_23_cam_3_paths + cam_3_paths
mtx3, dist3, rvecs3, tvecs3, avg_re3 = calibrate_camera(cam_3_all_paths) # these actually hurt calibration pair_03_cam_3_paths + pair_13_cam_3_paths + 

mtx_list = [mtx0, mtx1, mtx2, mtx3]
dist_list = [dist0, dist1, dist2, dist3]
rvecs_list = [rvecs0, rvecs1, rvecs2, rvecs3]
tvecs_list = [tvecs0, tvecs1, tvecs2, tvecs3]

"""
https://correlated.kayako.com/article/30-projection-error-explanation-and-causes#:~:text=With%20a%20good%20test%20setup,or%20above%20may%20indicate%20issues.
Want reprojection error to be within 0.02-0.05 range
"""

print("Performance of individual camera calibrations (no stereo calibration yet. Average reprojection errors: ", avg_re0, avg_re1, avg_re2, avg_re3)

R_03, T_03 = stereo_calibrate(mtx3, dist3, mtx0, dist0, pair_03_cam_3_paths, pair_03_cam_0_paths)
R_13, T_13 = stereo_calibrate(mtx3, dist3, mtx1, dist1, pair_13_cam_3_paths, pair_13_cam_1_paths)
R_23, T_23 = stereo_calibrate(mtx3, dist3, mtx2, dist2, pair_23_cam_3_paths, pair_23_cam_2_paths)

RT03 = np.concatenate([R_03, T_03], axis=-1)
P0 = mtx0 @ RT03
print("P0_changed_coords:")
print(repr(P0))

RT13 = np.concatenate([R_13, T_13], axis=-1)
P1 = mtx1 @ RT13
print("P1_changed_coords:")
print(repr(P1))

RT23 = np.concatenate([R_23, T_23], axis=-1)
P2 = mtx2 @ RT23
print("P2_changed_coords:")
print(repr(P2))

RT3S = np.concatenate([np.eye(3), [[0], [0], [0]]], axis=-1)
P3 = mtx3 @ RT3S
print("P3_changed_coords:")
print(repr(P3))
