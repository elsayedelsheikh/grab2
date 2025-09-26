import os
import sys

import carb
import numpy as np

# USD Assets
# Nvidia Isaac Server Assets
ROBOT_USD_PATH = '/Isaac/Robots/Franka/franka_alt_fingers.usd'

# User Assets
USER_PATH = (
    os.getcwd()
)  # Make sure you're running the script from the correct directory
TOY_CAR_USD_PATH = os.path.join(USER_PATH, 'assets', 'objects', 'toy_car.usd')
BACKGROUND_USD_PATH = os.path.join(
    USER_PATH, 'assets', 'worlds', 'toybox_world', 'world.usd'
)

# Prim Paths
ROBOT_PRIM = '/World/Franka'
CAMERA_PRIM = f'{ROBOT_PRIM}/panda_hand/geometry/realsense/realsense_camera'

from isaacsim import SimulationApp  # noqa E402  isort: skip

simulation_app = SimulationApp({'renderer': 'RayTracedLighting', 'headless': False})

# More imports required after app creation
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
from pxr import Sdf, Gf, UsdGeom, UsdShade  # noqa E402  isort: skip

# enable ROS2 bridge extension
extensions.enable_extension('isaacsim.ros2.bridge')
extensions.enable_extension('isaacsim.core.nodes')

simulation_context = SimulationContext(stage_units_in_meters=1.0)

# Action Graphs
# Add current directory to Python path
sys.path.append(os.path.dirname(os.path.abspath(__file__)))
from util import helpers  # noqa E402  isort: skip

# Setup Stage
# Locate Isaac Sim assets directory to load robot
assets_root_path = nucleus.get_assets_root_path()
if assets_root_path is None:
    carb.log_error('Could not find Isaac Sim assets directory')
    simulation_app.close()
    sys.exit()

# Preparing stage
viewports.set_camera_view(eye=np.array([2.0, 1.35, 1.8]), target=np.array([0, 0, 0.3]))

# Loading the background environment
stage.add_reference_to_stage(BACKGROUND_USD_PATH, '/World/background')

# Loading the Robot
prims.create_prim(
    ROBOT_PRIM,
    'Xform',
    position=np.array([0.0, 0.25, 0]),
    usd_path=assets_root_path + ROBOT_USD_PATH,
)

# Loading the Toys
prims.create_prim(
    '/Toys/car_0',
    'Xform',
    position=np.array([0.0, 0.7, 0.04]),
    usd_path=TOY_CAR_USD_PATH,
)
prims.create_prim(
    '/Toys/car_1',
    'Xform',
    position=np.array([0.18, 0.7, 0.04]),
    orientation=rotations.gf_rotation_to_np_array(Gf.Rotation(Gf.Vec3d(0, 0, 1), 45)),
    usd_path=TOY_CAR_USD_PATH,
)
prims.create_prim(
    '/Toys/car_2',
    'Xform',
    position=np.array([0.26, 0.43, 0.04]),
    orientation=rotations.gf_rotation_to_np_array(Gf.Rotation(Gf.Vec3d(1, 0, 1), -90)),
    usd_path=TOY_CAR_USD_PATH,
)
prims.create_prim(
    '/Toys/car_3',
    'Xform',
    position=np.array([0.40, 0.43, 0.04]),
    orientation=rotations.gf_rotation_to_np_array(Gf.Rotation(Gf.Vec3d(0, 0, 1), -37)),
    usd_path=TOY_CAR_USD_PATH,
)

# Let's change colors
cars = {
    'car_1': [0.0, 1.0, 0.0],  # Green
    'car_2': [1.0, 0.0, 0.0],  # Red
    'car_3': [1.0, 1.0, 0.0],  # Yellow
}


def change_color(stage, material_path, rgb_values):
    pbr_shader = UsdShade.Shader(stage.get_current_stage().GetPrimAtPath(material_path))
    color = pbr_shader.CreateInput('diffuseColor', Sdf.ValueTypeNames.Color3f)
    color.Set(Gf.Vec3f(rgb_values))


for car_name, color in cars.items():
    material = f'/Toys/{car_name}/Car/Materials/Body/pbr_shader'
    change_color(stage, material, color)

simulation_app.update()

# Camera
# helpers.create_camera_graph(CAMERA_PRIM, bbox3d_pub=True)
# simulation_app.update()

# Create Tf Action Graph
# You can add any prim_path to the following list to publish their tf with respect to /World
# tf_target_prims = [
#     CAMERA_PRIM,
# ]
# helpers.create_tf_graph(tf_target_prims)
# simulation_app.update()

# Create Articulation Action Graph
helpers.create_js_graph(ROBOT_PRIM)
simulation_app.update()

simulation_context.play()

# Simulation Loop
while simulation_app.is_running():
    simulation_context.step(render=True)

simulation_context.stop()
simulation_app.close()
