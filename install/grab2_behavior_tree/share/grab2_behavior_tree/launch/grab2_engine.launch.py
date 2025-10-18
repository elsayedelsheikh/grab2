from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    behavior_tree_declaration = DeclareLaunchArgument(
        'behavior_tree',
        default_value='collect_cubes',
        description='Behavior Tree XML file, Check behavior_trees directory for examples',
    )

    jc_action_declaration = DeclareLaunchArgument(
        'jc_action',
        default_value='/panda_arm_controller/follow_joint_trajectory',
        description='Joint Trajectory Controller action name',
    )

    gc_action_declaration = DeclareLaunchArgument(
        'gc_action',
        default_value='/panda_hand_controller/gripper_cmd',
        description='Gripper Controller action name',
    )

    bt_xml_file = PathJoinSubstitution(
        [
            FindPackageShare('grab2_behavior_tree'),
            'behavior_trees',
            [LaunchConfiguration('behavior_tree'), '.xml'],
        ]
    )

    task_planner_node = Node(
        package='grab2_behavior_tree',
        executable='grab2_engine',
        name='grab2_engine',
        output='screen',
        parameters=[
            {
                'behavior_tree': bt_xml_file,
                'jc_action': LaunchConfiguration('jc_action'),
                'gc_action': LaunchConfiguration('gc_action'),
            }
        ],
    )

    return LaunchDescription(
        [
            behavior_tree_declaration,
            jc_action_declaration,
            gc_action_declaration,
            task_planner_node,
        ]
    )
