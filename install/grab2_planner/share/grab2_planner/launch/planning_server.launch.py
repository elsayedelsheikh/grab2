import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder


def generate_launch_description():
    # Load the robot configuration
    moveit_config = (
        MoveItConfigsBuilder('moveit_resources_panda')
        .robot_description(file_path='config/panda.urdf.xacro')
        .robot_description_semantic(file_path='config/panda.srdf')
        .trajectory_execution(file_path='config/gripper_moveit_controllers.yaml')
        .planning_pipelines(pipelines=['ompl', 'pilz_industrial_motion_planner'])
        .to_moveit_configs()
    )

    # RViz for visualization
    rviz_config_file = os.path.join(
        get_package_share_directory('grab2_planner'),
        'config',
        'panda_move_group.rviz',
    )

    # Launch RViz
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='log',
        arguments=['-d', rviz_config_file],
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            moveit_config.planning_pipelines,
            moveit_config.joint_limits,
        ],
    )

    # Start Moveit MoveGroup
    move_group_node = Node(
        package='moveit_ros_move_group',
        executable='move_group',
        output='screen',
        parameters=[moveit_config.to_dict()],
        arguments=['--ros-args', '--log-level', 'info'],
    )

    # Motion Generation node
    planner_server_node = Node(
        name='planner_server',
        package='grab2_planner',
        executable='planner_server',
        output='screen',
        parameters=[moveit_config.to_dict()],
    )

    return LaunchDescription([rviz_node, move_group_node, planner_server_node])
