import numpy as np
import cv2

"""
Find the diameter of a ping pong ball in pixels.
"""

# 73, 14

img = cv2.imread('snapshot/simple_bounce/camera_1/image_000.jpg')

tmp = img.copy()

# cv2.imshow('image', img)
# cv2.waitKey(1000)

# hsv filter
lower = np.array([0, 66, 55])
upper = np.array([46, 255, 255])

# rbg filter
bgr_lower = np.array([73, 14, 0])[::-1]  # convert RGB to BGR
bgr_upper = np.array([255, 255, 255])[::-1]

# Create HSV Image and threshold into a range.
tmp = cv2.medianBlur(tmp, 5)
tmp = cv2.cvtColor(tmp, cv2.COLOR_BGR2HSV)
hsv_mask = cv2.inRange(tmp, lower, upper)
tmp = cv2.bitwise_and(tmp, tmp, mask=hsv_mask)

# Create RBG Image and threshold into a range.
tmp = cv2.cvtColor(tmp, cv2.COLOR_HSV2BGR)
bgr_mask = cv2.inRange(tmp, bgr_lower, bgr_upper)
tmp = cv2.bitwise_and(tmp, tmp, mask=bgr_mask)

mask = np.zeros(tmp.shape[:2], dtype="uint8")
mask[400:500, 400:1200] = 1
# print(img.shape)
# print(tmp.shape)
# print(mask.shape)
# print(hsv_mask.shape)
tmp = cv2.bitwise_and(tmp, tmp, mask=mask)

output = tmp[:, :, 2]
nonzero_cols = list(np.count_nonzero(output, axis=0))
print(nonzero_cols)
largest_vertical_streak = max(nonzero_cols)
print("Max height in pixels", largest_vertical_streak)
# Display output image
img = cv2.line(img, (nonzero_cols.index(largest_vertical_streak), 0),
               (nonzero_cols.index(largest_vertical_streak), 1080), (0, 0, 255))
cv2.imshow('image', img)
cv2.waitKey(10000)
