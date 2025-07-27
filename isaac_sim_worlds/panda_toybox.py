import os
import sys

import carb
import numpy as np

# USD Assets
# Nvidia Isaac Server Assets
ROBOT_USD_PATH = "/Isaac/Robots/Franka/franka_alt_fingers.usd"

# User Assets
USER_PATH = (
    os.getcwd()
)  # Make sure you're running the script from the correct directory
TOY_CAR_USD_PATH = os.path.join(USER_PATH, "assets", "toybox_world", "toy_car.usd")
BACKGROUND_USD_PATH = os.path.join(USER_PATH, "assets", "toybox_world", "world.usd")

# Prim Paths
ROBOT_PRIM = "/World/Franka"
CAMERA_PRIM = f"{ROBOT_PRIM}/panda_hand/geometry/realsense/realsense_camera"

from isaacsim import SimulationApp  # noqa E402  isort: skip

simulation_app = SimulationApp({"renderer": "RayTracedLighting", "headless": False})

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
from omni.isaac.core_nodes.scripts.utils import (
    set_target_prims,
)  # noqa E402  isort: skip
from pxr import Sdf, Gf, UsdGeom, UsdShade  # noqa E402  isort: skip

# enable ROS2 bridge extension
extensions.enable_extension("isaacsim.ros2.bridge")
extensions.enable_extension("isaacsim.core.nodes")

# Action Graphs
import omni.graph.core as og  # noqa E402  isort: skip
from isaacsim.ros2.bridge.scripts.og_shortcuts.og_rtx_sensors import (
    Ros2CameraGraph,
)  # noqa E402  isort: skip
from isaacsim.ros2.bridge.scripts.og_shortcuts.og_utils import (  # noqa E402  isort: skip
    Ros2JointStatesGraph,
    Ros2TfPubGraph,
)

simulation_context = SimulationContext(stage_units_in_meters=1.0)

# Setup Stage
# Locate Isaac Sim assets directory to load robot
assets_root_path = nucleus.get_assets_root_path()
if assets_root_path is None:
    carb.log_error("Could not find Isaac Sim assets directory")
    simulation_app.close()
    sys.exit()

# Preparing stage
viewports.set_camera_view(eye=np.array([2.0, 1.35, 1.8]), target=np.array([0, 0, 0.3]))

# Loading the background environment
stage.add_reference_to_stage(BACKGROUND_USD_PATH, "/World/background")

# Loading the Robot
prims.create_prim(
    ROBOT_PRIM,
    "Xform",
    position=np.array([0.0, 0.25, 0]),
    usd_path=assets_root_path + ROBOT_USD_PATH,
)

# Loading the Toys
prims.create_prim(
    "/Toys/car_0",
    "Xform",
    position=np.array([0.0, 0.7, 0.04]),
    usd_path=TOY_CAR_USD_PATH,
)
prims.create_prim(
    "/Toys/car_1",
    "Xform",
    position=np.array([0.18, 0.7, 0.04]),
    orientation=rotations.gf_rotation_to_np_array(Gf.Rotation(Gf.Vec3d(0, 0, 1), 45)),
    usd_path=TOY_CAR_USD_PATH,
)
prims.create_prim(
    "/Toys/car_2",
    "Xform",
    position=np.array([0.26, 0.43, 0.04]),
    orientation=rotations.gf_rotation_to_np_array(Gf.Rotation(Gf.Vec3d(1, 0, 1), -90)),
    usd_path=TOY_CAR_USD_PATH,
)
prims.create_prim(
    "/Toys/car_3",
    "Xform",
    position=np.array([0.40, 0.43, 0.04]),
    orientation=rotations.gf_rotation_to_np_array(Gf.Rotation(Gf.Vec3d(0, 0, 1), -37)),
    usd_path=TOY_CAR_USD_PATH,
)

# Let's change colors
cars = {
    "car_1": [0.0, 1.0, 0.0],  # Green
    "car_2": [1.0, 0.0, 0.0],  # Red
    "car_3": [1.0, 1.0, 0.0],  # Yellow
}


