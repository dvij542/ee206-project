import numpy as np
import cv2
import itertools

from calibration.calibration_result import P1, P2, P3, P4, g_spatial_cam4

def normalize_pixels(x):
    return x[0:2] / x[2]

x = np.arange(-50, 50, step=10)
y = np.arange(-200, 200, step=10)
z = np.arange(0, 50, step=10)
points = itertools.product(x, y, z)

camera1_img = cv2.imread("calibration_images/blank/camera_0/image_000.jpg")
camera2_img = cv2.imread("calibration_images/blank/camera_1/image_000.jpg")
camera3_img = cv2.imread("calibration_images/blank/camera_2/image_000.jpg")
camera4_img = cv2.imread("calibration_images/blank/camera_3/image_000.jpg")

g_cam4_spatial = np.linalg.inv(g_spatial_cam4)
for point in points:
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


