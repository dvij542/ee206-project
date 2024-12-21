#!/usr/bin/env python3

import os
import sys
import numpy as np

R = np.array([[-1, 0, 0], [0, 1, 0], [0, 0, 1]])
t = np.array([1.7, 0, 0.76])


def ros2_bridge(pipe_path):
    """ROS2 process to subscribe to ROS2 and write to the pipe."""
    os.environ['PYTHONPATH'] = '/opt/ros/foxy/lib/python3.8/site-packages'
    import rclpy
    from rclpy.node import Node
    from geometry_msgs.msg import Twist as Ros2Twist

    class Ros2Node(Node):
        def __init__(self):
            super().__init__('ros2_bridge_node')
            self.subscriber = self.create_subscription(
                Ros2Twist, '/ball_info', self.callback, 10
            )
            self.pipe = open(pipe_path, 'w')

        def callback(self, msg):
            linear = (msg.linear.x/1000., msg.linear.y/1000., msg.linear.z/1000.)
            #linear = (0,0,0)
            angular = (msg.angular.x/1000., msg.angular.y/1000., msg.angular.z/1000.)
            #angular = (0,0,0)
            
            # Coordinate transformation
            pos_np = np.array(linear)
            vel_np = np.array(angular)
            pos_np = R @ pos_np + t
            vel_np = R @ vel_np
            linear = tuple(pos_np)
            angular = tuple(vel_np)
            self.pipe.write(f"{(linear, angular)}\n")
            self.pipe.flush()
            print(f"[ROS2] Received: {msg}")

        def destroy_node(self):
            self.pipe.close()
            super().destroy_node()

    rclpy.init()
    node = Ros2Node()
    print("[ROS2] Bridge is running...")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    pipe_path = sys.argv[1]
    ros2_bridge(pipe_path)
