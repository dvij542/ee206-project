#!/usr/bin/env python3

import rospy
import mujoco
import os
import numpy as np
from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Twist

# Load the model using MuJoCo 3.x API
model_path = os.path.expanduser("~/ros_workspaces/pingpongbot/src/robot_controller/iiwa14.xml")
model = mujoco.MjModel.from_xml_path(model_path)
data = mujoco.MjData(model)

def command_callback(msg):
    # Extract joint angles from the incoming message
    joint_angles = msg.data

    # Set joint positions in the MuJoCo simulation
    data.qpos[:len(joint_angles)] = joint_angles
    mujoco.mj_step(model, data)  # Step the simulation

    # Publish the robot's current joint state after the update
    publish_robot_state()

def publish_robot_state():
    # Prepare and publish the JointState message
    joint_state_msg = JointState()
    joint_state_msg.position = data.qpos[:].tolist()
    joint_state_msg.velocity = data.qvel[:].tolist()
    joint_state_publisher.publish(joint_state_msg)

    # Publish the ball's ground-truth position
    ball_position = Twist()
    ball_position.linear.x = data.qpos[0]  # Example ball x position
    ball_position.linear.y = data.qpos[1]  # Example ball y position
    ball_position.linear.z = data.qpos[2]  # Example ball z position
    ball_pose_publisher.publish(ball_position)

def mujoco_control_node():
    # Initialize the ROS node
    rospy.init_node('mujoco_control_node')

    # Set up ROS subscribers and publishers
    rospy.Subscriber('/lbr/PositionJointInterface_trajectory_controller/command', Float64MultiArray, command_callback)
    global joint_state_publisher, ball_pose_publisher
    joint_state_publisher = rospy.Publisher('/lbr/PositionJointInterface_trajectory_controller/state', JointState, queue_size=10)
    ball_pose_publisher = rospy.Publisher('/ball_pose', Twist, queue_size=10)

    # Keep the node running
    rate = rospy.Rate(30)  # Run at 30 Hz
    while not rospy.is_shutdown():
        mujoco.mj_step(model, data)  # Continuously step the simulation
        rate.sleep()

if __name__ == '__main__':
    try:
        mujoco_control_node()
    except rospy.ROSInterruptException:
        pass
