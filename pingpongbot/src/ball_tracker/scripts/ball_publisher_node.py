#!/usr/bin/env python3

import rospy
from geometry_msgs.msg import Twist
import random

def ball_publisher():
    # Initialize the ROS node
    rospy.init_node('ball_publisher', anonymous=True)

    # Create a publisher to the /ball_pose topic
    pub = rospy.Publisher('/ball_pose', Twist, queue_size=10)

    # Set the publishing rate
    rate = rospy.Rate(1)  # 1 Hz (publishes once per second)

    while not rospy.is_shutdown():
        # Create a Twist message to simulate ball position and velocity
        ball_msg = Twist()

        # Randomly simulate some ball position and velocity values
        ball_msg.linear.x = random.uniform(0.0, 5.0)  # x position
        ball_msg.linear.y = random.uniform(0.0, 5.0)  # y position
        ball_msg.linear.z = random.uniform(0.0, 5.0)  # z position

        ball_msg.angular.x = random.uniform(-1.0, 1.0)  # x velocity
        ball_msg.angular.y = random.uniform(-1.0, 1.0)  # y velocity
        ball_msg.angular.z = random.uniform(-1.0, 1.0)  # z velocity

        # Publish the message
        rospy.loginfo(f"Publishing ball position and velocity: {ball_msg}")
        pub.publish(ball_msg)

        # Sleep for the specified rate
        rate.sleep()

if __name__ == '__main__':
    try:
        ball_publisher()
    except rospy.ROSInterruptException:
        pass
