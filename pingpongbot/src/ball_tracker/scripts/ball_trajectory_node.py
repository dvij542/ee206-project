#!/usr/bin/env python3

import rospy
from geometry_msgs.msg import Pose, Twist
from std_msgs.msg import Float32

# Define a callback function to handle incoming ball position and velocity
def ball_callback(data):
    # Access ball position from `linear` and velocity from `angular`
    ball_position = data.linear
    ball_velocity = data.angular

    # Placeholder function to predict trajectory (for demonstration)
    target_position = predict_target_position(ball_position, ball_velocity)

    # Log or publish the predicted position as needed
    rospy.loginfo(f"Predicted target position: {target_position}")

# Function to calculate a basic predicted position based on current ball position and velocity
def predict_target_position(position, velocity, time_ahead=1.0):
    # Simple prediction without gravity for demonstration
    target_x = position.x + velocity.x * time_ahead
    target_y = position.y + velocity.y * time_ahead
    target_z = position.z + velocity.z * time_ahead

    # Return as a Pose or simple data structure (here using Pose for consistency)
    target_pose = Pose()
    target_pose.position.x = target_x
    target_pose.position.y = target_y
    target_pose.position.z = target_z
    return target_pose

def ball_trajectory_node():
    # Initialize the node
    rospy.init_node('ball_trajectory_predictor')

    # Subscribe to the /ball_pose topic to receive ball position and velocity updates
    rospy.Subscriber('/ball_pose', Twist, ball_callback)

    # Keep the node running
    rospy.spin()

if __name__ == '__main__':
    try:
        ball_trajectory_node()
    except rospy.ROSInterruptException:
        pass
