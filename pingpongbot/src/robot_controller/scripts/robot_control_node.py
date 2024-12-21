#!/usr/bin/env python3

import rospy
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from geometry_msgs.msg import Twist

class RobotControlNode:
    def __init__(self):
        rospy.init_node('robot_control')

        # Publisher to send robot state (joint positions, velocities) to the state topic
        self.state_pub = rospy.Publisher('/lbr/PositionJointInterface_trajectory_controller/state', JointState, queue_size=10)
        print("publish state")
        # Publisher for ground truth ball position
        self.ball_pose_pub = rospy.Publisher('/ball_pose', Twist, queue_size=10)
        print("publish ball_pose")

        # Subscriber to receive joint commands
        rospy.Subscriber('/lbr/PositionJointInterface_trajectory_controller/command', JointTrajectory, self.command_callback)
        print("subscribe joint commands")
        # Initialize joint state variables
        self.joint_state = JointState()
        self.joint_state.name = ["joint_1", "joint_2", "joint_3", "joint_4", "joint_5", "joint_6", "joint_7"]
        self.joint_state.position = [0.0] * 7
        self.joint_state.velocity = [0.0] * 7

    def command_callback(self, msg):
        # Update joint positions from the received command
        if msg.points:
            self.joint_state.position = msg.points[0].positions
            self.joint_state.velocity = msg.points[0].velocities if msg.points[0].velocities else [0.0] * 7

            # Publish to MuJoCo via the mujoco_control node
            self.publish_to_mujoco()
            print("publish to mujoco")

    def publish_to_mujoco(self):
        # Publish the updated joint state to the /lbr/PositionJointInterface_trajectory_controller/state topic
        self.joint_state.header = Header()
        self.joint_state.header.stamp = rospy.Time.now()
        self.state_pub.publish(self.joint_state)

        # Publish the ground truth ball position (mock data for now)
        ball_pose = Twist()
        ball_pose.linear.x = 1.0  # Placeholder values
        ball_pose.linear.y = 0.5
        ball_pose.linear.z = 0.75
        self.ball_pose_pub.publish(ball_pose)
        print("publishing to mujoco")
    def run(self):
        rate = rospy.Rate(50)  # Control loop rate in Hz
        while not rospy.is_shutdown():
            self.publish_to_mujoco()
            rate.sleep()

if __name__ == '__main__':
    node = RobotControlNode()
    node.run()
