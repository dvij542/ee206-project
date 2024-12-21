#!/usr/bin/env python3

import os
import sys
import json

def ros1_bridge(pipe_path):
    """ROS1 process to read from the pipe and publish to ROS1."""
    os.environ['PYTHONPATH'] = '/opt/ros/noetic/lib/python3/dist-packages'
    import rospy
    from geometry_msgs.msg import Twist as Ros1Twist
    from trajectory_msgs.msg import JointTrajectory

    rospy.init_node('ros1_bridge', anonymous=True)

    ball_publisher = rospy.Publisher('/ball_info', Ros1Twist, queue_size=10)

    def command_callback(msg):
        """Send /lbr/.../command data to ROS2."""
        try:
            data = {
                "header": {
                    "stamp": {"secs": msg.header.stamp.secs, "nsecs": msg.header.stamp.nsecs},
                    "frame_id": msg.header.frame_id
                },
                "joint_names": list(msg.joint_names),
                "points": [
                    {
                        "positions": list(pt.positions),
                        "velocities": list(pt.velocities),
                        "accelerations": list(pt.accelerations),
                        "effort": list(pt.effort),
                        "time_from_start": {"secs": pt.time_from_start.secs, "nsecs": pt.time_from_start.nsecs}
                    }
                    for pt in msg.points
                ]
            }
            with open(pipe_path, 'w') as pipe:
                pipe.write(json.dumps(data) + "\n")  # Ensure JSON formatting
                pipe.flush()
        except Exception as e:
            rospy.logerr(f"[ROS1] Error writing to pipe: {e}")

    rospy.Subscriber('/lbr/PositionJointInterface_trajectory_controller/command', JointTrajectory, command_callback)

    print("[ROS1] Bridge is running...")
    with open(pipe_path, 'r') as pipe:
        buffer = ""
        while not rospy.is_shutdown():
            try:
                buffer += pipe.read(1024)  # Read in chunks
                while "\n" in buffer:
                    line, buffer = buffer.split("\n", 1)
                    if not line.strip():
                        continue
                    data = json.loads(line)
                    msg = Ros1Twist()
                    msg.linear.x, msg.linear.y, msg.linear.z = data['linear']
                    msg.angular.x, msg.angular.y, msg.angular.z = data['angular']
                    ball_publisher.publish(msg)
                    print(f"[ROS1] Published ball info: {msg}")
            except json.JSONDecodeError as e:
                rospy.logwarn(f"[ROS1] JSON decode error: {e}. Buffer: {buffer}")
            except Exception as e:
                rospy.logerr(f"[ROS1] Error processing pipe data: {e}")


if __name__ == '__main__':
    pipe_path = sys.argv[1]
    ros1_bridge(pipe_path)
