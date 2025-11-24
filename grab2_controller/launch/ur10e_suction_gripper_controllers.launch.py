from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import (
    Command,
    EqualsSubstitution,
    FindExecutable,
    LaunchConfiguration,
    PathJoinSubstitution,
)
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Command-line arguments
    description_package = DeclareLaunchArgument(
        'description_package', default_value='grab2_controller'
    )

    ros2_control_hardware_type = DeclareLaunchArgument(
        'hardware',
        default_value='mock_components',
        description=(
            'ROS2 control hardware interface type to use for the launch file -- '
            'possible values: [mock_components, isaac]'
        ),
    )

    sim_world_declare = DeclareLaunchArgument(
        'world',
        default_value='table',
        description='Simulation world -- possible values: [table, toybox]',
    )

    robot_xacro_path = PathJoinSubstitution(
        [
            FindPackageShare(LaunchConfiguration('description_package')),
            'description',
            'ur',
            'ur.urdf.xacro',
        ]
    )

    ros2_controllers_path = PathJoinSubstitution(
        [
            FindPackageShare(LaunchConfiguration('description_package')),
            'config',
            'ur',
            'ros2_controllers.yaml',
        ]
    )

    rviz_config_file = PathJoinSubstitution(
        [
            FindPackageShare(LaunchConfiguration('description_package')),
            'config',
            'rviz2',
            'rviz2_config.rviz',
        ]
    )

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name='xacro')]),
            ' ',
            robot_xacro_path,
            ' ',
            'ros2_control_hardware_type:=',
            LaunchConfiguration('hardware'),
            ' ',
        ]
    )

    # Publish Robot State
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='both',
        parameters=[{'robot_description': robot_description_content}],
    )

    ros2_control_node = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[ros2_controllers_path],
        remappings=[
            ('/controller_manager/robot_description', '/robot_description'),
        ],
        output='screen',
    )

    joint_state_broadcaster_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=[
            'joint_state_broadcaster',
            '--controller-manager',
            '/controller_manager',
        ],
    )

    ur10e_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['ur_arm_controller', '-c', '/controller_manager'],
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='log',
        arguments=['-d', rviz_config_file],
    )

    world2robot_tf_toybox = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_transform_publisher',
        output='log',
        arguments=[
            '0.0',  # translation
            '0.25',
            '0.0',
            '0.0',  # rotation (RPY)
            '0.0',
            '0.0',
            'world',
            'base_link',
        ],
        condition=IfCondition(
            EqualsSubstitution(LaunchConfiguration('world'), 'toybox')
        ),
    )

    world2robot_tf_table = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_transform_publisher',
        output='log',
        arguments=[
            '0.0',  # translation
            '-0.640',
            '0.0',
            '0.0',  # rotation (RPY)
            '0.0',
            '0.0',
            'world',
            'base_link',
        ],
        condition=IfCondition(
            EqualsSubstitution(LaunchConfiguration('world'), 'table')
        ),
    )

    return LaunchDescription(
        [
            sim_world_declare,
            description_package,
            ros2_control_hardware_type,
            rviz_node,
            robot_state_publisher,
            ros2_control_node,
            joint_state_broadcaster_spawner,
            ur10e_controller_spawner,
            world2robot_tf_toybox,
            world2robot_tf_table,
        ]
    )
