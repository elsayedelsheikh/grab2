// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from grab2_msgs:action/GetIsaacGrasp.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIsaacGrasp_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::GetIsaacGrasp_Goal(_init);
}

void GetIsaacGrasp_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::GetIsaacGrasp_Goal *>(message_memory);
  typed_message->~GetIsaacGrasp_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIsaacGrasp_Goal_message_member_array[2] = {
  {
    "object_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_Goal, object_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "isaac_grasp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_Goal, isaac_grasp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIsaacGrasp_Goal_message_members = {
  "grab2_msgs::action",  // message namespace
  "GetIsaacGrasp_Goal",  // message name
  2,  // number of fields
  sizeof(grab2_msgs::action::GetIsaacGrasp_Goal),
  GetIsaacGrasp_Goal_message_member_array,  // message members
  GetIsaacGrasp_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIsaacGrasp_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIsaacGrasp_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_Goal>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_Goal)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIsaacGrasp_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::GetIsaacGrasp_Result(_init);
}

void GetIsaacGrasp_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::GetIsaacGrasp_Result *>(message_memory);
  typed_message->~GetIsaacGrasp_Result();
}

size_t size_function__GetIsaacGrasp_Result__grasps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetIsaacGrasp_Result__grasps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void * get_function__GetIsaacGrasp_Result__grasps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetIsaacGrasp_Result__grasps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::Grasp *>(
    get_const_function__GetIsaacGrasp_Result__grasps(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::Grasp *>(untyped_value);
  value = item;
}

void assign_function__GetIsaacGrasp_Result__grasps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::Grasp *>(
    get_function__GetIsaacGrasp_Result__grasps(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::Grasp *>(untyped_value);
  item = value;
}

void resize_function__GetIsaacGrasp_Result__grasps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIsaacGrasp_Result_message_member_array[1] = {
  {
    "grasps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::Grasp>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_Result, grasps),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetIsaacGrasp_Result__grasps,  // size() function pointer
    get_const_function__GetIsaacGrasp_Result__grasps,  // get_const(index) function pointer
    get_function__GetIsaacGrasp_Result__grasps,  // get(index) function pointer
    fetch_function__GetIsaacGrasp_Result__grasps,  // fetch(index, &value) function pointer
    assign_function__GetIsaacGrasp_Result__grasps,  // assign(index, value) function pointer
    resize_function__GetIsaacGrasp_Result__grasps  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIsaacGrasp_Result_message_members = {
  "grab2_msgs::action",  // message namespace
  "GetIsaacGrasp_Result",  // message name
  1,  // number of fields
  sizeof(grab2_msgs::action::GetIsaacGrasp_Result),
  GetIsaacGrasp_Result_message_member_array,  // message members
  GetIsaacGrasp_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIsaacGrasp_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIsaacGrasp_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_Result>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_Result)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIsaacGrasp_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::GetIsaacGrasp_Feedback(_init);
}

void GetIsaacGrasp_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::GetIsaacGrasp_Feedback *>(message_memory);
  typed_message->~GetIsaacGrasp_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIsaacGrasp_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIsaacGrasp_Feedback_message_members = {
  "grab2_msgs::action",  // message namespace
  "GetIsaacGrasp_Feedback",  // message name
  1,  // number of fields
  sizeof(grab2_msgs::action::GetIsaacGrasp_Feedback),
  GetIsaacGrasp_Feedback_message_member_array,  // message members
  GetIsaacGrasp_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIsaacGrasp_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIsaacGrasp_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_Feedback>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_Feedback)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIsaacGrasp_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::GetIsaacGrasp_SendGoal_Request(_init);
}

void GetIsaacGrasp_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request *>(message_memory);
  typed_message->~GetIsaacGrasp_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIsaacGrasp_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIsaacGrasp_SendGoal_Request_message_members = {
  "grab2_msgs::action",  // message namespace
  "GetIsaacGrasp_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(grab2_msgs::action::GetIsaacGrasp_SendGoal_Request),
  GetIsaacGrasp_SendGoal_Request_message_member_array,  // message members
  GetIsaacGrasp_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIsaacGrasp_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIsaacGrasp_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_SendGoal_Request)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIsaacGrasp_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::GetIsaacGrasp_SendGoal_Response(_init);
}

void GetIsaacGrasp_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response *>(message_memory);
  typed_message->~GetIsaacGrasp_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIsaacGrasp_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIsaacGrasp_SendGoal_Response_message_members = {
  "grab2_msgs::action",  // message namespace
  "GetIsaacGrasp_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(grab2_msgs::action::GetIsaacGrasp_SendGoal_Response),
  GetIsaacGrasp_SendGoal_Response_message_member_array,  // message members
  GetIsaacGrasp_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIsaacGrasp_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIsaacGrasp_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_SendGoal_Response)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetIsaacGrasp_SendGoal_service_members = {
  "grab2_msgs::action",  // service namespace
  "GetIsaacGrasp_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<grab2_msgs::action::GetIsaacGrasp_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetIsaacGrasp_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<grab2_msgs::action::GetIsaacGrasp_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grab2_msgs::action::GetIsaacGrasp_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grab2_msgs::action::GetIsaacGrasp_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<grab2_msgs::action::GetIsaacGrasp_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIsaacGrasp_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::GetIsaacGrasp_GetResult_Request(_init);
}

void GetIsaacGrasp_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::GetIsaacGrasp_GetResult_Request *>(message_memory);
  typed_message->~GetIsaacGrasp_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIsaacGrasp_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIsaacGrasp_GetResult_Request_message_members = {
  "grab2_msgs::action",  // message namespace
  "GetIsaacGrasp_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(grab2_msgs::action::GetIsaacGrasp_GetResult_Request),
  GetIsaacGrasp_GetResult_Request_message_member_array,  // message members
  GetIsaacGrasp_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIsaacGrasp_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIsaacGrasp_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_GetResult_Request>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_GetResult_Request)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIsaacGrasp_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::GetIsaacGrasp_GetResult_Response(_init);
}

