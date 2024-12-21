import cv2
import sys
import numpy as np
import os

"""
Play with RBG values to find an appropriate filter. Also applies a fixed HSV filter. So all together, you're tuning an RBG filter on top of an HSV filter.
"""

def nothing(x):
    pass


# Create a window
cv2.namedWindow('image')

# create trackbars for color change
cv2.createTrackbar('RMin', 'image', 0, 255, nothing)
cv2.createTrackbar('GMin', 'image', 0, 255, nothing)
cv2.createTrackbar('BMin', 'image', 0, 255, nothing)
cv2.createTrackbar('RMax', 'image', 0, 255, nothing)
cv2.createTrackbar('GMax', 'image', 0, 255, nothing)
cv2.createTrackbar('BMax', 'image', 0, 255, nothing)

# Set default value for MAX HSV trackbars.
cv2.setTrackbarPos('RMax', 'image', 255)
cv2.setTrackbarPos('GMax', 'image', 255)
cv2.setTrackbarPos('BMax', 'image', 255)

# Initialize to check if HSV min/max value changes
rMin = gMin = bMin = rMax = gMax = bMax = 0
prMin = pgMin = pbMin = prMax = pgMax = pbMax = 0

data_dir = os.path.join(os.path.dirname(__file__), "..", "data")
cap = cv2.VideoCapture(f"{data_dir}/snapshot/milad_nima6/camera_4.avi")
frame_num = 1450

count = 0
while count != frame_num:
    ret1, img = cap.read()
    count += 1

cv2.imshow('image', img)
waitTime = 33

while(1):

    tmp = img.copy()
    # get current positions of all trackbars
    rMin = cv2.getTrackbarPos('RMin', 'image')
    gMin = cv2.getTrackbarPos('GMin', 'image')
    bMin = cv2.getTrackbarPos('BMin', 'image')

    rMax = cv2.getTrackbarPos('RMax', 'image')
    gMax = cv2.getTrackbarPos('GMax', 'image')
    bMax = cv2.getTrackbarPos('BMax', 'image')

    # rbg filter
    bgr_lower = np.array([rMin, gMin, bMin])[::-1]  # convert RGB to BGR
    bgr_upper = np.array([rMax, gMax, bMax])[::-1]

    # Create HSV Image and threshold into a range.
    tmp = cv2.medianBlur(tmp, 5)
    tmp = cv2.cvtColor(tmp, cv2.COLOR_BGR2HSV)

    # Create RBG Image and threshold into a range.
    tmp = cv2.cvtColor(tmp, cv2.COLOR_HSV2BGR)
    bgr_mask = cv2.inRange(tmp, bgr_lower, bgr_upper)
    tmp = cv2.bitwise_and(tmp, tmp, mask=bgr_mask)

    output = tmp

    # Print if there is a change in HSV value
    if((prMin != rMin) | (pgMin != gMin) | (pbMin != bMin) | (prMax != rMax) | (pgMax != gMax) | (pbMax != bMax)):
        print("(rMin = %d , gMin = %d, bMin = %d), (rMax = %d , gMax = %d, bMax = %d)" % (
            rMin, gMin, bMin, rMax, gMax, bMax))
        prMin = rMin
        pgMin = gMin
        pbMin = bMin
        prMax = rMax
        pgMax = gMax
        pbMax = bMax

    # Display output image
    cv2.imshow('image', output)

    # Wait longer to prevent freeze for videos.
    if cv2.waitKey(waitTime) & 0xFF == ord('q'):
        break

cv2.destroyAllWindows()