from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def get_launch_nodes(context, *args, **kwargs):
    robot = LaunchConfiguration('robot').perform(context)

    world_config_file = PathJoinSubstitution(
        [
            FindPackageShare('grab2_curobo_planner'),
            'config',
            [LaunchConfiguration('world'), '.yaml'],
        ]
    )

    # Prepare configs
    # Franka Panda equipped with finger gripper
    if robot == 'panda':
        state_topic_name = '/panda_arm_controller/controller_state'

    # For UR5e with 2-finger gripper or/ UR10e with suction gripper
    else:
        state_topic_name = '/ur_arm_controller/controller_state'

    planning_server_node = Node(
        package='grab2_curobo_planner',
        executable='planning_server',
        name='planning_server',
        output='both',
        parameters=[
            {
                'robot_config': [LaunchConfiguration('robot'), '.yml'],
                'world_config': world_config_file,
                'state_topic': state_topic_name,
            }
        ],
    )
    return [planning_server_node]


def generate_launch_description():
    # Command-line arguments
    robot_model_declaration = DeclareLaunchArgument(
        'robot',
        default_value='panda',
        description=(
            'Robot model used with cuRobo -- ' 'Supported robots: [panda, ur10e]'
        ),
    )

    world_model_declaration = DeclareLaunchArgument(
        'world',
        default_value='table',
        description=(
            'Static World Collision model for cuRobo -- '
            'Available configs: [table, toybox]'
        ),
    )

    return LaunchDescription(
        [
            robot_model_declaration,
            world_model_declaration,
            OpaqueFunction(function=get_launch_nodes),
        ]
    )
