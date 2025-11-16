import carb
import numpy as np
from typing import Optional
from pxr import Gf, UsdGeom
import omni.graph.core as og
from omni.isaac.core.utils import stage, prims, rotations
from omni.isaac.core_nodes.scripts.utils import set_target_prims

########################################### Action Graphs ###########################################
# Camera Action Graph
def create_camera_graph(
    camera_stage_path: str,
    graph_path: str = '/World/Graphs/Camera',
    node_namespace: str = 'node_namespace',
    topic_info: str = 'camera_info',
    topic_rgb: str = 'color',
    topic_depth: Optional[str] = None,
    topic_bbox3d: Optional[str] = None
  ):
  camera_frame_id = 'realsense_camera'
  try:
      og.Controller.edit(
          {"graph_path": graph_path, "evaluator_name": "execution"},
          {
            og.Controller.Keys.CREATE_NODES: [
                ("OnTick", "omni.graph.action.OnTick"),

                ("createViewport", "isaacsim.core.nodes.IsaacCreateViewport"),
                ("getRenderProduct", "isaacsim.core.nodes.IsaacGetViewportRenderProduct"),
                ("setCamera", "isaacsim.core.nodes.IsaacSetCameraOnRenderProduct"),

                ("cameraHelperRgb", "isaacsim.ros2.bridge.ROS2CameraHelper"),
                ("cameraHelperInfo", "isaacsim.ros2.bridge.ROS2CameraInfoHelper"),
                ("cameraHelperDepth", "isaacsim.ros2.bridge.ROS2CameraHelper"),
            ],
            og.Controller.Keys.CONNECT: [
                # Tick → viewport creation
                ("OnTick.outputs:tick", "createViewport.inputs:execIn"),

                # Viewport → render product
                ("createViewport.outputs:execOut", "getRenderProduct.inputs:execIn"),
                ("createViewport.outputs:viewport", "getRenderProduct.inputs:viewport"),

                # Render product → camera assignment
                ("getRenderProduct.outputs:execOut", "setCamera.inputs:execIn"),
                ("getRenderProduct.outputs:renderProductPath", "setCamera.inputs:renderProductPath"),

                # Camera assigned → ROS camera helpers
                ("setCamera.outputs:execOut", "cameraHelperRgb.inputs:execIn"),
                ("setCamera.outputs:execOut", "cameraHelperInfo.inputs:execIn"),
                ("setCamera.outputs:execOut", "cameraHelperDepth.inputs:execIn"),

                # Render product path → camera helpers
                ("getRenderProduct.outputs:renderProductPath", "cameraHelperRgb.inputs:renderProductPath"),
                ("getRenderProduct.outputs:renderProductPath", "cameraHelperInfo.inputs:renderProductPath"),
                ("getRenderProduct.outputs:renderProductPath", "cameraHelperDepth.inputs:renderProductPath"),
            ],
            og.Controller.Keys.SET_VALUES: [
              ("createViewport.inputs:name", "Camera Viewport"),
              ("createViewport.inputs:viewportId", 1),

              ("cameraHelperRgb.inputs:frameId", camera_frame_id),
              ("cameraHelperRgb.inputs:nodeNamespace", node_namespace),
              ("cameraHelperRgb.inputs:topicName", topic_rgb),
              ("cameraHelperRgb.inputs:type", "rgb"),

              ("cameraHelperInfo.inputs:frameId", camera_frame_id),
              ("cameraHelperInfo.inputs:nodeNamespace", node_namespace),
              ("cameraHelperInfo.inputs:topicName", topic_info),

              ("cameraHelperDepth.inputs:frameId", camera_frame_id),
              ("cameraHelperDepth.inputs:nodeNamespace", node_namespace),
              ("cameraHelperDepth.inputs:topicName", topic_depth),
              ("cameraHelperDepth.inputs:type", "depth"),
              ("setCamera.inputs:cameraPrim", camera_stage_path),
          ],
        },
      )

  except Exception as e:
    carb.log_error('Camera action graph error', e)


  # # Create Camera Action Graph
  # camera_graph = Ros2CameraGraph()
  # camera_graph._og_path = graph_path
  # camera_graph._camera_prim = camera_prim
  # camera_graph._frame_id = 'realsense_camera'

  # # Topics
  # camera_graph._node_namespace = 'eef_camera'
  # camera_graph._rgb_topic = 'image_raw'
  # camera_graph._depth_topic = 'image_depth'
  # camera_graph._bbox3d_pub = bbox3d_pub
  # camera_graph.__bbox3d_topic = 'bbox3d'

  # if bbox3d_pub:
  #   # Issue: Even though frameId is set to camera frame,
  #   # bbox3d array is published with respect to world
  #   # Change bbox3d frameId to world so that it appears correctly in rviz2
  #   BBOX3D_NODE_PATH = f'{graph_path}/Bbox3dPublish'
  #   try:
  #       frameid_attr = og.Controller.attribute(f'{BBOX3D_NODE_PATH}.inputs:frameId')
  #       semantics_attr = og.Controller.attribute(
  #           f'{BBOX3D_NODE_PATH}.inputs:enableSemanticLabels'
  #       )
  #       og.Controller.set(frameid_attr, 'world')
  #       og.Controller.set(
  #           semantics_attr, False
  #       )  # Change this if you need semantics published
  #   except Exception as e:
  #       print('Error accessing attribute:', e)

