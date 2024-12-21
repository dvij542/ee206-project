#!/usr/bin/env python3

import os
import subprocess
import signal

def run_ros1_bridge(pipe_path):
    """Run the ROS1 bridge process."""
    env = os.environ.copy()
    env['PYTHONPATH'] = '/opt/ros/noetic/lib/python3/dist-packages'
    subprocess.Popen(
        ['python3', 'ros1_bridge.py', pipe_path],
        env=env,
    )

def run_ros2_bridge(pipe_path):
    """Run the ROS2 bridge process."""
    env = os.environ.copy()
    env['PYTHONPATH'] = '/opt/ros/foxy/lib/python3.8/site-packages'
    subprocess.Popen(
        ['python3', 'ros2_bridge.py', pipe_path],
        env=env,
    )

if __name__ == '__main__':
    pipe_path = '/tmp/ros_bridge_pipe'

    # Create a named pipe for communication
    if not os.path.exists(pipe_path):
        os.mkfifo(pipe_path)

    try:
        # Launch ROS1 and ROS2 processes
        run_ros1_bridge(pipe_path)
        run_ros2_bridge(pipe_path)

        # Keep the launcher alive
        signal.pause()
    except KeyboardInterrupt:
        print("\nShutting down bridges...")
        os.remove(pipe_path)
