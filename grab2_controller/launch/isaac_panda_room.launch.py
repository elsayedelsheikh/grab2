import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Get paths to launch files
    pkg_share_dir = get_package_share_directory('grab2_controller')

    # Include launch files
    launch_controller = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            pkg_share_dir, 'launch', 'panda_controllers.launch.py'))
    )

    # Static transform: world → panda_link0
    static_tf_node = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="static_transform_publisher",
        output="log",
        arguments=[
            "0.0",
            "-0.640",
            "0.0",
            "1.571", ## yaw
            "0.0",
            "0.0",
            "world",
            "panda_link0",
        ]
    )

    return LaunchDescription([
        launch_controller,
        static_tf_node,
    ])
