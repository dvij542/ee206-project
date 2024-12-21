import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package='camera_feed',
            executable='cam_pub',
            name='talker',
            parameters=[
                {"cam_num": i},
            ])
        for i in range(1, 5)
  ])