# ROS2 Transformations Action Graph
# def create_tf_graph(tf_target_prims, graph_path='/World/Graphs/Transforms'):
#   tf_graph = Ros2TfPubGraph()
#   tf_graph._og_path = graph_path

#   param_check = tf_graph._check_params()
#   if param_check:
#       print('Creating Transforms Graph')
#       tf_graph.make_graph()
#   else:
#       carb.log_error('Check Transforms Graph parameters')

#   set_target_prims(
#       primPath=graph_path + '/PublisherTF',
#       inputName='inputs:targetPrims',
#       targetPrimPaths=tf_target_prims,
#   )

# JointState Action Graph
def create_jointstates_graph(robot_stage_path: str, graph_stage_path: str ='/World/Graphs/JointStateGraph'):
  articulation_root_path = robot_stage_path
  # articulation_root_path = robot_stage_path + "/root_joint"
  try:
    og.Controller.edit(
        {"graph_path": graph_stage_path, "evaluator_name": "execution"},
        {
            og.Controller.Keys.CREATE_NODES: [
                ("OnPlaybackTick", "omni.graph.action.OnPlaybackTick"),
                ("PublishJointState", "isaacsim.ros2.bridge.ROS2PublishJointState"),
                ("SubscribeJointState", "isaacsim.ros2.bridge.ROS2SubscribeJointState"),
                ("ArticulationController", "isaacsim.core.nodes.IsaacArticulationController"),
                ("ReadSimTime", "isaacsim.core.nodes.IsaacReadSimulationTime"),
            ],
            og.Controller.Keys.CONNECT: [
                ("OnPlaybackTick.outputs:tick", "PublishJointState.inputs:execIn"),
                ("OnPlaybackTick.outputs:tick", "SubscribeJointState.inputs:execIn"),
                ("OnPlaybackTick.outputs:tick", "ArticulationController.inputs:execIn"),

                ("ReadSimTime.outputs:simulationTime", "PublishJointState.inputs:timeStamp"),

                ("SubscribeJointState.outputs:jointNames", "ArticulationController.inputs:jointNames"),
                ("SubscribeJointState.outputs:positionCommand", "ArticulationController.inputs:positionCommand"),
                ("SubscribeJointState.outputs:velocityCommand", "ArticulationController.inputs:velocityCommand"),
                ("SubscribeJointState.outputs:effortCommand", "ArticulationController.inputs:effortCommand"),
            ],
            og.Controller.Keys.SET_VALUES: [
                # Providing path to /panda robot to Articulation Controller node
                # Providing the robot path is equivalent to setting the targetPrim in Articulation Controller node
                # ("ArticulationController.inputs:usePath", True),      # if you are using an older version of Isaac Sim, you can  uncomment this line
                ("ArticulationController.inputs:robotPath", articulation_root_path),
                ("PublishJointState.inputs:targetPrim", articulation_root_path),
                ("PublishJointState.inputs:topicName", "isaac_joint_states"),
                ("SubscribeJointState.inputs:topicName", "isaac_joint_commands"),
            ],
        },
    )
  except Exception as e:
    carb.log_error('JointState action graph error', e)

########################################### Robots ###########################################
def add_franka(
    robot_stage_path: str,
    position: list[float] = (0.0, 0.0, 0.0),
    use_jointstates_action_graph: bool = True,
    use_camera_action_graph: bool = True,
    use_ros2_tf_action_graph: bool = True
):
    # Create Robot Prim
    ROBOT_USD_PATH = 'https://omniverse-content-production.s3-us-west-2.amazonaws.com/Assets/Isaac/4.2/Isaac/Robots/Franka/franka_alt_fingers.usd'
    prims.create_prim(
        robot_stage_path,
        'Xform',
        position=np.array(position),
        orientation=rotations.gf_rotation_to_np_array(Gf.Rotation(Gf.Vec3d(0, 0, 1), 90)),
        usd_path=ROBOT_USD_PATH,
    )

    # Camera
    camera_stage_path = f'{robot_stage_path}/panda_hand/geometry/realsense/realsense_camera'
    # Fix camera settings since the defaults in the realsense model are inaccurate
    realsense_prim = UsdGeom.Camera(stage.get_current_stage().GetPrimAtPath(camera_stage_path))
    realsense_prim.GetHorizontalApertureAttr().Set(20.955)
    realsense_prim.GetVerticalApertureAttr().Set(15.7)
    realsense_prim.GetFocalLengthAttr().Set(18.8)
    realsense_prim.GetFocusDistanceAttr().Set(400)

    # Action graphs
    if use_jointstates_action_graph:
      create_jointstates_graph(robot_stage_path)
    if use_camera_action_graph:
       create_camera_graph(camera_stage_path)
       