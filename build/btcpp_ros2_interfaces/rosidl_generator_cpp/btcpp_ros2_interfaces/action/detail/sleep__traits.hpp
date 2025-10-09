// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from btcpp_ros2_interfaces:action/Sleep.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__ACTION__DETAIL__SLEEP__TRAITS_HPP_
#define BTCPP_ROS2_INTERFACES__ACTION__DETAIL__SLEEP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Sleep_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: msec_timeout
  {
    out << "msec_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.msec_timeout, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sleep_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msec_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msec_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.msec_timeout, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sleep_Goal & msg, bool use_flow_style = false)
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
  const btcpp_ros2_interfaces::action::Sleep_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::Sleep_Goal & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_Goal>()
{
  return "btcpp_ros2_interfaces::action::Sleep_Goal";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_Goal>()
{
  return "btcpp_ros2_interfaces/action/Sleep_Goal";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::Sleep_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Sleep_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: done
  {
    out << "done: ";
    rosidl_generator_traits::value_to_yaml(msg.done, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sleep_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "done: ";
    rosidl_generator_traits::value_to_yaml(msg.done, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sleep_Result & msg, bool use_flow_style = false)
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
  const btcpp_ros2_interfaces::action::Sleep_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::Sleep_Result & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_Result>()
{
  return "btcpp_ros2_interfaces::action::Sleep_Result";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_Result>()
{
  return "btcpp_ros2_interfaces/action/Sleep_Result";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::Sleep_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Sleep_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: cycle
  {
    out << "cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sleep_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sleep_Feedback & msg, bool use_flow_style = false)
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
  const btcpp_ros2_interfaces::action::Sleep_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::Sleep_Feedback & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_Feedback>()
{
  return "btcpp_ros2_interfaces::action::Sleep_Feedback";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_Feedback>()
{
  return "btcpp_ros2_interfaces/action/Sleep_Feedback";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::Sleep_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "btcpp_ros2_interfaces/action/detail/sleep__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Sleep_SendGoal_Request & msg,
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
  const Sleep_SendGoal_Request & msg,
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

inline std::string to_yaml(const Sleep_SendGoal_Request & msg, bool use_flow_style = false)
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
  const btcpp_ros2_interfaces::action::Sleep_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::Sleep_SendGoal_Request & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request>()
{
  return "btcpp_ros2_interfaces::action::Sleep_SendGoal_Request";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request>()
{
  return "btcpp_ros2_interfaces/action/Sleep_SendGoal_Request";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<btcpp_ros2_interfaces::action::Sleep_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<btcpp_ros2_interfaces::action::Sleep_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request>
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
  const Sleep_SendGoal_Response & msg,
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
  const Sleep_SendGoal_Response & msg,
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

inline std::string to_yaml(const Sleep_SendGoal_Response & msg, bool use_flow_style = false)
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
  const btcpp_ros2_interfaces::action::Sleep_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::Sleep_SendGoal_Response & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response>()
{
  return "btcpp_ros2_interfaces::action::Sleep_SendGoal_Response";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response>()
{
  return "btcpp_ros2_interfaces/action/Sleep_SendGoal_Response";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_SendGoal>()
{
  return "btcpp_ros2_interfaces::action::Sleep_SendGoal";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_SendGoal>()
{
  return "btcpp_ros2_interfaces/action/Sleep_SendGoal";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request>::value &&
    has_fixed_size<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request>::value &&
    has_bounded_size<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<btcpp_ros2_interfaces::action::Sleep_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response>
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
  const Sleep_GetResult_Request & msg,
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
  const Sleep_GetResult_Request & msg,
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

inline std::string to_yaml(const Sleep_GetResult_Request & msg, bool use_flow_style = false)
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
  const btcpp_ros2_interfaces::action::Sleep_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::Sleep_GetResult_Request & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_GetResult_Request>()
{
  return "btcpp_ros2_interfaces::action::Sleep_GetResult_Request";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_GetResult_Request>()
{
  return "btcpp_ros2_interfaces/action/Sleep_GetResult_Request";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::Sleep_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Sleep_GetResult_Response & msg,
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
  const Sleep_GetResult_Response & msg,
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

inline std::string to_yaml(const Sleep_GetResult_Response & msg, bool use_flow_style = false)
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
  const btcpp_ros2_interfaces::action::Sleep_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::Sleep_GetResult_Response & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_GetResult_Response>()
{
  return "btcpp_ros2_interfaces::action::Sleep_GetResult_Response";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_GetResult_Response>()
{
  return "btcpp_ros2_interfaces/action/Sleep_GetResult_Response";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<btcpp_ros2_interfaces::action::Sleep_Result>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<btcpp_ros2_interfaces::action::Sleep_Result>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::Sleep_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_GetResult>()
{
  return "btcpp_ros2_interfaces::action::Sleep_GetResult";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_GetResult>()
{
  return "btcpp_ros2_interfaces/action/Sleep_GetResult";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<btcpp_ros2_interfaces::action::Sleep_GetResult_Request>::value &&
    has_fixed_size<btcpp_ros2_interfaces::action::Sleep_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<btcpp_ros2_interfaces::action::Sleep_GetResult_Request>::value &&
    has_bounded_size<btcpp_ros2_interfaces::action::Sleep_GetResult_Response>::value
  >
{
};

template<>
struct is_service<btcpp_ros2_interfaces::action::Sleep_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<btcpp_ros2_interfaces::action::Sleep_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<btcpp_ros2_interfaces::action::Sleep_GetResult_Response>
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Sleep_FeedbackMessage & msg,
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
  const Sleep_FeedbackMessage & msg,
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

inline std::string to_yaml(const Sleep_FeedbackMessage & msg, bool use_flow_style = false)
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
  const btcpp_ros2_interfaces::action::Sleep_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::action::Sleep_FeedbackMessage & msg)
{
  return btcpp_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage>()
{
  return "btcpp_ros2_interfaces::action::Sleep_FeedbackMessage";
}

template<>
inline const char * name<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage>()
{
  return "btcpp_ros2_interfaces/action/Sleep_FeedbackMessage";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<btcpp_ros2_interfaces::action::Sleep_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<btcpp_ros2_interfaces::action::Sleep_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<btcpp_ros2_interfaces::action::Sleep>
  : std::true_type
{
};

template<>
struct is_action_goal<btcpp_ros2_interfaces::action::Sleep_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<btcpp_ros2_interfaces::action::Sleep_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<btcpp_ros2_interfaces::action::Sleep_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BTCPP_ROS2_INTERFACES__ACTION__DETAIL__SLEEP__TRAITS_HPP_
