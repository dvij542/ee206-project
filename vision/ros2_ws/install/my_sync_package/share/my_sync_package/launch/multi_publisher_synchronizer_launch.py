# ros2 launch my_sync_package multi_publisher_synchronizer_launch.py

import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Launch the publisher node
        Node(
            package='my_sync_package',
            executable='multi_publisher',
            name='multi_publisher_node_1',
            output='screen'
        ),
        
        # Launch the custom synchronizer node
        Node(
            package='my_sync_package',
            executable='example_custom_synchronizer',
            name='example_custom_synchronizer',
            output='screen'
        )
    ])
