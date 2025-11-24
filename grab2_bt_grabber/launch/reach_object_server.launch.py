from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    param_config = PathJoinSubstitution(
        [
            FindPackageShare('grab2_bt_grabber'),
            'config',
            'reach_object.yaml',
        ]
    )

    bt_engine = Node(
        package='grab2_bt_grabber',
        executable='bt_engine',
        name='reach_object',
        output='screen',
        parameters=[param_config],
    )

    return LaunchDescription([bt_engine])
