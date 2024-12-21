#!/usr/bin/env python3

import os
import sys

def ros1_bridge(pipe_path):
    """ROS1 process to read from the pipe and publish to ROS1."""
    os.environ['PYTHONPATH'] = '/opt/ros/noetic/lib/python3/dist-packages'
    import rospy
    from geometry_msgs.msg import Twist as Ros1Twist

    rospy.init_node('ros1_bridge', anonymous=True)
    publisher = rospy.Publisher('/ball_info', Ros1Twist, queue_size=10)

    print("[ROS1] Bridge is running...")

    with open(pipe_path, 'r') as pipe:
        while not rospy.is_shutdown():
            line = pipe.readline().strip()
            if not line:
                continue

            try:
                linear, angular = eval(line)
                ros1_msg = Ros1Twist()
                ros1_msg.linear.x, ros1_msg.linear.y, ros1_msg.linear.z = linear
                ros1_msg.angular.x, ros1_msg.angular.y, ros1_msg.angular.z = angular
                publisher.publish(ros1_msg)
                print(f"[ROS1] Published: {ros1_msg}")
            except Exception as e:
                print(f"[ROS1] Error: {e}")


if __name__ == '__main__':
    pipe_path = sys.argv[1]
    ros1_bridge(pipe_path)
