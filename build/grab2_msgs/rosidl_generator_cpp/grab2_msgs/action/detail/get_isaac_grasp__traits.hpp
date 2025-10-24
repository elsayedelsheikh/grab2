// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grab2_msgs:action/GetIsaacGrasp.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__TRAITS_HPP_
#define GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'object_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetIsaacGrasp_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_pose
  {
    out << "object_pose: ";
    to_flow_style_yaml(msg.object_pose, out);
    out << ", ";
  }

  // member: isaac_grasp
  {
    out << "isaac_grasp: ";
    rosidl_generator_traits::value_to_yaml(msg.isaac_grasp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIsaacGrasp_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_pose:\n";
    to_block_style_yaml(msg.object_pose, out, indentation + 2);
  }

  // member: isaac_grasp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isaac_grasp: ";
    rosidl_generator_traits::value_to_yaml(msg.isaac_grasp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIsaacGrasp_Goal & msg, bool use_flow_style = false)
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
  const grab2_msgs::action::GetIsaacGrasp_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::GetIsaacGrasp_Goal & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_Goal>()
{
  return "grab2_msgs::action::GetIsaacGrasp_Goal";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_Goal>()
{
  return "grab2_msgs/action/GetIsaacGrasp_Goal";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grab2_msgs::action::GetIsaacGrasp_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'grasps'
#include "moveit_msgs/msg/detail/grasp__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetIsaacGrasp_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: grasps
  {
    if (msg.grasps.size() == 0) {
      out << "grasps: []";
    } else {
      out << "grasps: [";
      size_t pending_items = msg.grasps.size();
      for (auto item : msg.grasps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIsaacGrasp_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grasps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grasps.size() == 0) {
      out << "grasps: []\n";
    } else {
      out << "grasps:\n";
      for (auto item : msg.grasps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIsaacGrasp_Result & msg, bool use_flow_style = false)
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
  const grab2_msgs::action::GetIsaacGrasp_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::GetIsaacGrasp_Result & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_Result>()
{
  return "grab2_msgs::action::GetIsaacGrasp_Result";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_Result>()
{
  return "grab2_msgs/action/GetIsaacGrasp_Result";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grab2_msgs::action::GetIsaacGrasp_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetIsaacGrasp_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIsaacGrasp_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIsaacGrasp_Feedback & msg, bool use_flow_style = false)
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
  const grab2_msgs::action::GetIsaacGrasp_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::GetIsaacGrasp_Feedback & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_Feedback>()
{
  return "grab2_msgs::action::GetIsaacGrasp_Feedback";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_Feedback>()
{
  return "grab2_msgs/action/GetIsaacGrasp_Feedback";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<grab2_msgs::action::GetIsaacGrasp_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "grab2_msgs/action/detail/get_isaac_grasp__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetIsaacGrasp_SendGoal_Request & msg,
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
  const GetIsaacGrasp_SendGoal_Request & msg,
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

inline std::string to_yaml(const GetIsaacGrasp_SendGoal_Request & msg, bool use_flow_style = false)
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
  const grab2_msgs::action::GetIsaacGrasp_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::GetIsaacGrasp_SendGoal_Request & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>()
{
  return "grab2_msgs::action::GetIsaacGrasp_SendGoal_Request";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>()
{
  return "grab2_msgs/action/GetIsaacGrasp_SendGoal_Request";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<grab2_msgs::action::GetIsaacGrasp_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<grab2_msgs::action::GetIsaacGrasp_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>
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
  const GetIsaacGrasp_SendGoal_Response & msg,
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
  const GetIsaacGrasp_SendGoal_Response & msg,
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

inline std::string to_yaml(const GetIsaacGrasp_SendGoal_Response & msg, bool use_flow_style = false)
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
  const grab2_msgs::action::GetIsaacGrasp_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::GetIsaacGrasp_SendGoal_Response & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>()
{
  return "grab2_msgs::action::GetIsaacGrasp_SendGoal_Response";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>()
{
  return "grab2_msgs/action/GetIsaacGrasp_SendGoal_Response";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_SendGoal>()
{
  return "grab2_msgs::action::GetIsaacGrasp_SendGoal";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_SendGoal>()
{
  return "grab2_msgs/action/GetIsaacGrasp_SendGoal";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>::value &&
    has_fixed_size<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>::value &&
    has_bounded_size<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<grab2_msgs::action::GetIsaacGrasp_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>
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
  const GetIsaacGrasp_GetResult_Request & msg,
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
  const GetIsaacGrasp_GetResult_Request & msg,
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

inline std::string to_yaml(const GetIsaacGrasp_GetResult_Request & msg, bool use_flow_style = false)
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
  const grab2_msgs::action::GetIsaacGrasp_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::GetIsaacGrasp_GetResult_Request & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_GetResult_Request>()
{
  return "grab2_msgs::action::GetIsaacGrasp_GetResult_Request";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_GetResult_Request>()
{
  return "grab2_msgs/action/GetIsaacGrasp_GetResult_Request";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<grab2_msgs::action::GetIsaacGrasp_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetIsaacGrasp_GetResult_Response & msg,
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
  const GetIsaacGrasp_GetResult_Response & msg,
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

inline std::string to_yaml(const GetIsaacGrasp_GetResult_Response & msg, bool use_flow_style = false)
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
  const grab2_msgs::action::GetIsaacGrasp_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::GetIsaacGrasp_GetResult_Response & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_GetResult_Response>()
{
  return "grab2_msgs::action::GetIsaacGrasp_GetResult_Response";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_GetResult_Response>()
{
  return "grab2_msgs/action/GetIsaacGrasp_GetResult_Response";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<grab2_msgs::action::GetIsaacGrasp_Result>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<grab2_msgs::action::GetIsaacGrasp_Result>::value> {};

template<>
struct is_message<grab2_msgs::action::GetIsaacGrasp_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_GetResult>()
{
  return "grab2_msgs::action::GetIsaacGrasp_GetResult";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_GetResult>()
{
  return "grab2_msgs/action/GetIsaacGrasp_GetResult";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<grab2_msgs::action::GetIsaacGrasp_GetResult_Request>::value &&
    has_fixed_size<grab2_msgs::action::GetIsaacGrasp_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<grab2_msgs::action::GetIsaacGrasp_GetResult_Request>::value &&
    has_bounded_size<grab2_msgs::action::GetIsaacGrasp_GetResult_Response>::value
  >
{
};

template<>
struct is_service<grab2_msgs::action::GetIsaacGrasp_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<grab2_msgs::action::GetIsaacGrasp_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<grab2_msgs::action::GetIsaacGrasp_GetResult_Response>
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
// #include "grab2_msgs/action/detail/get_isaac_grasp__traits.hpp"

namespace grab2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetIsaacGrasp_FeedbackMessage & msg,
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
  const GetIsaacGrasp_FeedbackMessage & msg,
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

inline std::string to_yaml(const GetIsaacGrasp_FeedbackMessage & msg, bool use_flow_style = false)
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
  const grab2_msgs::action::GetIsaacGrasp_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const grab2_msgs::action::GetIsaacGrasp_FeedbackMessage & msg)
{
  return grab2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage>()
{
  return "grab2_msgs::action::GetIsaacGrasp_FeedbackMessage";
}

template<>
inline const char * name<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage>()
{
  return "grab2_msgs/action/GetIsaacGrasp_FeedbackMessage";
}

template<>
struct has_fixed_size<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<grab2_msgs::action::GetIsaacGrasp_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<grab2_msgs::action::GetIsaacGrasp_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<grab2_msgs::action::GetIsaacGrasp>
  : std::true_type
{
};

template<>
struct is_action_goal<grab2_msgs::action::GetIsaacGrasp_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<grab2_msgs::action::GetIsaacGrasp_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<grab2_msgs::action::GetIsaacGrasp_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__TRAITS_HPP_
