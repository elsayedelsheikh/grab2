from typing import Optional
import carb
import omni
import numpy as np
from pxr import Gf, UsdGeom
import omni.graph.core as og
import omni.replicator.core as rep
import omni.syntheticdata._syntheticdata as sd
from omni.isaac.core.utils import stage, prims, rotations
from isaacsim.core.utils.prims import is_prim_path_valid

from isaacsim.sensors.camera import Camera

########################################### Action Graphs ###########################################
# Camera Action Graphs
def publish_camera_info(camera: Camera, freq, topic_name, frame_id, node_namespace = ''):
    from isaacsim.ros2.bridge import read_camera_info
    # The following code will link the camera's render product and publish the data to the specified topic name.
    render_product = camera._render_product_path
    step_size = int(60/freq)
    queue_size = 1

    writer = rep.writers.get("ROS2PublishCameraInfo")
    camera_info, _ = read_camera_info(render_product_path=render_product)
    writer.initialize(
        frameId=frame_id,
        nodeNamespace=node_namespace,
        queueSize=queue_size,
        topicName=topic_name,
        width=camera_info.width,
        height=camera_info.height,
        projectionType=camera_info.distortion_model,
        k=camera_info.k.reshape([1, 9]),
        r=camera_info.r.reshape([1, 9]),
        p=camera_info.p.reshape([1, 12]),
        physicalDistortionModel=camera_info.distortion_model,
        physicalDistortionCoefficients=camera_info.d,
    )
    writer.attach([render_product])

    gate_path = omni.syntheticdata.SyntheticData._get_node_path(
        "PostProcessDispatch" + "IsaacSimulationGate", render_product
    )

    # Set step input of the Isaac Simulation Gate nodes upstream of ROS publishers to control their execution rate
    og.Controller.attribute(gate_path + ".inputs:step").set(step_size)
    return

def publish_camera_rgb(camera: Camera, freq, topic_name, frame_id, node_namespace = ''):
    # The following code will link the camera's render product and publish the data to the specified topic name.
    render_product = camera._render_product_path
    step_size = int(60/freq)
    queue_size = 1

    rv = omni.syntheticdata.SyntheticData.convert_sensor_type_to_rendervar(sd.SensorType.Rgb.name)
    writer = rep.writers.get(rv + "ROS2PublishImage")
    writer.initialize(
        frameId=frame_id,
        nodeNamespace=node_namespace,
        queueSize=queue_size,
        topicName=topic_name
    )
    writer.attach([render_product])

    # Set step input of the Isaac Simulation Gate nodes upstream of ROS publishers to control their execution rate
    gate_path = omni.syntheticdata.SyntheticData._get_node_path(
        rv + "IsaacSimulationGate", render_product
    )
    og.Controller.attribute(gate_path + ".inputs:step").set(step_size)

    return

def publish_camera_depth(camera: Camera, freq, topic_name, frame_id, node_namespace = ''):
    # The following code will link the camera's render product and publish the data to the specified topic name.
    render_product = camera._render_product_path
    step_size = int(60/freq)
    queue_size = 1

    rv = omni.syntheticdata.SyntheticData.convert_sensor_type_to_rendervar(
                            sd.SensorType.DistanceToImagePlane.name
                        )
    writer = rep.writers.get(rv + "ROS2PublishImage")
    writer.initialize(
        frameId=frame_id,
        nodeNamespace=node_namespace,
        queueSize=queue_size,
        topicName=topic_name
    )
    writer.attach([render_product])

    # Set step input of the Isaac Simulation Gate nodes upstream of ROS publishers to control their execution rate
    gate_path = omni.syntheticdata.SyntheticData._get_node_path(
        rv + "IsaacSimulationGate", render_product
    )
    og.Controller.attribute(gate_path + ".inputs:step").set(step_size)

    return

# TODO: Publish BBOX3D
# def publish_camera_bbox3d()
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

