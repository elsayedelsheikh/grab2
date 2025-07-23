from functools import wraps
from typing import List, Optional, Dict

import torch
import numpy as np
from curobo.types.math import Pose
from curobo.geom.types import Cuboid
from curobo.types.robot import JointState
from curobo.types.base import TensorDeviceType
from curobo.geom.sdf.world import CollisionCheckerType
from curobo.wrap.reacher.motion_gen import MotionGen, MotionGenConfig


def requires_warmup(func):
    @wraps(func)
    def wrapper(self, *args, **kwargs):
        if not getattr(self, "_warmed_up", False):
            raise RuntimeError(
                f"Cannot call '{func.__name__}' before calling warmup()."
            )
        return func(self, *args, **kwargs)

    return wrapper


class CuRoboMotionGen:
    _warmed_up = False

    def __init__(
        self,
        robot_config="franka.yml",
        world_config="collision_table.yml",
        interpolation_dt=0.02,
        collision_activation_distance=0.02,
        joint_names: Optional[List[str]] = None,
    ):
        self.tensor_args = TensorDeviceType(device=torch.device("cuda:0"))
        motion_gen_cfg = MotionGenConfig.load_from_robot_config(
            robot_config,
            world_config,
            self.tensor_args,
            trajopt_tsteps=34,
            interpolation_steps=5000,
            num_ik_seeds=50,
            num_trajopt_seeds=6,
            grad_trajopt_iters=500,
            trajopt_dt=0.5,
            interpolation_dt=interpolation_dt,
            evaluate_interpolated_trajectory=True,
            js_trajopt_dt=0.5,
            js_trajopt_tsteps=34,
            collision_checker_type=CollisionCheckerType.VOXEL,
            collision_activation_distance=collision_activation_distance,
        )

        self.motion_gen = MotionGen(motion_gen_cfg)
        self.joint_names = joint_names
        self.world_collision = self.motion_gen.world_coll_checker

    def warmup(self):
        self.motion_gen.warmup()
        self._warmed_up = True

    def get_world_collision_voxels(self):
        voxels = self.world_collision.get_occupancy_in_bounding_box(
            Cuboid(
                name="test",
                pose=[0.0, 0.0, 0.0, 1, 0, 0, 0],  # x, y, z, qw, qx, qy, qz
                dims=[2.0, 2.0, 2.0],
            ),
            voxel_size=0.05,
        )
        xyzr_tensor = voxels.xyzr_tensor.clone()
        xyzr_tensor[..., 3] = voxels.feature_tensor

        return xyzr_tensor

    @requires_warmup
    def check_goal_feasible(self, target_pose: List) -> bool:
        """
        Check if a target pose is feasible (i.e., within the robot's reachable workspace).

        Args:
            target_pose (List): A list containing the target position [x, y, z]
                                followed by orientation as quaternion [qw, qx, qy, qz].

        Returns
        -------
            bool: True if the target pose is reachable (IK solution exists), False otherwise.

        """
        t_position = target_pose[:3]
        t_orientation = target_pose[3:]

        goal = Pose(
            position=self.tensor_args.to_device([t_position]),
            quaternion=self.tensor_args.to_device([t_orientation]),
        )

        ik_sol = self.motion_gen.ik_solver.solve_single(goal)
        return ik_sol.success.item()

    @requires_warmup
    def compute_kinematics(self, joint_state: List[float]) -> Dict[str, np.ndarray]:
        """
        Compute the forward kinematics for a given joint state.

        Args:
            joint_state (List[float]): Joint positions for the robot.

        Returns
        -------
            Dict[str, np.ndarray]: A dictionary mapping the link name
            to its [x, y, z, qw, qx, qy, qz] pose.

        """
        state = JointState.from_position(
            self.tensor_args.to_device([joint_state]), joint_names=self.joint_names
        )

        k = self.motion_gen.compute_kinematics(state)

        pose = k.ee_pos_seq.cpu().numpy()  # shape: (1, 3)
        quat = k.ee_quat_seq.cpu().numpy()  # shape: (1, 4)

        pose_quat = np.concatenate([pose, quat], axis=1).flatten()  # shape: (7,)

        return {k.link_names[0]: pose_quat}

    @requires_warmup
    def plan(self, initial_state: List, target_pose: List) -> np.ndarray:
        """
        Generate a trajectory from initial_state (jointState) to a Cartesian target_pose.

        Args:
            initial_state (List): Initial joint positions, length (num_joints)
            target_pose (List): A list containing the target position [x, y, z]
                                followed by orientation as quaternion [qw, qx, qy, qz].

        Returns
        -------
            np.ndarray: Planned trajectory with shape (N, num_joints)
            where N is the number of steps(trajectory_points).

        """
        # zero rows, num_joints cols
        plan = np.empty((0, len(self.joint_names)))
        q_start = JointState.from_position(
            self.tensor_args.to_device([initial_state]), joint_names=self.joint_names
        )

        t_position = target_pose[:3]
        t_orientation = target_pose[3:]  # w, x, y, z

        q_goal = Pose(
            position=self.tensor_args.to_device([t_position]),
            quaternion=self.tensor_args.to_device([t_orientation]),
        )

        result = self.motion_gen.plan_single(q_start, q_goal)

        if result.success.item():
            plan = result.get_interpolated_plan().position.cpu().numpy()

        return plan  # Shape (N, num_joints)
