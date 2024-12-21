#!/usr/bin/env python3

import os
import sys
import json

def ros2_bridge(pipe_path):
    """ROS2 process to handle /lbr/.../state and /lbr/.../command."""
    os.environ['PYTHONPATH'] = '/opt/ros/foxy/lib/python3.8/site-packages'
    import rclpy
    from rclpy.node import Node
    from control_msgs.msg import JointTrajectoryControllerState
    from trajectory_msgs.msg import JointTrajectory

    class Ros2Node(Node):
        def __init__(self):
            super().__init__('ros2_bridge_node')

            self.state_subscriber = self.create_subscription(
                JointTrajectoryControllerState,
                '/lbr/PositionJointInterface_trajectory_controller/state',
                self.state_callback,
                10
            )
            self.command_publisher = self.create_publisher(
                JointTrajectory,
                '/lbr/PositionJointInterface_trajectory_controller/command',
                10
            )
            self.pipe = open(pipe_path, 'r')

        def state_callback(self, msg):
            """Send /lbr/.../state data to ROS1."""
            try:
                data = {
                    "header": {
                        "stamp": {"secs": msg.header.stamp.sec, "nsecs": msg.header.stamp.nanosec},
                        "frame_id": msg.header.frame_id
                    },
                    "joint_names": list(msg.joint_names),
                    "desired": {"positions": list(msg.desired.positions)},
                    "actual": {"positions": list(msg.actual.positions)},
                    "error": {"positions": list(msg.error.positions)}
                }
                with open(pipe_path, 'w') as pipe:
                    pipe.write(json.dumps(data) + "\n")  # Ensure JSON formatting
                    pipe.flush()
            except Exception as e:
                self.get_logger().error(f"[ROS2] Error writing to pipe: {e}")

        def read_from_pipe(self):
            """Read /lbr/.../command data from pipe and publish to ROS2."""
            buffer = ""
            while rclpy.ok():
                try:
                    buffer += self.pipe.read(1024)  # Read in chunks
                    while "\n" in buffer:
                        line, buffer = buffer.split("\n", 1)
                        if not line.strip():
                            continue
                        data = json.loads(line)
                        msg = JointTrajectory()
                        msg.header.stamp.sec = data["header"]["stamp"]["secs"]
                        msg.header.stamp.nanosec = data["header"]["stamp"]["nsecs"]
                        msg.header.frame_id = data["header"]["frame_id"]
                        msg.joint_names = data["joint_names"]
                        msg.points = [
                            JointTrajectory.Point(
                                positions=point["positions"],
                                velocities=point["velocities"],
                                accelerations=point["accelerations"],
                                effort=point["effort"],
                                time_from_start=Duration(sec=point["time_from_start"]["secs"], nanosec=point["time_from_start"]["nsecs"])
                            )
                            for point in data["points"]
                        ]
                        self.command_publisher.publish(msg)
                        self.get_logger().info(f"[ROS2] Published command: {msg}")
                except json.JSONDecodeError as e:
                    self.get_logger().warn(f"[ROS2] JSON decode error: {e}. Buffer: {buffer}")
                except Exception as e:
                    self.get_logger().error(f"[ROS2] Error reading from pipe: {e}")

        def destroy_node(self):
            self.pipe.close()
            super().destroy_node()

    rclpy.init()
    node = Ros2Node()
    print("[ROS2] Bridge is running...")
    node.read_from_pipe()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    pipe_path = sys.argv[1]
    ros2_bridge(pipe_path)