def change_color(stage, material_path, rgb_values):
    pbr_shader = UsdShade.Shader(stage.get_current_stage().GetPrimAtPath(material_path))
    color = pbr_shader.CreateInput("diffuseColor", Sdf.ValueTypeNames.Color3f)
    color.Set(Gf.Vec3f(rgb_values))


for car_name, color in cars.items():
    material = f"/Toys/{car_name}/Car/Materials/Body/pbr_shader"
    change_color(stage, material, color)

simulation_app.update()

# Camera
# Fix camera settings since the defaults in the realsense model are inaccurate
realsense_prim = UsdGeom.Camera(stage.get_current_stage().GetPrimAtPath(CAMERA_PRIM))
realsense_prim.GetHorizontalApertureAttr().Set(20.955)
realsense_prim.GetVerticalApertureAttr().Set(15.7)
realsense_prim.GetFocalLengthAttr().Set(18.8)
realsense_prim.GetFocusDistanceAttr().Set(400)

# Create Camera Action Graph
CAMERA_GRAPH_PATH = "/World/Graphs/Camera"
camera_graph = Ros2CameraGraph()
camera_graph._og_path = CAMERA_GRAPH_PATH
camera_graph._camera_prim = CAMERA_PRIM
camera_graph._frame_id = "realsense_camera"

# Topics
camera_graph._node_namespace = "eef_camera"
camera_graph._rgb_topic = "image_raw"
camera_graph._depth_topic = "image_depth"
camera_graph._bbox3d_pub = True
camera_graph.__bbox3d_topic = "bbox3d"

param_check = camera_graph._check_params()
if param_check:
    print("Creating Articualtion Graph")
    camera_graph.make_graph()
else:
    carb.log_error("Check Articualtion Graph parameters")

# Issue: Even though frameId is set to camera frame,
# bbox3d array is published with respect to world
# Change bbox3d frameId to world so that it appears correctly in rviz2
BBOX3D_NODE_PATH = f"{CAMERA_GRAPH_PATH}/Bbox3dPublish"
try:
    frameid_attr = og.Controller.attribute(f"{BBOX3D_NODE_PATH}.inputs:frameId")
    semantics_attr = og.Controller.attribute(
        f"{BBOX3D_NODE_PATH}.inputs:enableSemanticLabels"
    )
    og.Controller.set(frameid_attr, "world")
    og.Controller.set(
        semantics_attr, False
    )  # Change this if you need semantics published
except Exception as e:
    print("Error accessing attribute:", e)

simulation_app.update()

# Create Tf Action Graph
# You can add any prim_path to the following list to publish their tf with respect to /World
tf_target_prims = [
    CAMERA_PRIM,
]

TF_GRAPH_PATH = "/World/Graphs/Transforms"
tf_graph = Ros2TfPubGraph()
tf_graph._og_path = TF_GRAPH_PATH

param_check = tf_graph._check_params()
if param_check:
    print("Creating Transforms Graph")
    tf_graph.make_graph()
else:
    carb.log_error("Check Transforms Graph parameters")

set_target_prims(
    primPath=TF_GRAPH_PATH + "/PublisherTF",
    inputName="inputs:targetPrims",
    targetPrimPaths=tf_target_prims,
)

simulation_app.update()

# Create Articulation Action Graph
robot_graph = Ros2JointStatesGraph()
robot_graph._og_path = "/World/Graphs/Articulation"
robot_graph._art_root_path = ROBOT_PRIM
robot_graph._publisher = True
robot_graph._pub_topic = "isaac_joint_states"
robot_graph._subscriber = True
robot_graph._sub_topic = "isaac_joint_commands"

param_check = robot_graph._check_params()
if param_check:
    print("Creating Articualtion Graph")
    robot_graph.make_graph()
else:
    carb.log_error("Check Articualtion Graph parameters")

simulation_app.update()
simulation_context.play()

# Simulation Loop
while simulation_app.is_running():
    simulation_context.step(render=True)

simulation_context.stop()
simulation_app.close()