void GetIsaacGrasp_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::GetIsaacGrasp_GetResult_Response *>(message_memory);
  typed_message->~GetIsaacGrasp_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIsaacGrasp_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIsaacGrasp_GetResult_Response_message_members = {
  "grab2_msgs::action",  // message namespace
  "GetIsaacGrasp_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(grab2_msgs::action::GetIsaacGrasp_GetResult_Response),
  GetIsaacGrasp_GetResult_Response_message_member_array,  // message members
  GetIsaacGrasp_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIsaacGrasp_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIsaacGrasp_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_GetResult_Response>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_GetResult_Response)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetIsaacGrasp_GetResult_service_members = {
  "grab2_msgs::action",  // service namespace
  "GetIsaacGrasp_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<grab2_msgs::action::GetIsaacGrasp_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetIsaacGrasp_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<grab2_msgs::action::GetIsaacGrasp_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grab2_msgs::action::GetIsaacGrasp_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grab2_msgs::action::GetIsaacGrasp_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<grab2_msgs::action::GetIsaacGrasp_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grab2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIsaacGrasp_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::GetIsaacGrasp_FeedbackMessage(_init);
}

void GetIsaacGrasp_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage *>(message_memory);
  typed_message->~GetIsaacGrasp_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIsaacGrasp_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::GetIsaacGrasp_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIsaacGrasp_FeedbackMessage_message_members = {
  "grab2_msgs::action",  // message namespace
  "GetIsaacGrasp_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(grab2_msgs::action::GetIsaacGrasp_FeedbackMessage),
  GetIsaacGrasp_FeedbackMessage_message_member_array,  // message members
  GetIsaacGrasp_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIsaacGrasp_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIsaacGrasp_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIsaacGrasp_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grab2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, GetIsaacGrasp_FeedbackMessage)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::GetIsaacGrasp_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
