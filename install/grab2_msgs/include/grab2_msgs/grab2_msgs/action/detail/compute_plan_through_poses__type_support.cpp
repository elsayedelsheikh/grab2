// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from grab2_msgs:action/ComputePlanThroughPoses.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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

void ComputePlanThroughPoses_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::ComputePlanThroughPoses_Goal(_init);
}

void ComputePlanThroughPoses_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::ComputePlanThroughPoses_Goal *>(message_memory);
  typed_message->~ComputePlanThroughPoses_Goal();
}

size_t size_function__ComputePlanThroughPoses_Goal__goals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ComputePlanThroughPoses_Goal__goals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__ComputePlanThroughPoses_Goal__goals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void fetch_function__ComputePlanThroughPoses_Goal__goals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(
    get_const_function__ComputePlanThroughPoses_Goal__goals(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(untyped_value);
  value = item;
}

void assign_function__ComputePlanThroughPoses_Goal__goals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(
    get_function__ComputePlanThroughPoses_Goal__goals(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(untyped_value);
  item = value;
}

void resize_function__ComputePlanThroughPoses_Goal__goals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePlanThroughPoses_Goal_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_Goal, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_Goal, goals),  // bytes offset in struct
    nullptr,  // default value
    size_function__ComputePlanThroughPoses_Goal__goals,  // size() function pointer
    get_const_function__ComputePlanThroughPoses_Goal__goals,  // get_const(index) function pointer
    get_function__ComputePlanThroughPoses_Goal__goals,  // get(index) function pointer
    fetch_function__ComputePlanThroughPoses_Goal__goals,  // fetch(index, &value) function pointer
    assign_function__ComputePlanThroughPoses_Goal__goals,  // assign(index, value) function pointer
    resize_function__ComputePlanThroughPoses_Goal__goals  // resize(index) function pointer
  },
  {
    "interpolation_dt",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_Goal, interpolation_dt),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePlanThroughPoses_Goal_message_members = {
  "grab2_msgs::action",  // message namespace
  "ComputePlanThroughPoses_Goal",  // message name
  3,  // number of fields
  sizeof(grab2_msgs::action::ComputePlanThroughPoses_Goal),
  ComputePlanThroughPoses_Goal_message_member_array,  // message members
  ComputePlanThroughPoses_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePlanThroughPoses_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePlanThroughPoses_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_Goal_message_members,
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
get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_Goal>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_Goal)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_Goal_message_type_support_handle;
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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

void ComputePlanThroughPoses_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::ComputePlanThroughPoses_Result(_init);
}

void ComputePlanThroughPoses_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::ComputePlanThroughPoses_Result *>(message_memory);
  typed_message->~ComputePlanThroughPoses_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePlanThroughPoses_Result_message_member_array[3] = {
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_Result, trajectory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_Result, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_string",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_Result, error_string),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePlanThroughPoses_Result_message_members = {
  "grab2_msgs::action",  // message namespace
  "ComputePlanThroughPoses_Result",  // message name
  3,  // number of fields
  sizeof(grab2_msgs::action::ComputePlanThroughPoses_Result),
  ComputePlanThroughPoses_Result_message_member_array,  // message members
  ComputePlanThroughPoses_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePlanThroughPoses_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePlanThroughPoses_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_Result_message_members,
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
get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_Result>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_Result)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_Result_message_type_support_handle;
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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

void ComputePlanThroughPoses_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::ComputePlanThroughPoses_Feedback(_init);
}

void ComputePlanThroughPoses_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::ComputePlanThroughPoses_Feedback *>(message_memory);
  typed_message->~ComputePlanThroughPoses_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePlanThroughPoses_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePlanThroughPoses_Feedback_message_members = {
  "grab2_msgs::action",  // message namespace
  "ComputePlanThroughPoses_Feedback",  // message name
  1,  // number of fields
  sizeof(grab2_msgs::action::ComputePlanThroughPoses_Feedback),
  ComputePlanThroughPoses_Feedback_message_member_array,  // message members
  ComputePlanThroughPoses_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePlanThroughPoses_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePlanThroughPoses_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_Feedback_message_members,
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
get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_Feedback>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_Feedback)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_Feedback_message_type_support_handle;
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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

