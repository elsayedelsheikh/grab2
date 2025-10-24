// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from btcpp_ros2_interfaces:action/ExecuteTree.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__TRAITS_HPP_
#define BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "btcpp_ros2_interfaces/action/detail/execute_tree__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTree_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_tree
  {
    out << "target_tree: ";
    rosidl_generator_traits::value_to_yaml(msg.target_tree, out);
    out << ", ";
  }

  // member: payload
  {
    out << "payload: ";
    rosidl_generator_traits::value_to_yaml(msg.payload, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTree_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_tree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_tree: ";
    rosidl_generator_traits::value_to_yaml(msg.target_tree, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload: ";
    rosidl_generator_traits::value_to_yaml(msg.payload, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTree_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::action::ExecuteTree_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::ExecuteTree_Goal & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_Goal>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_Goal";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_Goal>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_Goal";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::ExecuteTree_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'node_status'
#include "btcpp_ros2_interfaces/msg/detail/node_status__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTree_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_status
  {
    out << "node_status: ";
    to_flow_style_yaml(msg.node_status, out);
    out << ", ";
  }

  // member: return_message
  {
    out << "return_message: ";
    rosidl_generator_traits::value_to_yaml(msg.return_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTree_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_status:\n";
    to_block_style_yaml(msg.node_status, out, indentation + 2);
  }

  // member: return_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_message: ";
    rosidl_generator_traits::value_to_yaml(msg.return_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTree_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::action::ExecuteTree_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::ExecuteTree_Result & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_Result>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_Result";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_Result>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_Result";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::ExecuteTree_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTree_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTree_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTree_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::action::ExecuteTree_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::ExecuteTree_Feedback & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_Feedback>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_Feedback";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_Feedback>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_Feedback";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::ExecuteTree_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "btcpp_ros2_interfaces/action/detail/execute_tree__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTree_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTree_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTree_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_SendGoal_Request";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTree_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTree_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTree_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_SendGoal_Response";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_SendGoal";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_SendGoal";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request>::value &&
    has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request>::value &&
    has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTree_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTree_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTree_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_GetResult_Request";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "btcpp_ros2_interfaces/action/detail/execute_tree__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTree_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTree_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTree_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_GetResult_Response";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_Result>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_Result>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_GetResult>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_GetResult";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_GetResult>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_GetResult";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request>::value &&
    has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request>::value &&
    has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response>::value
  >
{
};

template<>
struct is_service<btcpp_ros2_interfaces::action::ExecuteTree_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "btcpp_ros2_interfaces/action/detail/execute_tree__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTree_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTree_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTree_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage>()
{
  return "btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage>()
{
  return "btcpp_ros2_interfaces/action/ExecuteTree_FeedbackMessage";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<btcpp_ros2_interfaces::action::ExecuteTree_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<btcpp_ros2_interfaces::action::ExecuteTree_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<btcpp_ros2_interfaces::action::ExecuteTree>
  : std::true_type
{
};

template<>
struct is_action_goal<btcpp_ros2_interfaces::action::ExecuteTree_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<btcpp_ros2_interfaces::action::ExecuteTree_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<btcpp_ros2_interfaces::action::ExecuteTree_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__TRAITS_HPP_
