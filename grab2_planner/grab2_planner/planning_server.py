import time
import rclpy
import threading
from rclpy.node import Node

from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from control_msgs.msg import JointTrajectoryControllerState

from tf2_ros import Buffer
from tf2_ros.transform_listener import TransformListener

# Required to register PoseStamped type for tf2 transformations
from tf2_geometry_msgs import do_transform_pose_stamped  # noqa: F401

from grab2_interfaces.action import PlanToGoal
from grab2_planner.curobo.motion_generation import CuRoboMotionGen

# Visulaization
from std_msgs.msg import ColorRGBA
from geometry_msgs.msg import Point
from visualization_msgs.msg import Marker


class PlanningServer(Node):
    RESET = "\033[0m"
    GREEN = "\033[92m"
    BLUE = "\033[94m"
    RED = "\033[91m"
    YELLOW = "\033[33m"

    def __init__(self):
        super().__init__("planning_server")

        # Parameters, Provide absolute path to yaml file
        self.declare_parameter("robot_config", "franka.yml")
        self.declare_parameter("world_config", "collision_base.yml")

        robot_cfg = (
            self.get_parameter("robot_config").get_parameter_value().string_value
        )
        world_cfg = (
            self.get_parameter("world_config").get_parameter_value().string_value
        )

        # Init CuRobo
        self.planner = CuRoboMotionGen(
            robot_config=robot_cfg, world_config=world_cfg
        )
        self.get_logger().info(f"Robot base frame: {self.planner.base_link}")
        self.get_logger().info(f"Joint names: {self.planner.joint_names}")

        self.get_logger().info(f"{self.BLUE}Warming up CuRobo...{self.RESET}")
        self.planner.warmup()
        self.get_logger().info(f"{self.GREEN}CuRobo Ready{self.RESET}")

        # ROS2
        cb_grp = ReentrantCallbackGroup()
        self.planning_action_server_ = ActionServer(
            self,
            PlanToGoal,
            "plan_to_goal",
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback,
            callback_group=cb_grp,
        )
        self.state_subscriber = self.create_subscription(
            JointTrajectoryControllerState,
            "/panda_arm_controller/controller_state",
            self.state_callback,
            10,
            callback_group=cb_grp,
        )

        # Debug: Publish World Collision Model
        self.world_collision_voxels_pubisher = self.create_publisher(
            Marker, "/curobo/voxels", 10
        )
        self.voxel_timer = self.create_timer(
            1.0, self.voxels_callback
        )

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        # Variables
        self.current_state = None
        self._goal_handle = None
        self._goal_lock = threading.Lock()

    def destroy(self):
        self.planning_action_server_.destroy()
        super().destroy_node()

    def voxels_callback(self):
        # Get CuRobo Voxels
        voxels = self.planner.get_world_collision_voxels()

        marker = Marker()
        marker.header.frame_id = self.planner.base_link
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.id = 0
        marker.type = Marker.CUBE_LIST
        marker.ns = "curobo_world"
        marker.action = Marker.ADD
        marker.pose.orientation.w = 1.0
        marker.lifetime = rclpy.duration.Duration(seconds=0.0).to_msg()
        marker.frame_locked = False
        marker.scale.x = 0.05
        marker.scale.y = 0.05
        marker.scale.z = 0.05
        marker.points = []
        marker.colors = []

        # get only voxels that are inside surfaces:
        voxels = voxels[voxels[:, 3] > 0.0]
        vox = voxels.view(-1, 4).cpu().numpy()
        number_of_voxels_to_publish = min(len(vox), 500_000)

        if number_of_voxels_to_publish == 0:
            return

        # Colorize based on Axis XYZ <=> RGB
        # Normalize each axis to 0..1
        xmin, xmax = vox[:, 0].min(), vox[:, 0].max()
        ymin, ymax = vox[:, 1].min(), vox[:, 1].max()
        zmin, zmax = vox[:, 2].min(), vox[:, 2].max()

        for i in range(number_of_voxels_to_publish):
            px = float(vox[i, 0])
            py = float(vox[i, 1])
            pz = float(vox[i, 2])

            marker.points.append(Point(x=px, y=py, z=pz))

            r = (px - xmin) / (xmax - xmin) if xmax > xmin else 0.0
            g = (py - ymin) / (ymax - ymin) if ymax > ymin else 0.0
            b = (pz - zmin) / (zmax - zmin) if zmax > zmin else 0.0

            marker.colors.append(ColorRGBA(r=r, g=g, b=b, a=1.0))

        self.world_collision_voxels_pubisher.publish(marker)

    def state_callback(self, msg):
        self.current_state = msg.feedback.positions

    def goal_callback(self, goal_request):
        self.get_logger().info("Received goal request")

        # Check goal frame
        if goal_request.goal_pose.header.frame_id != self.planner.base_link:
            try:
                # Transform into planning frame
                pose_stamped_goal = self.tf_buffer.transform(
                    goal_request.goal_pose, self.planner.base_link
                )
                pos = pose_stamped_goal.pose.position
                ori = pose_stamped_goal.pose.orientation
            except Exception as e:
                self.get_logger().error(
                    f"Couldn't transform Pose from '{goal_request.goal_pose.header.frame_id}' "
                    f"to planning frame '{self.planner.base_link}': {str(e)}"
                )
                return GoalResponse.REJECT
        else:
            pos = goal_request.goal_pose.pose.position
            ori = goal_request.goal_pose.pose.orientation
        # Set goal pose
        self.goal_pose = [pos.x, pos.y, pos.z, ori.w, ori.x, ori.y, ori.z]

        # Check goal feasibility
        if not self.planner.check_goal_feasible(self.goal_pose):
            self.get_logger().debug(f"Goal: {self.goal_pose}")
            self.get_logger().error(f"{self.RED}Goal is unreachable{self.RESET}")
            return GoalResponse.REJECT

        return GoalResponse.ACCEPT

    def handle_accepted_callback(self, goal_handle):
        with self._goal_lock:
            # This server only allows one goal at a time
            if self._goal_handle is not None and self._goal_handle.is_active:
                self.get_logger().info("Aborting previous goal")
                # Abort the existing goal
                self._goal_handle.abort()
            self._goal_handle = goal_handle

        goal_handle.execute()

    def cancel_callback(self, goal):
        """Accept or reject a client request to cancel an action."""
        self.get_logger().info("Received cancel request")
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        # Check if CuRobo planner is warmed up
        if not self.planner._warmed_up:
            self.get_logger().error(f"{self.RED}Planner not initialized.{self.RESET}")
            return PlanToGoal.Result()

        # Check if current state is available
        counter = 0
        while rclpy.ok():
            self.get_logger().error(
                f"{self.YELLOW}Waiting for /panda_arm_controller/controller_state topic{self.RESET}"
            )
            if self.current_state is not None:
                break
            if counter > 20:
                goal_handle.abort()
                return PlanToGoal.Result()
            time.sleep(0.03)
            counter += 1

        self.get_logger().info("Executing goal...")

        # If goal is flagged as no longer active (ie. another goal was accepted),
        # then stop executing
        if not goal_handle.is_active:
            self.get_logger().error("Goal aborted")
            return PlanToGoal.Result()

        if goal_handle.is_cancel_requested:
            goal_handle.canceled()
            self.get_logger().error("Goal canceled")
            return PlanToGoal.Result()

        # Planning Request
        # req_goal = goal_handle.request.goal_pose
        req_dt = goal_handle.request.interpolation_dt

        # Plan using CuRobo
        plan = self.planner.plan(self.current_state, self.goal_pose)

        # Create ROS2 Trajectory
        if plan.size == 0:
            goal_handle.abort()
            self.get_logger().info("Goal aborted")
            return PlanToGoal.Result()
        else:
            trajectory_msg = JointTrajectory()
            trajectory_msg.header.frame_id = self.planner.base_link
            trajectory_msg.joint_names = self.planner.joint_names
            num_pts = plan.shape[0]
            for i in range(num_pts):
                # Instantiate trajectory point
                pt = JointTrajectoryPoint()
                pt.positions = plan[i].tolist()

                total_time = i * req_dt
                pt.time_from_start.sec = int(total_time)
                pt.time_from_start.nanosec = int((total_time % 1.0) * 1e9)

                trajectory_msg.points.append(pt)

        with self._goal_lock:
            if not goal_handle.is_active:
                self.get_logger().info("Goal aborted")
                return PlanToGoal.Result()

            self.get_logger().info(f"{self.GREEN}Plan Succeeded{self.RESET}")
            goal_handle.succeed()

        result = PlanToGoal.Result()
        result.trajectory = trajectory_msg
        return result


def main():
    rclpy.init()
    executor = MultiThreadedExecutor()
    server = PlanningServer()
    rclpy.spin(server, executor=executor)
    server.destroy()
    rclpy.shutdown()
