from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution


def generate_launch_description():
    # Command-line arguments
    robot_model_declaration = DeclareLaunchArgument(
        "robot",
        default_value="franka",
        description=(
            "Robot model used with CuRobo -- " "Supported robots: [franka, ur10e]"
        ),
    )

    world_model_declaration = DeclareLaunchArgument(
        "world",
        default_value="table",
        description=(
            "Static World Collision model for CuRobo -- "
            "Available configs: [table, toybox]"
        ),
    )

    controller_state_topic_declaration = DeclareLaunchArgument(
        "state_topic",
        default_value="/panda_arm_controller/controller_state",
        description=("Controller state topic to get current pose for planning"),
    )

    world_config_file = PathJoinSubstitution(
        [
            FindPackageShare("grab2_planner"),
            "config",
            [LaunchConfiguration("world"), ".yaml"],
        ]
    )

    planning_server_node = Node(
        package="grab2_planner",
        executable="planning_server",
        name="planning_server",
        output="both",
        parameters=[
            {
                "robot_config": [LaunchConfiguration("robot"), ".yml"],
                "world_config": world_config_file,
                "state_topic": LaunchConfiguration("state_topic"),
            }
        ],
    )

    return LaunchDescription(
        [
            robot_model_declaration,
            world_model_declaration,
            controller_state_topic_declaration,
            planning_server_node,
        ]
    )
