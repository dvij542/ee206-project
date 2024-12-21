import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    nodes = []

    for i in range(0, 4):
        nodes.append(
            Node(
            package='camera_feed',
            executable='image_publisher',
            name=f'image_publisher_node_{i}',
            output='screen',
            parameters=[{'camera_number': i}]
            )
        )

    nodes.append(
        Node(
            package='camera_feed',
            executable='synchronized_image_subscriber',
            name='synchronized_image_subscriber',
            output='screen'
        )
    )

    return LaunchDescription(nodes)
