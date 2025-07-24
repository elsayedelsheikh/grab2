from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution


def generate_launch_description():
    behavior_tree_declaration = DeclareLaunchArgument(
        "behavior_tree",
        default_value="collect_toys",
        description="Behavior Tree XML file, Check behavior_trees directory for examples",
    )

    bt_xml_file = PathJoinSubstitution(
        [
            FindPackageShare("grab2_behavior_tree"),
            "behavior_trees",
            [LaunchConfiguration("behavior_tree"), ".xml"],
        ]
    )

    task_planner_node = Node(
        package="grab2_behavior_tree",
        executable="grab2_engine",
        name="grab2_engine",
        output="screen",
        parameters=[{"behavior_tree": bt_xml_file}],
    )

    return LaunchDescription([behavior_tree_declaration, task_planner_node])
