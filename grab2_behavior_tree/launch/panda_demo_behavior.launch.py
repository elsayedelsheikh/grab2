import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def get_launch_nodes(context, *args, **kwargs):
    world = LaunchConfiguration("world").perform(context)

    # World argument: "toybox" or "table"
    if world == "table":
        behavior_tree = "collect_cubes"
    elif world == "toybox":
        behavior_tree = "collect_toys"

    launch_controller = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('grab2_controller'), 'launch', 'panda_controllers.launch.py')
        ),
        launch_arguments={'hardware' : LaunchConfiguration("hardware"),'world': world}.items()
    )

    launch_planner = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('grab2_planner'), 'launch', 'planning_server.launch.py')
        ),
        launch_arguments={'world': world}.items()
    )


    launch_bt_engine = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('grab2_behavior_tree'), 'launch', 'grab2_engine.launch.py')
        ),
        launch_arguments={'behavior_tree': behavior_tree}.items()
    )

    # Delay behavior execution till Planner warms up
    delayed_bt_engine = TimerAction(period=60.0, actions=[launch_bt_engine])

    return [launch_controller, launch_planner, delayed_bt_engine]


def generate_launch_description():
    sim_world_declare = DeclareLaunchArgument(
        "world",
        default_value="table",
        description="Simulation world -- possible values: [table, toybox]",
    )

    ros2_control_hardware_type = DeclareLaunchArgument(
        "hardware",
        default_value="isaac",
        description=(
            "ROS2 control hardware interface type to use for the launch file -- "
            "possible values: [mock_components, isaac]"
        ),
    )

    return LaunchDescription([
        sim_world_declare,
        ros2_control_hardware_type,
        OpaqueFunction(function=get_launch_nodes)
    ])
