// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grab2_msgs:action/ComputePlanThroughPoses.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_THROUGH_POSES__TRAITS_HPP_
#define GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_THROUGH_POSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "grab2_msgs/action/detail/compute_plan_through_poses__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'goals'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputePlanThroughPoses_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: goals
  {
    if (msg.goals.size() == 0) {
      out << "goals: []";
    } else {
      out << "goals: [";
      size_t pending_items = msg.goals.size();
      for (auto item : msg.goals) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: interpolation_dt
  {
    out << "interpolation_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.interpolation_dt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputePlanThroughPoses_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: goals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goals.size() == 0) {
      out << "goals: []\n";
    } else {
      out << "goals:\n";
      for (auto item : msg.goals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: interpolation_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interpolation_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.interpolation_dt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputePlanThroughPoses_Goal & msg, bool use_flow_style = false)
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

}  // namespace grab2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use grab2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab2_msgs::action::ComputePlanThroughPoses_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::ComputePlanThroughPoses_Goal & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_Goal>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_Goal";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_Goal>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_Goal";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grab2_msgs::action::ComputePlanThroughPoses_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputePlanThroughPoses_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectory
  {
    out << "trajectory: ";
    to_flow_style_yaml(msg.trajectory, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_string
  {
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputePlanThroughPoses_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory:\n";
    to_block_style_yaml(msg.trajectory, out, indentation + 2);
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: error_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputePlanThroughPoses_Result & msg, bool use_flow_style = false)
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

}  // namespace grab2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use grab2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab2_msgs::action::ComputePlanThroughPoses_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::ComputePlanThroughPoses_Result & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_Result>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_Result";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_Result>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_Result";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grab2_msgs::action::ComputePlanThroughPoses_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputePlanThroughPoses_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputePlanThroughPoses_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputePlanThroughPoses_Feedback & msg, bool use_flow_style = false)
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

}  // namespace grab2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use grab2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab2_msgs::action::ComputePlanThroughPoses_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::ComputePlanThroughPoses_Feedback & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_Feedback>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_Feedback";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_Feedback>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_Feedback";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<grab2_msgs::action::ComputePlanThroughPoses_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "grab2_msgs/action/detail/compute_plan_through_poses__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputePlanThroughPoses_SendGoal_Request & msg,
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
  const ComputePlanThroughPoses_SendGoal_Request & msg,
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

inline std::string to_yaml(const ComputePlanThroughPoses_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace grab2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use grab2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_SendGoal_Request";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputePlanThroughPoses_SendGoal_Response & msg,
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
  const ComputePlanThroughPoses_SendGoal_Response & msg,
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

inline std::string to_yaml(const ComputePlanThroughPoses_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace grab2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use grab2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_SendGoal_Response";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_SendGoal>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_SendGoal";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_SendGoal>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_SendGoal";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request>::value &&
    has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request>::value &&
    has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<grab2_msgs::action::ComputePlanThroughPoses_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<grab2_msgs::action::ComputePlanThroughPoses_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputePlanThroughPoses_GetResult_Request & msg,
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
  const ComputePlanThroughPoses_GetResult_Request & msg,
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

inline std::string to_yaml(const ComputePlanThroughPoses_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace grab2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use grab2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_GetResult_Request";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "grab2_msgs/action/detail/compute_plan_through_poses__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputePlanThroughPoses_GetResult_Response & msg,
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
  const ComputePlanThroughPoses_GetResult_Response & msg,
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

inline std::string to_yaml(const ComputePlanThroughPoses_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace grab2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use grab2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_GetResult_Response";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_Result>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_Result>::value> {};

template<>
struct is_message<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_GetResult>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_GetResult";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_GetResult>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_GetResult";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request>::value &&
    has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request>::value &&
    has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response>::value
  >
{
};

template<>
struct is_service<grab2_msgs::action::ComputePlanThroughPoses_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<grab2_msgs::action::ComputePlanThroughPoses_GetResult_Response>
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
// #include "grab2_msgs/action/detail/compute_plan_through_poses__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputePlanThroughPoses_FeedbackMessage & msg,
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
  const ComputePlanThroughPoses_FeedbackMessage & msg,
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

inline std::string to_yaml(const ComputePlanThroughPoses_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace grab2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use grab2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage>()
{
  return "grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage";
}

template<>
inline const char * name<grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage>()
{
  return "grab2_msgs/action/ComputePlanThroughPoses_FeedbackMessage";
}

template<>
struct has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<grab2_msgs::action::ComputePlanThroughPoses_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<grab2_msgs::action::ComputePlanThroughPoses_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<grab2_msgs::action::ComputePlanThroughPoses_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<grab2_msgs::action::ComputePlanThroughPoses>
  : std::true_type
{
};

template<>
struct is_action_goal<grab2_msgs::action::ComputePlanThroughPoses_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<grab2_msgs::action::ComputePlanThroughPoses_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<grab2_msgs::action::ComputePlanThroughPoses_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_THROUGH_POSES__TRAITS_HPP_
