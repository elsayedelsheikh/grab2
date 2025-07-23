from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution


def generate_launch_description():
    # Command-line arguments
    world_model_declaration = DeclareLaunchArgument(
        "world_model",
        default_value="table",
        description=(
            "Static World Collision model for CuRobo -- "
            "Available configs: [table, panda_toybox]"
        ),
    )

    world_config_file = PathJoinSubstitution(
        [
            FindPackageShare("grab2_planner"),
            "config",
            [LaunchConfiguration("world_model"), ".yaml"],
        ]
    )

    planning_server_node = Node(
        package="grab2_planner",
        executable="planning_server",
        name="planning_server",
        output="both",
        parameters=[{"world_config": world_config_file}],
    )

    return LaunchDescription([world_model_declaration, planning_server_node])
