// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grab2_msgs:action/GetIsaacGrasp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
#include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grab2_msgs/action/detail/get_isaac_grasp__functions.h"
#include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"


// Include directives for member types
// Member `object_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `object_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `isaac_grasp`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grab2_msgs__action__GetIsaacGrasp_Goal__init(message_memory);
}

void grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_fini_function(void * message_memory)
{
  grab2_msgs__action__GetIsaacGrasp_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_message_member_array[2] = {
  {
    "object_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_Goal, object_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "isaac_grasp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_Goal, isaac_grasp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_message_members = {
  "grab2_msgs__action",  // message namespace
  "GetIsaacGrasp_Goal",  // message name
  2,  // number of fields
  sizeof(grab2_msgs__action__GetIsaacGrasp_Goal),
  grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_message_member_array,  // message members
  grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_message_type_support_handle = {
  0,
  &grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_Goal)() {
  grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_message_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grab2_msgs__action__GetIsaacGrasp_Goal__rosidl_typesupport_introspection_c__GetIsaacGrasp_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__functions.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"


// Include directives for member types
// Member `grasps`
#include "moveit_msgs/msg/grasp.h"
// Member `grasps`
#include "moveit_msgs/msg/detail/grasp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grab2_msgs__action__GetIsaacGrasp_Result__init(message_memory);
}

void grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_fini_function(void * message_memory)
{
  grab2_msgs__action__GetIsaacGrasp_Result__fini(message_memory);
}

size_t grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__size_function__GetIsaacGrasp_Result__grasps(
  const void * untyped_member)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return member->size;
}

const void * grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__get_const_function__GetIsaacGrasp_Result__grasps(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void * grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__get_function__GetIsaacGrasp_Result__grasps(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__fetch_function__GetIsaacGrasp_Result__grasps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__Grasp * item =
    ((const moveit_msgs__msg__Grasp *)
    grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__get_const_function__GetIsaacGrasp_Result__grasps(untyped_member, index));
  moveit_msgs__msg__Grasp * value =
    (moveit_msgs__msg__Grasp *)(untyped_value);
  *value = *item;
}

void grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__assign_function__GetIsaacGrasp_Result__grasps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__Grasp * item =
    ((moveit_msgs__msg__Grasp *)
    grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__get_function__GetIsaacGrasp_Result__grasps(untyped_member, index));
  const moveit_msgs__msg__Grasp * value =
    (const moveit_msgs__msg__Grasp *)(untyped_value);
  *item = *value;
}

bool grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__resize_function__GetIsaacGrasp_Result__grasps(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  moveit_msgs__msg__Grasp__Sequence__fini(member);
  return moveit_msgs__msg__Grasp__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_message_member_array[1] = {
  {
    "grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_Result, grasps),  // bytes offset in struct
    NULL,  // default value
    grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__size_function__GetIsaacGrasp_Result__grasps,  // size() function pointer
    grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__get_const_function__GetIsaacGrasp_Result__grasps,  // get_const(index) function pointer
    grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__get_function__GetIsaacGrasp_Result__grasps,  // get(index) function pointer
    grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__fetch_function__GetIsaacGrasp_Result__grasps,  // fetch(index, &value) function pointer
    grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__assign_function__GetIsaacGrasp_Result__grasps,  // assign(index, value) function pointer
    grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__resize_function__GetIsaacGrasp_Result__grasps  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_message_members = {
  "grab2_msgs__action",  // message namespace
  "GetIsaacGrasp_Result",  // message name
  1,  // number of fields
  sizeof(grab2_msgs__action__GetIsaacGrasp_Result),
  grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_message_member_array,  // message members
  grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_message_type_support_handle = {
  0,
  &grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_Result)() {
  grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Grasp)();
  if (!grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_message_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grab2_msgs__action__GetIsaacGrasp_Result__rosidl_typesupport_introspection_c__GetIsaacGrasp_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__functions.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grab2_msgs__action__GetIsaacGrasp_Feedback__init(message_memory);
}

void grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_fini_function(void * message_memory)
{
  grab2_msgs__action__GetIsaacGrasp_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_message_members = {
  "grab2_msgs__action",  // message namespace
  "GetIsaacGrasp_Feedback",  // message name
  1,  // number of fields
  sizeof(grab2_msgs__action__GetIsaacGrasp_Feedback),
  grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_message_member_array,  // message members
  grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_message_type_support_handle = {
  0,
  &grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_Feedback)() {
  if (!grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_message_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grab2_msgs__action__GetIsaacGrasp_Feedback__rosidl_typesupport_introspection_c__GetIsaacGrasp_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__functions.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "grab2_msgs/action/get_isaac_grasp.h"
// Member `goal`
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__init(message_memory);
}

void grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_fini_function(void * message_memory)
{
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_members = {
  "grab2_msgs__action",  // message namespace
  "GetIsaacGrasp_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(grab2_msgs__action__GetIsaacGrasp_SendGoal_Request),
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_member_array,  // message members
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_type_support_handle = {
  0,
  &grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_SendGoal_Request)() {
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_Goal)();
  if (!grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__functions.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__init(message_memory);
}

void grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_fini_function(void * message_memory)
{
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_members = {
  "grab2_msgs__action",  // message namespace
  "GetIsaacGrasp_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(grab2_msgs__action__GetIsaacGrasp_SendGoal_Response),
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_member_array,  // message members
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_type_support_handle = {
  0,
  &grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_SendGoal_Response)() {
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_service_members = {
  "grab2_msgs__action",  // service namespace
  "GetIsaacGrasp_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_service_type_support_handle = {
  0,
  &grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_SendGoal)() {
  if (!grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_service_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_SendGoal_Response)()->data;
  }

  return &grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__functions.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grab2_msgs__action__GetIsaacGrasp_GetResult_Request__init(message_memory);
}

void grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_fini_function(void * message_memory)
{
  grab2_msgs__action__GetIsaacGrasp_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_members = {
  "grab2_msgs__action",  // message namespace
  "GetIsaacGrasp_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(grab2_msgs__action__GetIsaacGrasp_GetResult_Request),
  grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_member_array,  // message members
  grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_type_support_handle = {
  0,
  &grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_GetResult_Request)() {
  grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grab2_msgs__action__GetIsaacGrasp_GetResult_Request__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__functions.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "grab2_msgs/action/get_isaac_grasp.h"
// Member `result`
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grab2_msgs__action__GetIsaacGrasp_GetResult_Response__init(message_memory);
}

void grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_fini_function(void * message_memory)
{
  grab2_msgs__action__GetIsaacGrasp_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_members = {
  "grab2_msgs__action",  // message namespace
  "GetIsaacGrasp_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(grab2_msgs__action__GetIsaacGrasp_GetResult_Response),
  grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_member_array,  // message members
  grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_type_support_handle = {
  0,
  &grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_GetResult_Response)() {
  grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_Result)();
  if (!grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grab2_msgs__action__GetIsaacGrasp_GetResult_Response__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_service_members = {
  "grab2_msgs__action",  // service namespace
  "GetIsaacGrasp_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_service_type_support_handle = {
  0,
  &grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_GetResult)() {
  if (!grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_service_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_GetResult_Response)()->data;
  }

  return &grab2_msgs__action__detail__get_isaac_grasp__rosidl_typesupport_introspection_c__GetIsaacGrasp_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grab2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__functions.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "grab2_msgs/action/get_isaac_grasp.h"
// Member `feedback`
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__init(message_memory);
}

void grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_fini_function(void * message_memory)
{
  grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs__action__GetIsaacGrasp_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_members = {
  "grab2_msgs__action",  // message namespace
  "GetIsaacGrasp_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(grab2_msgs__action__GetIsaacGrasp_FeedbackMessage),
  grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_member_array,  // message members
  grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_type_support_handle = {
  0,
  &grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grab2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_FeedbackMessage)() {
  grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grab2_msgs, action, GetIsaacGrasp_Feedback)();
  if (!grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__rosidl_typesupport_introspection_c__GetIsaacGrasp_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
