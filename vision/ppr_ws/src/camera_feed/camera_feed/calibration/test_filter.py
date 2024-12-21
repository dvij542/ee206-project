import cv2
from collections import deque
import argparse
from scene_interpreter.ball_detector.ball_detection_utils import generate_contours
import os

data_dir = os.path.join(os.path.dirname(__file__), "..", "data")

ap = argparse.ArgumentParser()
ap.add_argument("-v", "--video",
                type=str,
                default="snapshot/test",
                help="path to the video file")
ap.add_argument("--num_frames",
                type=int,
                default=500,
                )
ap.add_argument("-b", "--buffer", type=int, default=64,
                help="max buffer size")
ap.add_argument('--debug', action="store_true", help='visualize ball detection')
args = vars(ap.parse_args())
pts = deque(maxlen=args["buffer"])
num_frames = args["num_frames"]
folder = args["video"]
debug = args["debug"]

# detection with previous detection tracking

counter = 0

cap1 = cv2.VideoCapture(f"{data_dir}/{folder}/camera_1.avi")
cap2 = cv2.VideoCapture(f"{data_dir}/{folder}/camera_2.avi")
cap3 = cv2.VideoCapture(f"{data_dir}/{folder}/camera_3.avi")
cap4 = cv2.VideoCapture(f"{data_dir}/{folder}/camera_4.avi")

while cap1.isOpened() and cap2.isOpened() and cap3.isOpened() and cap4.isOpened():

    ret1, frame_cam1 = cap1.read()
    ret2, frame_cam2 = cap2.read()
    ret3, frame_cam3 = cap3.read()
    ret4, frame_cam4 = cap4.read()

    if not (ret1 and ret2 and ret3 and ret4):
        break

    cv2.imshow("Frame", frame_cam3)
    generate_contours(frame_cam3, show_mask=True, lower_BGR = (0, 0, 90), upper_BGR = (90, 255, 255)) # 112

    key = cv2.waitKey(1)
    # key = cv2.waitKey()
    if key == 98:
        # go back one frame on pressing b
        counter -= 1
    elif key == 113:
        # exit if key == 'q'
        break
    else:
        counter += 1
    
cv2.destroyAllWindows()

# do not delete the following lines. if it's not there, the computer crashes upon pressing q.
cv2.waitKey(1)
cv2.waitKey(1)