import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
    TimerAction,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


def get_launch_nodes(context, *args, **kwargs):
    robot = LaunchConfiguration('robot').perform(context)
    world = LaunchConfiguration('world').perform(context)
    behavior_tree = LaunchConfiguration('behavior').perform(context)

    # Launch ROS2 Control
    launch_controller = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('grab2_controller'),
                'launch',
                f'{robot}_controllers.launch.py',
            )
        ),
        launch_arguments={
            'hardware': LaunchConfiguration('hardware'),
            'world': world,
        }.items(),
    )

    # Prepare configs
    # Franka Panda equipped with finger gripper
    if robot == 'panda':
        jc_action_arg = '/panda_arm_controller/follow_joint_trajectory'
        gc_action_arg = '/panda_hand_controller/gripper_cmd'

    # UR5e equipped with finger gripper 'Robotiq_2f_140'
    elif robot == 'ur5e_robotiq_2f_140':
        jc_action_arg = '/ur_arm_controller/follow_joint_trajectory'
        gc_action_arg = '/robotiq_gripper_controller/gripper_cmd'

    # UR10e equipped with suction gripper
    elif robot == 'ur10e':
        jc_action_arg = '/ur_arm_controller/follow_joint_trajectory'

    # Launch Planning Server
    launch_planner = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('grab2_curobo_planner'),
                'launch',
                'planning_server.launch.py',
            )
        ),
        launch_arguments={
            'robot': robot,
            'world': world,
        }.items(),
    )

    launch_bt_engine = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('grab2_behavior_tree'),
                'launch',
                'grab2_engine.launch.py',
            )
        ),
        launch_arguments={
            'behavior_tree': behavior_tree,
            'jc_action': jc_action_arg,
            'gc_action': gc_action_arg,
        }.items(),
    )

    # Delay behavior execution till Planner warms up
    delayed_bt_engine = TimerAction(period=60.0, actions=[launch_bt_engine])

    return [launch_controller, launch_planner, delayed_bt_engine]


def generate_launch_description():
    robot_model_declaration = DeclareLaunchArgument(
        'robot',
        default_value='panda',
        description='Simulated Robot -- '
        'possible values: [panda, ur10e, ur5e_robotiq_2f_140]',
    )

    world_model_declaration = DeclareLaunchArgument(
        'world',
        default_value='table',
        description='Simulation world -- possible values: [table, toybox]',
    )

    behavior_declaration = DeclareLaunchArgument(
        'behavior',
        default_value='collect_cubes',
        description='Behavior xml file -- Check behavior_trees/',
    )

    ros2_control_hardware_type = DeclareLaunchArgument(
        'hardware',
        default_value='isaac',
        description=(
            'ROS2 control hardware interface type to use for the launch file -- '
            'possible values: [mock_components, isaac]'
        ),
    )

    return LaunchDescription(
        [
            robot_model_declaration,
            world_model_declaration,
            behavior_declaration,
            ros2_control_hardware_type,
            OpaqueFunction(function=get_launch_nodes),
        ]
    )
