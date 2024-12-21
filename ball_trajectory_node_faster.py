import rospy
import numpy as np
from geometry_msgs.msg import Twist, Pose
from trajectory_msgs.msg import JointTrajectoryPoint
from scipy.spatial.transform import Rotation as R

class BallTrajectoryPredictor:
    def __init__(self):
        rospy.init_node('ball_trajectory_node', anonymous=True)

        self.ball_info_sub = rospy.Subscriber('/ball_info', Twist, self.ball_callback, queue_size=10)
        self.predicted_pose_pub = rospy.Publisher('/predicted_pose', Pose, queue_size=10)

        self.target_pose = Pose()

    def ball_callback(self, ball_msg):
        try:
            ball_pos = np.array([ball_msg.linear.x, ball_msg.linear.y, ball_msg.linear.z])
            ball_vel = np.array([ball_msg.angular.x, ball_msg.angular.y, ball_msg.angular.z])

            # Ensure the velocity vector is non-zero to avoid divide-by-zero errors
            if np.linalg.norm(ball_vel) < 1e-3:
                rospy.logwarn("Ball velocity too low to calculate trajectory.")
                return

            target_pos = self.calc_target_racket_pose(ball_pos, ball_vel)
            z_axis, x_axis, y_axis = self.calculate_racket_orientation(ball_vel, target_pos)

            orientation = R.from_matrix(np.vstack((x_axis, y_axis, z_axis)).T).as_quat()
            
            self.target_pose.position.x = target_pos[0]
            self.target_pose.position.y = target_pos[1]
            self.target_pose.position.z = target_pos[2]
            self.target_pose.orientation.x = orientation[0]
            self.target_pose.orientation.y = orientation[1]
            self.target_pose.orientation.z = orientation[2]
            self.target_pose.orientation.w = orientation[3]

            self.predicted_pose_pub.publish(self.target_pose)

        except Exception as e:
            rospy.logerr(f"Error in ball_callback: {e}")

    def calc_target_racket_pose(self, ball_pos, ball_vel):
        time_to_target = 0.5  # Adjustable parameter
        gravity = np.array([0, 0, -9.81])

        target_pos = ball_pos + ball_vel * time_to_target + 0.5 * gravity * (time_to_target ** 2)
        return target_pos

    def calculate_racket_orientation(self, ball_vel, pos):
        # Normalize the velocity vector to calculate the z-axis
        z_axis = ball_vel / np.linalg.norm(ball_vel)

        # Define an arbitrary up vector (not collinear with z_axis)
        up_vector = np.array([0, 1, 0])
        if abs(np.dot(up_vector, z_axis)) > 0.9:
            up_vector = np.array([1, 0, 0])

        # Calculate orthogonal x and y axes
        x_axis = np.cross(up_vector, z_axis)
        x_axis /= np.linalg.norm(x_axis)

        y_axis = np.cross(z_axis, x_axis)
        return z_axis, x_axis, y_axis

    def run(self):
        rospy.spin()

if __name__ == '__main__':
    try:
        predictor = BallTrajectoryPredictor()
        predictor.run()
    except rospy.ROSInterruptException:
        pass