from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    param_config = PathJoinSubstitution(
        [
            FindPackageShare('grab2_bt_grabber'),
            'config',
            'grab2_bt_engine.yaml',
        ]
    )

    bt_engine = Node(
        package='grab2_bt_grabber',
        executable='bt_engine',
        name='grab2_bt_engine',
        output='screen',
        parameters=[param_config],
    )

    return LaunchDescription([bt_engine])
