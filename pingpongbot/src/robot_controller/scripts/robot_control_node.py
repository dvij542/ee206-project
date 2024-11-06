#!/usr/bin/env python3

import rospy
from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Twist

# Placeholder function to simulate sending commands to MuJoCo
def send_command_to_mujoco(joint_angles):
    # Normally, you would use the MuJoCo Python API to set joint angles here.
    # For example, you could use mujoco.sim.data.qpos[:] = joint_angles
    rospy.loginfo(f"Setting MuJoCo joint angles to: {joint_angles}")
    # Simulate robot state (angle + velocity)
    return joint_angles, [0.0] * len(joint_angles)  # Velocity placeholders

# Placeholder function to get the ball's position from MuJoCo
def get_ball_position():
    # Normally, you would retrieve the actual ball position from the MuJoCo simulation
    ball_position = Twist()
    ball_position.linear.x = 1.0  # Example values
    ball_position.linear.y = 1.5
    ball_position.linear.z = 0.5
    return ball_position

def command_callback(msg):
    # Retrieve joint commands from the incoming message
    joint_angles = msg.data

    # Send joint angles to MuJoCo and retrieve the simulated state
    current_angles, current_velocities = send_command_to_mujoco(joint_angles)

    # Publish the robot's current joint state
    joint_state_msg = JointState()
    joint_state_msg.position = current_angles
    joint_state_msg.velocity = current_velocities
    joint_state_publisher.publish(joint_state_msg)

    # Publish the current ball position as ground-truth data
    ball_position = get_ball_position()
    ball_pose_publisher.publish(ball_position)

def robot_control_node():
    # Initialize the node
    rospy.init_node('robot_control_node')

    # Subscribe to the command topic to receive joint angle commands
    rospy.Subscriber('/lbr/PositionJointInterface_trajectory_controller/command', Float64MultiArray, command_callback)

    # Publishers for robot state and ball position
    global joint_state_publisher, ball_pose_publisher
    joint_state_publisher = rospy.Publisher('/lbr/PositionJointInterface_trajectory_controller/state', JointState, queue_size=10)
    ball_pose_publisher = rospy.Publisher('/ball_pose', Twist, queue_size=10)

    # Keep the node running
    rospy.spin()

if __name__ == '__main__':
    try:
        robot_control_node()
    except rospy.ROSInterruptException:
        pass
