#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Point
from interface.msg import Scene
import time


class BallInfoPublisher(Node):
    def __init__(self):
        super().__init__('ball_info_publisher')

        # Subscriber to the annotated_sync_scene topic
        self.subscription = self.create_subscription(
            Scene,
            "annotated_sync_scene",
            self.scene_callback,
            10
        )

        # Publisher for the ball_info topic
        self.ball_info_pub = self.create_publisher(Twist, "ball_info", 10)

        # Variables to store previous position and time for velocity calculation
        self.prev_position = None
        self.prev_time = None

        self.get_logger().info("BallInfoPublisher initialized and running.")

    def scene_callback(self, scene):
        # Extract the ball position from the Scene message
        ball_coords = scene.ball_spatial_coords

        if not isinstance(ball_coords, Point) or ball_coords.x == 0 and ball_coords.y == 0 and ball_coords.z == 0:
            self.get_logger().warn("Invalid or missing ball spatial coordinates. Skipping...")
            return

        # Current position and time
        curr_position = [ball_coords.x, ball_coords.y, ball_coords.z]
        curr_time = self.get_clock().now().to_msg().sec + self.get_clock().now().to_msg().nanosec * 1e-9

        # Calculate velocity if previous position is available
        velocity = [0.0, 0.0, 0.0]
        if self.prev_position is not None and self.prev_time is not None:
            dt = curr_time - self.prev_time
            if dt > 0:
                velocity = [
                    (curr_position[0] - self.prev_position[0]) / dt,
                    (curr_position[1] - self.prev_position[1]) / dt,
                    (curr_position[2] - self.prev_position[2]) / dt
                ]

        # Prepare the Twist message
        twist_msg = Twist()
        twist_msg.linear.x = curr_position[0]
        twist_msg.linear.y = curr_position[1]
        twist_msg.linear.z = curr_position[2]
        twist_msg.angular.x = velocity[0]
        twist_msg.angular.y = velocity[1]
        twist_msg.angular.z = velocity[2]

        # Publish the Twist message to ball_info
        self.ball_info_pub.publish(twist_msg)
        self.get_logger().info(f"Published ball info: Position {curr_position}, Velocity {velocity}")

        # Update previous position and time
        self.prev_position = curr_position
        self.prev_time = curr_time


def main(args=None):
    rclpy.init(args=args)

    ball_info_publisher = BallInfoPublisher()

    try:
        rclpy.spin(ball_info_publisher)
    except KeyboardInterrupt:
        pass
    finally:
        ball_info_publisher.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
