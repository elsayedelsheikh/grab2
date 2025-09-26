import carb
from pxr import UsdGeom
from omni.isaac.core.utils import stage
from omni.isaac.core_nodes.scripts.utils import set_target_prims

# Use this flag to identify whether current release is Isaac Sim 5.0
isaac_sim_ge_5_version = True

import omni.graph.core as og  # noqa E402  isort: skip
try:
    from isaacsim.ros2.bridge.impl.og_shortcuts.og_rtx_sensors import (  # noqa E402  isort: skip
        Ros2CameraGraph,
    )
    from isaacsim.ros2.bridge.impl.og_shortcuts.og_utils import (  # noqa E402  isort: skip
        Ros2JointStatesGraph,
        Ros2TfPubGraph,
    )
except:
    # Action Graphs
    from isaacsim.ros2.bridge.scripts.og_shortcuts.og_rtx_sensors import (  # noqa E402  isort: skip
        Ros2CameraGraph,
    )
    from isaacsim.ros2.bridge.scripts.og_shortcuts.og_utils import (  # noqa E402  isort: skip
        Ros2JointStatesGraph,
        Ros2TfPubGraph,
    )
    isaac_sim_ge_5_version = False

# Camera
def create_camera_graph(camera_prim, graph_path = '/World/Graphs/Camera', fix_attributes=True, bbox3d_pub=False):
  # Fix camera settings
  stage_prim = UsdGeom.Camera(stage.get_current_stage().GetPrimAtPath(camera_prim))
  if fix_attributes:
    stage_prim.GetHorizontalApertureAttr().Set(20.955)
    stage_prim.GetVerticalApertureAttr().Set(15.7)
    stage_prim.GetFocalLengthAttr().Set(18.8)
    stage_prim.GetFocusDistanceAttr().Set(400)

  # Create Camera Action Graph
  camera_graph = Ros2CameraGraph()
  camera_graph._og_path = graph_path
  camera_graph._camera_prim = camera_prim
  camera_graph._frame_id = 'realsense_camera'

  # Topics
  camera_graph._node_namespace = 'eef_camera'
  camera_graph._rgb_topic = 'image_raw'
  camera_graph._depth_topic = 'image_depth'
  camera_graph._bbox3d_pub = bbox3d_pub
  camera_graph.__bbox3d_topic = 'bbox3d'

  if bbox3d_pub:
    # Issue: Even though frameId is set to camera frame,
    # bbox3d array is published with respect to world
    # Change bbox3d frameId to world so that it appears correctly in rviz2
    BBOX3D_NODE_PATH = f'{graph_path}/Bbox3dPublish'
    try:
        frameid_attr = og.Controller.attribute(f'{BBOX3D_NODE_PATH}.inputs:frameId')
        semantics_attr = og.Controller.attribute(
            f'{BBOX3D_NODE_PATH}.inputs:enableSemanticLabels'
        )
        og.Controller.set(frameid_attr, 'world')
        og.Controller.set(
            semantics_attr, False
        )  # Change this if you need semantics published
    except Exception as e:
        print('Error accessing attribute:', e)

  param_check = camera_graph._check_params()
  if param_check:
      print('Creating Articualtion Graph')
      camera_graph.make_graph()
  else:
      carb.log_error('Check Articualtion Graph parameters')

# ROS 2 Transformations
def create_tf_graph(tf_target_prims, graph_path='/World/Graphs/Transforms'):
  tf_graph = Ros2TfPubGraph()
  tf_graph._og_path = graph_path

  param_check = tf_graph._check_params()
  if param_check:
      print('Creating Transforms Graph')
      tf_graph.make_graph()
  else:
      carb.log_error('Check Transforms Graph parameters')

  set_target_prims(
      primPath=graph_path + '/PublisherTF',
      inputName='inputs:targetPrims',
      targetPrimPaths=tf_target_prims,
  )

def create_js_graph(robot_prim, graph_path='/World/Graphs/Articulation'):
  robot_graph = Ros2JointStatesGraph()
  robot_graph._og_path = graph_path
  robot_graph._art_root_path = robot_prim + '/root_joint'
  robot_graph._publisher = True
  robot_graph._pub_topic = 'isaac_joint_states'
  robot_graph._subscriber = True
  robot_graph._sub_topic = 'isaac_joint_commands'

  param_check = robot_graph._check_params()
  if param_check:
      print('Creating Articualtion Graph')
      robot_graph.make_graph()
  else:
      carb.log_error('Check Articualtion Graph parameters')
