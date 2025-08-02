import os
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    TimerAction,
    OpaqueFunction,
)
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def get_launch_nodes(context, *args, **kwargs):
    robot = LaunchConfiguration("robot").perform(context)
    world = LaunchConfiguration("world").perform(context)
    behavior_tree = LaunchConfiguration("behavior").perform(context)

    # Launch ROS2 Control
    launch_controller = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("grab2_controller"),
                "launch",
                f"{robot}_controllers.launch.py",
            )
        ),
        launch_arguments={
            "hardware": LaunchConfiguration("hardware"),
            "world": world,
        }.items(),
    )

    # Prepare configs
    if robot == "panda":
        robot_arg = "franka"
        state_topic_arg = "/panda_arm_controller/controller_state"
        jc_action_arg = "/panda_arm_controller/follow_joint_trajectory"
    elif robot == "ur10e":
        robot_arg = robot
        state_topic_arg = "/ur10e_controller/controller_state"
        jc_action_arg = "/ur10e_controller/follow_joint_trajectory"

    # Launch Planning Server
    launch_planner = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("grab2_planner"),
                "launch",
                "planning_server.launch.py",
            )
        ),
        launch_arguments={
            "robot": robot_arg,
            "world": world,
            "state_topic": state_topic_arg
        }.items(),
    )

    launch_bt_engine = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("grab2_behavior_tree"),
                "launch",
                "grab2_engine.launch.py",
            )
        ),
        launch_arguments={
            "behavior_tree": behavior_tree,
            "jc_action": jc_action_arg
        }.items(),
    )

    # Delay behavior execution till Planner warms up
    delayed_bt_engine = TimerAction(period=60.0, actions=[launch_bt_engine])

    return [launch_controller, launch_planner, delayed_bt_engine]


def generate_launch_description():
    robot_declare = DeclareLaunchArgument(
        "robot",
        default_value="panda",
        description="Simulated Robot -- possible values: [panda, ur10e]",
    )

    sim_world_declare = DeclareLaunchArgument(
        "world",
        default_value="table",
        description="Simulation world -- possible values: [table, toybox]",
    )

    behavior_declare = DeclareLaunchArgument(
        "behavior",
        default_value="collect_toys",
        description="Behavior xml file -- Check behavior_trees/",
    )

    ros2_control_hardware_type = DeclareLaunchArgument(
        "hardware",
        default_value="isaac",
        description=(
            "ROS2 control hardware interface type to use for the launch file -- "
            "possible values: [mock_components, isaac]"
        ),
    )

    return LaunchDescription(
        [
            robot_declare,
            sim_world_declare,
            behavior_declare,
            ros2_control_hardware_type,
            OpaqueFunction(function=get_launch_nodes),
        ]
    )
