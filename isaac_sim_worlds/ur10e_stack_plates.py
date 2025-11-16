import os
import sys

import carb
import numpy as np

# USD Assets
# Nvidia Isaac Server Assets
BACKGROUND_USD_PATH = '/Isaac/Environments/Simple_Room/simple_room.usd'

# User Assets
USER_PATH = (
    os.getcwd()
)  # Make sure you're running the script from the correct directory
PLATE_USD_PATH = os.path.join(USER_PATH, 'assets', 'objects', 'plate.usd')

from isaacsim import SimulationApp  # noqa E402  isort: skip

simulation_app = SimulationApp({'renderer': 'RayTracedLighting', 'headless': False})

# More imports that need to compare after we create the app
from omni.isaac.core import SimulationContext  # noqa E402  isort: skip
from omni.isaac.core.utils import (  # noqa E402  isort: skip
    extensions,
    prims,
    stage,
    viewports,
)
from isaacsim.storage.native import get_assets_root_path  # noqa E402  isort: skip
from isaacsim.core.prims import XFormPrim  # noqa E402  isort: skip

# enable ROS2 bridge extension
extensions.enable_extension('isaacsim.ros2.bridge')
extensions.enable_extension('isaacsim.core.nodes')

simulation_context = SimulationContext(stage_units_in_meters=1.0)

# Utils
from grab2_utils.helpers import add_ur10e_with_suction_cup  # noqa E402  isort: skip

# Locate Isaac Sim assets folder to load environment and robot stages
nvidia_assets_root_path = get_assets_root_path()
if nvidia_assets_root_path is None:
    carb.log_error('Could not find Isaac Sim assets folder')
    simulation_app.close()
    sys.exit()

# Preparing stage
viewports.set_camera_view(eye=np.array([1.2, 1.2, 0.8]), target=np.array([0, 0, 0.5]))

# Loading the simple_room environment
stage.add_reference_to_stage(
    nvidia_assets_root_path + BACKGROUND_USD_PATH, '/World/background'
)

# Loading the Robot
ROBOT_PRIM = '/World/UR10e'
add_ur10e_with_suction_cup(ROBOT_PRIM, position=[0, -0.64, 0])

# Loading Objects
for i in range(4):
    prims.create_prim(
        f'/World/Objects/plate_{i}',
        'Xform',
        usd_path=PLATE_USD_PATH,
    )

objects_view = XFormPrim(prim_paths_expr='/World/Objects/plate_[0-3]')

object_pose = np.array([-0.37, -0.5, 0.1])
object_pose_offset = np.array([0.0, 0.3, 0.0])
objects_view.set_world_poses(
    positions=np.array(
        [
            object_pose,
            object_pose + 1 * object_pose_offset,
            object_pose + 2 * object_pose_offset,
            object_pose + 3 * object_pose_offset,
        ]
    )
)

simulation_app.update()
simulation_context.play()

while simulation_app.is_running():
    simulation_context.step(render=True)

simulation_context.stop()
simulation_app.close()
