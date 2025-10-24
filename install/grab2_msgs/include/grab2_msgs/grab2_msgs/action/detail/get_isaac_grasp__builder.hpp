// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grab2_msgs:action/GetIsaacGrasp.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__BUILDER_HPP_
#define GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_GetIsaacGrasp_Goal_isaac_grasp
{
public:
  explicit Init_GetIsaacGrasp_Goal_isaac_grasp(::grab2_msgs::action::GetIsaacGrasp_Goal & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::GetIsaacGrasp_Goal isaac_grasp(::grab2_msgs::action::GetIsaacGrasp_Goal::_isaac_grasp_type arg)
  {
    msg_.isaac_grasp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_Goal msg_;
};

class Init_GetIsaacGrasp_Goal_object_pose
{
public:
  Init_GetIsaacGrasp_Goal_object_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIsaacGrasp_Goal_isaac_grasp object_pose(::grab2_msgs::action::GetIsaacGrasp_Goal::_object_pose_type arg)
  {
    msg_.object_pose = std::move(arg);
    return Init_GetIsaacGrasp_Goal_isaac_grasp(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::GetIsaacGrasp_Goal>()
{
  return grab2_msgs::action::builder::Init_GetIsaacGrasp_Goal_object_pose();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_GetIsaacGrasp_Result_grasps
{
public:
  Init_GetIsaacGrasp_Result_grasps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::grab2_msgs::action::GetIsaacGrasp_Result grasps(::grab2_msgs::action::GetIsaacGrasp_Result::_grasps_type arg)
  {
    msg_.grasps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::GetIsaacGrasp_Result>()
{
  return grab2_msgs::action::builder::Init_GetIsaacGrasp_Result_grasps();
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
auto build<::grab2_msgs::action::GetIsaacGrasp_Feedback>()
{
  return ::grab2_msgs::action::GetIsaacGrasp_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_GetIsaacGrasp_SendGoal_Request_goal
{
public:
  explicit Init_GetIsaacGrasp_SendGoal_Request_goal(::grab2_msgs::action::GetIsaacGrasp_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::GetIsaacGrasp_SendGoal_Request goal(::grab2_msgs::action::GetIsaacGrasp_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_SendGoal_Request msg_;
};

class Init_GetIsaacGrasp_SendGoal_Request_goal_id
{
public:
  Init_GetIsaacGrasp_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIsaacGrasp_SendGoal_Request_goal goal_id(::grab2_msgs::action::GetIsaacGrasp_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetIsaacGrasp_SendGoal_Request_goal(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::GetIsaacGrasp_SendGoal_Request>()
{
  return grab2_msgs::action::builder::Init_GetIsaacGrasp_SendGoal_Request_goal_id();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_GetIsaacGrasp_SendGoal_Response_stamp
{
public:
  explicit Init_GetIsaacGrasp_SendGoal_Response_stamp(::grab2_msgs::action::GetIsaacGrasp_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::GetIsaacGrasp_SendGoal_Response stamp(::grab2_msgs::action::GetIsaacGrasp_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_SendGoal_Response msg_;
};

class Init_GetIsaacGrasp_SendGoal_Response_accepted
{
public:
  Init_GetIsaacGrasp_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIsaacGrasp_SendGoal_Response_stamp accepted(::grab2_msgs::action::GetIsaacGrasp_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GetIsaacGrasp_SendGoal_Response_stamp(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::GetIsaacGrasp_SendGoal_Response>()
{
  return grab2_msgs::action::builder::Init_GetIsaacGrasp_SendGoal_Response_accepted();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_GetIsaacGrasp_GetResult_Request_goal_id
{
public:
  Init_GetIsaacGrasp_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::grab2_msgs::action::GetIsaacGrasp_GetResult_Request goal_id(::grab2_msgs::action::GetIsaacGrasp_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::GetIsaacGrasp_GetResult_Request>()
{
  return grab2_msgs::action::builder::Init_GetIsaacGrasp_GetResult_Request_goal_id();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_GetIsaacGrasp_GetResult_Response_result
{
public:
  explicit Init_GetIsaacGrasp_GetResult_Response_result(::grab2_msgs::action::GetIsaacGrasp_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::GetIsaacGrasp_GetResult_Response result(::grab2_msgs::action::GetIsaacGrasp_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_GetResult_Response msg_;
};

class Init_GetIsaacGrasp_GetResult_Response_status
{
public:
  Init_GetIsaacGrasp_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIsaacGrasp_GetResult_Response_result status(::grab2_msgs::action::GetIsaacGrasp_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetIsaacGrasp_GetResult_Response_result(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::GetIsaacGrasp_GetResult_Response>()
{
  return grab2_msgs::action::builder::Init_GetIsaacGrasp_GetResult_Response_status();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_GetIsaacGrasp_FeedbackMessage_feedback
{
public:
  explicit Init_GetIsaacGrasp_FeedbackMessage_feedback(::grab2_msgs::action::GetIsaacGrasp_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::GetIsaacGrasp_FeedbackMessage feedback(::grab2_msgs::action::GetIsaacGrasp_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_FeedbackMessage msg_;
};

class Init_GetIsaacGrasp_FeedbackMessage_goal_id
{
public:
  Init_GetIsaacGrasp_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIsaacGrasp_FeedbackMessage_feedback goal_id(::grab2_msgs::action::GetIsaacGrasp_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetIsaacGrasp_FeedbackMessage_feedback(msg_);
  }

private:
  ::grab2_msgs::action::GetIsaacGrasp_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::GetIsaacGrasp_FeedbackMessage>()
{
  return grab2_msgs::action::builder::Init_GetIsaacGrasp_FeedbackMessage_goal_id();
}

}  // namespace grab2_msgs

#endif  // GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__BUILDER_HPP_
