import sys

import carb
import numpy as np

# USD Assets
# Nvidia Isaac Server Assets
BACKGROUND_USD_PATH = '/Isaac/Environments/Simple_Room/simple_room.usd'

from isaacsim import SimulationApp  # noqa E402  isort: skip

simulation_app = SimulationApp({'renderer': 'RayTracedLighting', 'headless': False})

# More imports that need to compare after we create the app
from omni.isaac.core import SimulationContext  # noqa E402  isort: skip
from omni.isaac.core.utils import (  # noqa E402  isort: skip
    extensions,
    nucleus,
    prims,
    rotations,
    stage,
    viewports,
)
from omni.isaac.core_nodes.scripts.utils import (  # noqa E402  isort: skip
    set_target_prims,
)
from pxr import Gf, UsdGeom  # noqa E402  isort: skip
from isaacsim.core.prims import RigidPrim  # noqa E402  isort: skip
from isaacsim.core.api.objects import DynamicCuboid  # noqa E402  isort: skip

# enable ROS2 bridge extension
extensions.enable_extension('isaacsim.ros2.bridge')
extensions.enable_extension('isaacsim.core.nodes')

simulation_context = SimulationContext(stage_units_in_meters=1.0)

# Locate Isaac Sim assets folder to load environment and robot stages
assets_root_path = nucleus.get_assets_root_path()
if assets_root_path is None:
    carb.log_error('Could not find Isaac Sim assets folder')
    simulation_app.close()
    sys.exit()

# Preparing stage
viewports.set_camera_view(eye=np.array([1.2, 1.2, 0.8]), target=np.array([0, 0, 0.5]))

# Loading the simple_room environment
stage.add_reference_to_stage(
    assets_root_path + BACKGROUND_USD_PATH, '/World/background'
)

# Loading the Robot
from grab2_utils.helpers import add_franka  # noqa E402  isort: skip

ROBOT_PRIM_PATH = '/World/Franka'
add_franka(ROBOT_PRIM_PATH, position=[0, -0.64, 0])

simulation_app.update()

# Loading Cubes
for i in range(3):
    DynamicCuboid(
        prim_path=f'/World/Objects/cube_{i}',
        scale=np.array([0.0515, 0.0515, 0.0515]),
        size=1.0,
        color=np.array([1, 0, 0]),
    )
cubes_view = RigidPrim(prim_paths_expr='/World/Objects/cube_[0-2]')

cube_pose = np.array([-0.34, -0.4, 0.1])
cube_pose_offset = np.array([0.0, 0.1, 0.0])
cubes_view.set_world_poses(
    positions=np.array(
        [cube_pose, cube_pose + 1 * cube_pose_offset, cube_pose + 2 * cube_pose_offset]
    )
)

# Bin
prims.create_prim(
    '/World/bin',
    'Xform',
    position=np.array([0.35, -0.32, 0.09]),
    usd_path=assets_root_path + '/Isaac/Props/KLT_Bin/small_KLT.usd',
)

simulation_app.update()
simulation_context.play()

while simulation_app.is_running():
    simulation_context.step(render=True)

simulation_context.stop()
simulation_app.close()
