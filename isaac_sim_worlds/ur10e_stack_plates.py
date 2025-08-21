import os
import sys

import carb
import numpy as np

# USD Assets
# Nvidia Isaac Server Assets
BACKGROUND_USD_PATH = "/Isaac/Environments/Simple_Room/simple_room.usd"

# User Assets
USER_PATH = (
    os.getcwd()
)  # Make sure you're running the script from the correct directory
PLATE_USD_PATH = os.path.join(USER_PATH, "assets", "objects", "plate.usd")
ROBOT_USD_PATH = os.path.join(USER_PATH, "assets", "robots", "ur10e_short_suction.usd")

# Prim Paths
ROBOT_PRIM = "/World/UR10e"
SUCTION_GRIPPER = f"{ROBOT_PRIM}/ee_link"
CAMERA_PRIM = f"{SUCTION_GRIPPER}/Camera"

from isaacsim import SimulationApp  # noqa E402  isort: skip

simulation_app = SimulationApp({"renderer": "RayTracedLighting", "headless": False})

# More imports that need to compare after we create the app
from omni.isaac.core import SimulationContext  # noqa E402  isort: skip
from isaacsim.core.api import World
from omni.isaac.core.utils import (  # noqa E402  isort: skip
    extensions,
    rotations,
    prims,
    stage,
    viewports,
)
from omni.isaac.core_nodes.scripts.utils import (  # noqa E402  isort: skip
    set_target_prims,
)
from pxr import Gf, UsdGeom  # noqa E402  isort: skip
from isaacsim.storage.native import get_assets_root_path
from isaacsim.core.prims import XFormPrim  # noqa E402  isort: skip

# enable ROS2 bridge extension
extensions.enable_extension("isaacsim.ros2.bridge")
extensions.enable_extension("isaacsim.core.nodes")

# Action Graphs
from isaacsim.ros2.bridge.scripts.og_shortcuts.og_rtx_sensors import (  # noqa E402  isort: skip
    Ros2CameraGraph,
)
from isaacsim.ros2.bridge.scripts.og_shortcuts.og_utils import (  # noqa E402  isort: skip
    Ros2JointStatesGraph,
    Ros2TfPubGraph,
)

simulation_context = SimulationContext(stage_units_in_meters=1.0)

# Locate Isaac Sim assets folder to load environment and robot stages
nvidia_assets_root_path = get_assets_root_path()
if nvidia_assets_root_path is None:
    carb.log_error("Could not find Isaac Sim assets folder")
    simulation_app.close()
    sys.exit()

# Preparing stage
viewports.set_camera_view(eye=np.array([1.2, 1.2, 0.8]), target=np.array([0, 0, 0.5]))

# Loading the simple_room environment
stage.add_reference_to_stage(
    nvidia_assets_root_path + BACKGROUND_USD_PATH, "/World/background"
)

# Loading the Robot
prims.create_prim(
    ROBOT_PRIM,
    "Xform",
    position=np.array([0, -0.64, 0]),
    usd_path=ROBOT_USD_PATH,
)

# Loading Objects
for i in range(4):
    prims.create_prim(
        f"/World/Objects/plate_{i}",
        "Xform",
        usd_path=PLATE_USD_PATH,
    )

objects_view = XFormPrim(prim_paths_expr="/World/Objects/plate_[0-3]")

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

# Camera
# Fix camera settings
# camera_prim = UsdGeom.Camera(stage.get_current_stage().GetPrimAtPath(CAMERA_PRIM))
# camera_prim.GetHorizontalApertureAttr().Set(20.955)
# camera_prim.GetVerticalApertureAttr().Set(15.7)
# camera_prim.GetFocalLengthAttr().Set(18.8)
# camera_prim.GetFocusDistanceAttr().Set(400)

# # Create Camera Action Graph
# CAMERA_GRAPH_PATH = "/World/Graphs/Camera"
# camera_graph = Ros2CameraGraph()
# camera_graph._og_path = CAMERA_GRAPH_PATH
# camera_graph._camera_prim = CAMERA_PRIM
# camera_graph._frame_id = "realsense_camera"

# # Topics
# camera_graph._node_namespace = "eef_camera"
# camera_graph._rgb_topic = "image_raw"
# camera_graph._depth_topic = "image_depth"

# param_check = camera_graph._check_params()
# if param_check:
#     print("Creating Articualtion Graph")
#     camera_graph.make_graph()
# else:
#     carb.log_error("Check Articualtion Graph parameters")

# simulation_app.update()

# Create Tf Action Graph
# You can add any prim_path to the following list to publish their tf with respect to /World
# tf_target_prims = [
#     CAMERA_PRIM,
# ]

# TF_GRAPH_PATH = "/World/Graphs/Transforms"
# tf_graph = Ros2TfPubGraph()
# tf_graph._og_path = TF_GRAPH_PATH

# param_check = tf_graph._check_params()
# if param_check:
#     print("Creating Transforms Graph")
#     tf_graph.make_graph()
# else:
#     carb.log_error("Check Transforms Graph parameters")

# set_target_prims(
#     primPath=TF_GRAPH_PATH + "/PublisherTF",
#     inputName="inputs:targetPrims",
#     targetPrimPaths=tf_target_prims,
# )

# simulation_app.update()

# Create Articulation Action Graph
robot_graph = Ros2JointStatesGraph()
robot_graph._og_path = "/World/Graphs/Articulation"
robot_graph._art_root_path = ROBOT_PRIM + "/root_joint"
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
while simulation_app.is_running():
    simulation_context.step(render=True)

simulation_context.stop()
simulation_app.close()