def create_camera_graph(
    camera_stage_path: str,
    frequency: int = 30,
    camera_frame_id: str = 'realsense_camera',
    node_namespace: str = 'realsense_camera',
    topic_info: str = 'camera_info',
    topic_rgb: str = 'color',
    topic_depth: Optional[str] = None,
    topic_bbox3d: Optional[str] = None,
    publish_tf: bool = True
  ):
    # Get camera object
    camera_obj = Camera(prim_path=camera_stage_path)
    camera_obj.initialize()

    # Publish camera topics
    publish_camera_info(camera_obj, frequency, topic_info, camera_frame_id, node_namespace)
    publish_camera_rgb(camera_obj, frequency, topic_rgb, camera_frame_id, node_namespace)
    
    if publish_tf:
      publish_camera_tf(camera_stage_path,camera_frame_id)

    if topic_depth is not None:
      publish_camera_depth(camera_obj, frequency, topic_depth, camera_frame_id, node_namespace)

# Deprecated Function: Requires active viewport
def create_camera_graph_deprecated(
    camera_stage_path: str,
    graph_path: str = '/World/Graphs/Camera',
    node_namespace: str = 'node_namespace',
    topic_info: str = 'camera_info',
    topic_rgb: str = 'color',
    topic_depth: str = 'depth',
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
    carb.log_error(f'Camera action graph error: {e}')

# ROS2 Transformations Action Graph
def publish_camera_tf(camera_stage_path: str, camera_frame_id, graph_path: str = '/World/Graphs/Transforms'):

    if not is_prim_path_valid(camera_stage_path):
        raise ValueError(f"Camera path '{camera_stage_path}' is invalid.")

    try:
        # Generate the camera_frame_id. OmniActionGraph will use the last part of
        # the full camera prim path as the frame name, so we will extract it here
        # and use it for the pointcloud frame_id.
        # camera_frame_id=camera_stage_path.split("/")[-1]

        # If a camera graph is not found, create a new one.
        if not is_prim_path_valid(graph_path):
            (ros_camera_graph, _, _, _) = og.Controller.edit(
                {
                    "graph_path": graph_path,
                    "evaluator_name": "execution",
                    "pipeline_stage": og.GraphPipelineStage.GRAPH_PIPELINE_STAGE_SIMULATION,
                },
                {
                    og.Controller.Keys.CREATE_NODES: [
                        ("OnTick", "omni.graph.action.OnTick"),
                        ("IsaacClock", "isaacsim.core.nodes.IsaacReadSimulationTime"),
                        ("RosPublisher", "isaacsim.ros2.bridge.ROS2PublishClock"),
                    ],
                    og.Controller.Keys.CONNECT: [
                        ("OnTick.outputs:tick", "RosPublisher.inputs:execIn"),
                        ("IsaacClock.outputs:simulationTime", "RosPublisher.inputs:timeStamp"),
                    ]
                }
            )
        og.Controller.edit(
            graph_path,
            {
                og.Controller.Keys.CREATE_NODES: [
                    ("PublishTF_"+camera_frame_id, "isaacsim.ros2.bridge.ROS2PublishTransformTree"),
                ],
                og.Controller.Keys.SET_VALUES: [
                    ("PublishTF_"+camera_frame_id+".inputs:topicName", "/tf"),
                    ("PublishTF_"+camera_frame_id+".inputs:targetPrims", camera_stage_path),
                ],
                og.Controller.Keys.CONNECT: [
                    (graph_path+"/OnTick.outputs:tick",
                        "PublishTF_"+camera_frame_id+".inputs:execIn"),
                    (graph_path+"/IsaacClock.outputs:simulationTime",
                        "PublishTF_"+camera_frame_id+".inputs:timeStamp"),
                ],
            },
        )
    except Exception as e:
        print(e)
    return

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
    carb.log_error(f'JointState action graph error: {e}')

########################################### Robots ###########################################
def add_franka(
    robot_stage_path: str,
    position: list[float] = (0.0, 0.0, 0.0),
    use_jointstates_action_graph: bool = True,
    use_camera_action_graph: bool = True
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
      create_camera_graph(camera_stage_path, node_namespace='realsense_camera')
       