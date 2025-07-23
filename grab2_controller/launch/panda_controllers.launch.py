import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Command-line arguments
    description_package = DeclareLaunchArgument(
        "description_package",
        default_value="grab2_controller"
    )

    ros2_control_hardware_type = DeclareLaunchArgument(
        "hardware",
        default_value="isaac",
        description="ROS2 control hardware interface type to use for the launch file -- possible values: [mock_components, isaac]",
    )

    robot_xacro_path = PathJoinSubstitution([
        FindPackageShare(LaunchConfiguration("description_package")),
        "config",
        "panda.urdf.xacro"
    ])

    ros2_controllers_path = PathJoinSubstitution([
        FindPackageShare(LaunchConfiguration("description_package")),
        "config",
        "ros2_controllers.yaml"
    ])

    rviz_config_file = PathJoinSubstitution([
        FindPackageShare(LaunchConfiguration("description_package")),
        "config",
        "rviz2_config.rviz"
    ])

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            robot_xacro_path,
            " ",
            "ros2_control_hardware_type:=",
            LaunchConfiguration("hardware"),
            " ",
        ]
    )
    
    # Publish Robot State
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="both",
        parameters=[{"robot_description": robot_description_content}],
    )

    ros2_control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[ros2_controllers_path],
        remappings=[
            ("/controller_manager/robot_description", "/robot_description"),
        ],
        output="screen",
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            "/controller_manager",
        ],
    )

    panda_arm_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["panda_arm_controller", "-c", "/controller_manager"],
    )

    panda_hand_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["panda_hand_controller", "-c", "/controller_manager"],
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
    )

    return LaunchDescription(
        [
            description_package,
            ros2_control_hardware_type,
            rviz_node,
            robot_state_publisher,
            ros2_control_node,
            joint_state_broadcaster_spawner,
            panda_arm_controller_spawner,
            panda_hand_controller_spawner,
        ]
    )