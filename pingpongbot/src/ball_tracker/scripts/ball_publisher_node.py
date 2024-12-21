#!/usr/bin/env python3

import rospy
from geometry_msgs.msg import Twist
import random

def publish_random_ball_pose():
    rospy.init_node('ball_pose_publisher', anonymous=True)
    pub = rospy.Publisher('/ball_pose', Twist, queue_size=10)
    rate = rospy.Rate(10)  # Publish at 10 Hz

    while not rospy.is_shutdown():
        # Generate random ball position and velocity
        ball_position = [
            random.uniform(1.0, 3.0),  # x position between 1.0 and 3.0 meters
            random.uniform(-0.5, 0.5), # y position between -0.5 and 0.5 meters
            random.uniform(0.5, 2.0)   # z position between 0.5 and 2.0 meters
        ]
        
        ball_velocity = [
            random.uniform(-5.0, 5.0), # x velocity between -5.0 and 5.0 m/s
            random.uniform(-2.0, 2.0), # y velocity between -2.0 and 2.0 m/s
            random.uniform(-1.0, 3.0)  # z velocity between -1.0 and 3.0 m/s
        ]

        # Create and populate the Twist message
        msg = Twist()
        msg.linear.x, msg.linear.y, msg.linear.z = ball_position
        msg.angular.x, msg.angular.y, msg.angular.z = ball_velocity

        # Log and publish the message
        rospy.loginfo(f"Publishing random ball position: {ball_position} and velocity: {ball_velocity}")
        pub.publish(msg)
        rate.sleep()

if __name__ == '__main__':
    try:
        publish_random_ball_pose()
    except rospy.ROSInterruptException:
        pass