void ComputePlanThroughPoses_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request(_init);
}

void ComputePlanThroughPoses_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request *>(message_memory);
  typed_message->~ComputePlanThroughPoses_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePlanThroughPoses_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePlanThroughPoses_SendGoal_Request_message_members = {
  "grab2_msgs::action",  // message namespace
  "ComputePlanThroughPoses_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request),
  ComputePlanThroughPoses_SendGoal_Request_message_member_array,  // message members
  ComputePlanThroughPoses_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePlanThroughPoses_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePlanThroughPoses_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_SendGoal_Request_message_members,
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
get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_SendGoal_Request)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_SendGoal_Request_message_type_support_handle;
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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

void ComputePlanThroughPoses_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response(_init);
}

void ComputePlanThroughPoses_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response *>(message_memory);
  typed_message->~ComputePlanThroughPoses_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePlanThroughPoses_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePlanThroughPoses_SendGoal_Response_message_members = {
  "grab2_msgs::action",  // message namespace
  "ComputePlanThroughPoses_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response),
  ComputePlanThroughPoses_SendGoal_Response_message_member_array,  // message members
  ComputePlanThroughPoses_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePlanThroughPoses_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePlanThroughPoses_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_SendGoal_Response_message_members,
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
get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_SendGoal_Response)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_SendGoal_Response_message_type_support_handle;
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ComputePlanThroughPoses_SendGoal_service_members = {
  "grab2_msgs::action",  // service namespace
  "ComputePlanThroughPoses_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ComputePlanThroughPoses_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_SendGoal_service_members,
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
get_service_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_SendGoal_service_type_support_handle;
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
        ::grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_SendGoal>();
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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

void ComputePlanThroughPoses_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request(_init);
}

void ComputePlanThroughPoses_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request *>(message_memory);
  typed_message->~ComputePlanThroughPoses_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePlanThroughPoses_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePlanThroughPoses_GetResult_Request_message_members = {
  "grab2_msgs::action",  // message namespace
  "ComputePlanThroughPoses_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request),
  ComputePlanThroughPoses_GetResult_Request_message_member_array,  // message members
  ComputePlanThroughPoses_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePlanThroughPoses_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePlanThroughPoses_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_GetResult_Request_message_members,
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
get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_GetResult_Request)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_GetResult_Request_message_type_support_handle;
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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

void ComputePlanThroughPoses_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response(_init);
}

void ComputePlanThroughPoses_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response *>(message_memory);
  typed_message->~ComputePlanThroughPoses_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePlanThroughPoses_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response, status),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePlanThroughPoses_GetResult_Response_message_members = {
  "grab2_msgs::action",  // message namespace
  "ComputePlanThroughPoses_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response),
  ComputePlanThroughPoses_GetResult_Response_message_member_array,  // message members
  ComputePlanThroughPoses_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePlanThroughPoses_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePlanThroughPoses_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_GetResult_Response_message_members,
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
get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_GetResult_Response)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_GetResult_Response_message_type_support_handle;
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ComputePlanThroughPoses_GetResult_service_members = {
  "grab2_msgs::action",  // service namespace
  "ComputePlanThroughPoses_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ComputePlanThroughPoses_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_GetResult_service_members,
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
get_service_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_GetResult_service_type_support_handle;
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
        ::grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_GetResult>();
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
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

void ComputePlanThroughPoses_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage(_init);
}

void ComputePlanThroughPoses_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage *>(message_memory);
  typed_message->~ComputePlanThroughPoses_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePlanThroughPoses_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePlanThroughPoses_FeedbackMessage_message_members = {
  "grab2_msgs::action",  // message namespace
  "ComputePlanThroughPoses_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage),
  ComputePlanThroughPoses_FeedbackMessage_message_member_array,  // message members
  ComputePlanThroughPoses_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePlanThroughPoses_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePlanThroughPoses_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePlanThroughPoses_FeedbackMessage_message_members,
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
get_message_type_support_handle<grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage>()
{
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grab2_msgs, action, ComputePlanThroughPoses_FeedbackMessage)() {
  return &::grab2_msgs::action::rosidl_typesupport_introspection_cpp::ComputePlanThroughPoses_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
