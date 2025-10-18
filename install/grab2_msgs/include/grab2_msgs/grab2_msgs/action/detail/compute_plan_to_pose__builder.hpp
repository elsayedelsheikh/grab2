// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grab2_msgs:action/ComputePlanToPose.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_TO_POSE__BUILDER_HPP_
#define GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "grab2_msgs/action/detail/compute_plan_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePlanToPose_Goal_interpolation_dt
{
public:
  explicit Init_ComputePlanToPose_Goal_interpolation_dt(::grab2_msgs::action::ComputePlanToPose_Goal & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ComputePlanToPose_Goal interpolation_dt(::grab2_msgs::action::ComputePlanToPose_Goal::_interpolation_dt_type arg)
  {
    msg_.interpolation_dt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_Goal msg_;
};

class Init_ComputePlanToPose_Goal_goal
{
public:
  explicit Init_ComputePlanToPose_Goal_goal(::grab2_msgs::action::ComputePlanToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePlanToPose_Goal_interpolation_dt goal(::grab2_msgs::action::ComputePlanToPose_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_ComputePlanToPose_Goal_interpolation_dt(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_Goal msg_;
};

class Init_ComputePlanToPose_Goal_header
{
public:
  Init_ComputePlanToPose_Goal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePlanToPose_Goal_goal header(::grab2_msgs::action::ComputePlanToPose_Goal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ComputePlanToPose_Goal_goal(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ComputePlanToPose_Goal>()
{
  return grab2_msgs::action::builder::Init_ComputePlanToPose_Goal_header();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePlanToPose_Result_error_string
{
public:
  explicit Init_ComputePlanToPose_Result_error_string(::grab2_msgs::action::ComputePlanToPose_Result & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ComputePlanToPose_Result error_string(::grab2_msgs::action::ComputePlanToPose_Result::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_Result msg_;
};

class Init_ComputePlanToPose_Result_error_code
{
public:
  explicit Init_ComputePlanToPose_Result_error_code(::grab2_msgs::action::ComputePlanToPose_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePlanToPose_Result_error_string error_code(::grab2_msgs::action::ComputePlanToPose_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ComputePlanToPose_Result_error_string(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_Result msg_;
};

class Init_ComputePlanToPose_Result_trajectory
{
public:
  Init_ComputePlanToPose_Result_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePlanToPose_Result_error_code trajectory(::grab2_msgs::action::ComputePlanToPose_Result::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_ComputePlanToPose_Result_error_code(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ComputePlanToPose_Result>()
{
  return grab2_msgs::action::builder::Init_ComputePlanToPose_Result_trajectory();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ComputePlanToPose_Feedback>()
{
  return ::grab2_msgs::action::ComputePlanToPose_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePlanToPose_SendGoal_Request_goal
{
public:
  explicit Init_ComputePlanToPose_SendGoal_Request_goal(::grab2_msgs::action::ComputePlanToPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ComputePlanToPose_SendGoal_Request goal(::grab2_msgs::action::ComputePlanToPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_SendGoal_Request msg_;
};

class Init_ComputePlanToPose_SendGoal_Request_goal_id
{
public:
  Init_ComputePlanToPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePlanToPose_SendGoal_Request_goal goal_id(::grab2_msgs::action::ComputePlanToPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePlanToPose_SendGoal_Request_goal(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ComputePlanToPose_SendGoal_Request>()
{
  return grab2_msgs::action::builder::Init_ComputePlanToPose_SendGoal_Request_goal_id();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePlanToPose_SendGoal_Response_stamp
{
public:
  explicit Init_ComputePlanToPose_SendGoal_Response_stamp(::grab2_msgs::action::ComputePlanToPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ComputePlanToPose_SendGoal_Response stamp(::grab2_msgs::action::ComputePlanToPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_SendGoal_Response msg_;
};

class Init_ComputePlanToPose_SendGoal_Response_accepted
{
public:
  Init_ComputePlanToPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePlanToPose_SendGoal_Response_stamp accepted(::grab2_msgs::action::ComputePlanToPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ComputePlanToPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ComputePlanToPose_SendGoal_Response>()
{
  return grab2_msgs::action::builder::Init_ComputePlanToPose_SendGoal_Response_accepted();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePlanToPose_GetResult_Request_goal_id
{
public:
  Init_ComputePlanToPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::grab2_msgs::action::ComputePlanToPose_GetResult_Request goal_id(::grab2_msgs::action::ComputePlanToPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ComputePlanToPose_GetResult_Request>()
{
  return grab2_msgs::action::builder::Init_ComputePlanToPose_GetResult_Request_goal_id();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePlanToPose_GetResult_Response_result
{
public:
  explicit Init_ComputePlanToPose_GetResult_Response_result(::grab2_msgs::action::ComputePlanToPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ComputePlanToPose_GetResult_Response result(::grab2_msgs::action::ComputePlanToPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_GetResult_Response msg_;
};

class Init_ComputePlanToPose_GetResult_Response_status
{
public:
  Init_ComputePlanToPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePlanToPose_GetResult_Response_result status(::grab2_msgs::action::ComputePlanToPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComputePlanToPose_GetResult_Response_result(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ComputePlanToPose_GetResult_Response>()
{
  return grab2_msgs::action::builder::Init_ComputePlanToPose_GetResult_Response_status();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePlanToPose_FeedbackMessage_feedback
{
public:
  explicit Init_ComputePlanToPose_FeedbackMessage_feedback(::grab2_msgs::action::ComputePlanToPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ComputePlanToPose_FeedbackMessage feedback(::grab2_msgs::action::ComputePlanToPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_FeedbackMessage msg_;
};

class Init_ComputePlanToPose_FeedbackMessage_goal_id
{
public:
  Init_ComputePlanToPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePlanToPose_FeedbackMessage_feedback goal_id(::grab2_msgs::action::ComputePlanToPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePlanToPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::grab2_msgs::action::ComputePlanToPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ComputePlanToPose_FeedbackMessage>()
{
  return grab2_msgs::action::builder::Init_ComputePlanToPose_FeedbackMessage_goal_id();
}

}  // namespace grab2_msgs

#endif  // GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_TO_POSE__BUILDER_HPP_
