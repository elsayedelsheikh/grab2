// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from btcpp_ros2_interfaces:action/Sleep.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Sleep_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) btcpp_ros2_interfaces::action::Sleep_Goal(_init);
}

void Sleep_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<btcpp_ros2_interfaces::action::Sleep_Goal *>(message_memory);
  typed_message->~Sleep_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sleep_Goal_message_member_array[1] = {
  {
    "msec_timeout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_Goal, msec_timeout),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sleep_Goal_message_members = {
  "btcpp_ros2_interfaces::action",  // message namespace
  "Sleep_Goal",  // message name
  1,  // number of fields
  sizeof(btcpp_ros2_interfaces::action::Sleep_Goal),
  Sleep_Goal_message_member_array,  // message members
  Sleep_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Sleep_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sleep_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_Goal>()
{
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_Goal)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_Goal_message_type_support_handle;
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
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

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Sleep_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) btcpp_ros2_interfaces::action::Sleep_Result(_init);
}

void Sleep_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<btcpp_ros2_interfaces::action::Sleep_Result *>(message_memory);
  typed_message->~Sleep_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sleep_Result_message_member_array[1] = {
  {
    "done",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_Result, done),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sleep_Result_message_members = {
  "btcpp_ros2_interfaces::action",  // message namespace
  "Sleep_Result",  // message name
  1,  // number of fields
  sizeof(btcpp_ros2_interfaces::action::Sleep_Result),
  Sleep_Result_message_member_array,  // message members
  Sleep_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Sleep_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sleep_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_Result>()
{
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_Result)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_Result_message_type_support_handle;
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
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

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Sleep_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) btcpp_ros2_interfaces::action::Sleep_Feedback(_init);
}

void Sleep_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<btcpp_ros2_interfaces::action::Sleep_Feedback *>(message_memory);
  typed_message->~Sleep_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sleep_Feedback_message_member_array[1] = {
  {
    "cycle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_Feedback, cycle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sleep_Feedback_message_members = {
  "btcpp_ros2_interfaces::action",  // message namespace
  "Sleep_Feedback",  // message name
  1,  // number of fields
  sizeof(btcpp_ros2_interfaces::action::Sleep_Feedback),
  Sleep_Feedback_message_member_array,  // message members
  Sleep_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Sleep_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sleep_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_Feedback>()
{
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_Feedback)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_Feedback_message_type_support_handle;
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
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

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Sleep_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) btcpp_ros2_interfaces::action::Sleep_SendGoal_Request(_init);
}

void Sleep_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request *>(message_memory);
  typed_message->~Sleep_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sleep_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_SendGoal_Request, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sleep_SendGoal_Request_message_members = {
  "btcpp_ros2_interfaces::action",  // message namespace
  "Sleep_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(btcpp_ros2_interfaces::action::Sleep_SendGoal_Request),
  Sleep_SendGoal_Request_message_member_array,  // message members
  Sleep_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Sleep_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sleep_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request>()
{
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_SendGoal_Request)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_SendGoal_Request_message_type_support_handle;
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
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

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Sleep_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) btcpp_ros2_interfaces::action::Sleep_SendGoal_Response(_init);
}

void Sleep_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response *>(message_memory);
  typed_message->~Sleep_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sleep_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(btcpp_ros2_interfaces::action::Sleep_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sleep_SendGoal_Response_message_members = {
  "btcpp_ros2_interfaces::action",  // message namespace
  "Sleep_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(btcpp_ros2_interfaces::action::Sleep_SendGoal_Response),
  Sleep_SendGoal_Response_message_member_array,  // message members
  Sleep_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Sleep_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sleep_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response>()
{
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_SendGoal_Response)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_SendGoal_Response_message_type_support_handle;
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Sleep_SendGoal_service_members = {
  "btcpp_ros2_interfaces::action",  // service namespace
  "Sleep_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<btcpp_ros2_interfaces::action::Sleep_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Sleep_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<btcpp_ros2_interfaces::action::Sleep_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_SendGoal_service_type_support_handle;
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
        ::btcpp_ros2_interfaces::action::Sleep_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::btcpp_ros2_interfaces::action::Sleep_SendGoal_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<btcpp_ros2_interfaces::action::Sleep_SendGoal>();
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
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

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Sleep_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) btcpp_ros2_interfaces::action::Sleep_GetResult_Request(_init);
}

void Sleep_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<btcpp_ros2_interfaces::action::Sleep_GetResult_Request *>(message_memory);
  typed_message->~Sleep_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sleep_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sleep_GetResult_Request_message_members = {
  "btcpp_ros2_interfaces::action",  // message namespace
  "Sleep_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(btcpp_ros2_interfaces::action::Sleep_GetResult_Request),
  Sleep_GetResult_Request_message_member_array,  // message members
  Sleep_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Sleep_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sleep_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_GetResult_Request>()
{
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_GetResult_Request)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_GetResult_Request_message_type_support_handle;
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
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

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Sleep_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) btcpp_ros2_interfaces::action::Sleep_GetResult_Response(_init);
}

void Sleep_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<btcpp_ros2_interfaces::action::Sleep_GetResult_Response *>(message_memory);
  typed_message->~Sleep_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sleep_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_GetResult_Response, status),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sleep_GetResult_Response_message_members = {
  "btcpp_ros2_interfaces::action",  // message namespace
  "Sleep_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(btcpp_ros2_interfaces::action::Sleep_GetResult_Response),
  Sleep_GetResult_Response_message_member_array,  // message members
  Sleep_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Sleep_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sleep_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_GetResult_Response>()
{
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_GetResult_Response)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_GetResult_Response_message_type_support_handle;
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Sleep_GetResult_service_members = {
  "btcpp_ros2_interfaces::action",  // service namespace
  "Sleep_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<btcpp_ros2_interfaces::action::Sleep_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Sleep_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<btcpp_ros2_interfaces::action::Sleep_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_GetResult_service_type_support_handle;
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
        ::btcpp_ros2_interfaces::action::Sleep_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::btcpp_ros2_interfaces::action::Sleep_GetResult_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<btcpp_ros2_interfaces::action::Sleep_GetResult>();
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
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

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Sleep_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) btcpp_ros2_interfaces::action::Sleep_FeedbackMessage(_init);
}

void Sleep_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage *>(message_memory);
  typed_message->~Sleep_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sleep_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_FeedbackMessage, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(btcpp_ros2_interfaces::action::Sleep_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sleep_FeedbackMessage_message_members = {
  "btcpp_ros2_interfaces::action",  // message namespace
  "Sleep_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(btcpp_ros2_interfaces::action::Sleep_FeedbackMessage),
  Sleep_FeedbackMessage_message_member_array,  // message members
  Sleep_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Sleep_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sleep_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sleep_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace btcpp_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage>()
{
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, action, Sleep_FeedbackMessage)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Sleep_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
