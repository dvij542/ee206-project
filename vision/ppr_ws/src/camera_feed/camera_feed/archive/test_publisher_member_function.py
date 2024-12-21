# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node

from std_msgs.msg import String
import time


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__(f'minimal_publisher')
        
        self.declare_parameter('cam_num', 1)
        i = self.get_parameter('cam_num').get_parameter_value().integer_value
        
        self.publisher_ = self.create_publisher(String, f'topic_{i}', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = 'Hello World: %d' % self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1

class FastPublisher(Node):
    """
    Observed publishing rate
    5591 hz (with print statements)
    upwards of 170000 hz (without print statements)
    """

    def __init__(self):
        super().__init__('fast_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)

        start = time.time()
        self.i = 0
        msg = String()
        msg.data = 'Hello World: %d' % self.i
        # while (time.time() - start) < 1:
            # repeat for 1 second
        while True:
            self.publisher_.publish(msg)
            # self.get_logger().info('Publishing: "%s"' % msg.data)
            self.i += 1
        print(self.i)

def main(args=None):
    # print("args: ", args)
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()
    # fast_publisher = FastPublisher()
    # publisher = minimal_publisher

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
