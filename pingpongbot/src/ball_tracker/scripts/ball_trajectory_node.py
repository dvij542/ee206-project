#!/usr/bin/env python3

import rospy
from geometry_msgs.msg import Pose, Twist
from std_msgs.msg import Float32
import numpy as np
from scipy.spatial.transform import Rotation as R

# Constants
GRAVITY = -9.81  # Gravity constant
TABLE_HEIGHT = 0.56  # Table height in meters
TABLE_SHIFT = 1.7  # Shift for table position

class BallTracker:
    def __init__(self):
        # Initialize ROS node
        rospy.init_node('ball_tracker')

        # Subscribe to the /ball_pose topic
        rospy.Subscriber('/ball_pose', Twist, self.ball_callback)
        
        # Placeholder for current and target poses
        self.curr_target = np.zeros(7)
        self.last_qvel = np.zeros(3)
        self.last_qpos = np.zeros(3)
        
    def ball_callback(self, data):
        # Extract position and velocity from the Twist message
        ball_pos = np.array([data.linear.x, data.linear.y, data.linear.z])
        ball_vel = np.array([data.angular.x, data.angular.y, data.angular.z])

        # Calculate the target racket pose based on predicted trajectory
        self.calc_target_racket_pose(ball_pos, ball_vel)

        # Log the predicted target position
        rospy.loginfo(f"Predicted target pose: {self.curr_target}")

    def reset_ball_throw(self):
        initial_velocity = np.array([-4.5, 0., 2.])
        self.last_qvel = initial_velocity
        self.last_qpos = np.array([1.8 + TABLE_SHIFT, np.random.uniform(-0.4, 0.4), 0.9])

    def calc_target_racket_pose(self, ball_pos, ball_vel, bounce_factor=1, table_z=TABLE_HEIGHT):
        # Get predicted future position of the ball
        if ball_vel[0] > 0 or ball_pos[0] < 0.5 or ball_vel[2] > 15.:
            return

        # Time to reach the target x position (assuming racket hits ball at x=0)
        x_target = 0.
        T = (x_target - ball_pos[0]) / ball_vel[0]
        y = ball_pos[1] + ball_vel[1] * T
        z = ball_pos[2] + ball_vel[2] * T + 0.5 * GRAVITY * T * T - 0.1
        v_future = ball_vel + np.array([0., 0., GRAVITY * T])

        # Handle bounce
        if z < table_z:
            vz_bounce = -np.sqrt(-2 * GRAVITY * max(ball_pos[2] - table_z, 0) + ball_vel[2] ** 2)
            t_bounce = (vz_bounce - ball_vel[2]) / GRAVITY
            t_remaining = T - t_bounce
            v_future[2] = -vz_bounce + GRAVITY * t_remaining
            z = table_z + 0.5 * GRAVITY * t_remaining ** 2 - vz_bounce * t_remaining * bounce_factor - 0.1

        # Calculate future position and orientation
        pos = np.array([x_target, y, z])
        z_axis, x_axis, y_axis = self.calculate_racket_orientation(v_future, pos)
        
        # Set target position and orientation
        self.set_target_pose(pos, z_axis, x_axis, y_axis)

    def calculate_racket_orientation(self, ball_vel, pos):
        yzr = np.meshgrid(np.linspace(-1, 1, 100), np.linspace(-1, 0.1, 100))
        yzr = np.array(yzr).reshape(2, -1).T
        xyzr = np.concatenate([np.ones((yzr.shape[0], 1)), yzr], axis=1)
        xyzr = xyzr / np.linalg.norm(xyzr, axis=1)[:, None]

        ball_vels = np.tile(ball_vel, (100 * 100, 1)).T
        ball_reflected_vels = ball_vels - 2 * np.sum(ball_vels * xyzr.T, axis=0, keepdims=True) * xyzr.T
        vz_hits = -np.sqrt(-2 * GRAVITY * max(pos[2] - TABLE_HEIGHT, 0) + ball_reflected_vels[2] ** 2)
        t_hits = (vz_hits - ball_reflected_vels[2]) / GRAVITY
        x_hits = pos[0] + ball_reflected_vels[0] * t_hits
        y_hits = pos[1] + ball_reflected_vels[1] * t_hits

        costs = (x_hits - (TABLE_SHIFT + 1.37 / 2.)) ** 2 + (y_hits - 0) ** 2
        idx = np.argmin(costs)
        z_axis = xyzr[idx]

        theta_z = np.arctan2(pos[2], pos[0])
        x_axis = np.array([0., np.cos(theta_z), np.sin(theta_z)])
        x_axis[0] = (-x_axis[1] * z_axis[1] - x_axis[2] * z_axis[2]) / z_axis[0]
        x_axis = x_axis / np.linalg.norm(x_axis)

        y_axis = np.cross(z_axis, x_axis)
        return z_axis, x_axis, y_axis

    def set_target_pose(self, pos, z_axis, x_axis, y_axis):
        """
        Sets the target pose for the robot based on the calculated racket position and orientation.
        """
        Rot = np.array([x_axis, y_axis, z_axis]).T
        r = R.from_matrix(Rot)
        q = r.as_quat()

        self.curr_target[:3] = pos  # Position
        self.curr_target[3:7] = q   # Orientation

    def start(self):
        rospy.spin()

if __name__ == '__main__':
    try:
        ball_tracker = BallTracker()
        ball_tracker.start()
    except rospy.ROSInterruptException:
        pass
