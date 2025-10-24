// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from btcpp_ros2_interfaces:action/ExecuteTree.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__BUILDER_HPP_
#define BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "btcpp_ros2_interfaces/action/detail/execute_tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace btcpp_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_Goal_payload
{
public:
  explicit Init_ExecuteTree_Goal_payload(::btcpp_ros2_interfaces::action::ExecuteTree_Goal & msg)
  : msg_(msg)
  {}
  ::btcpp_ros2_interfaces::action::ExecuteTree_Goal payload(::btcpp_ros2_interfaces::action::ExecuteTree_Goal::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_Goal msg_;
};

class Init_ExecuteTree_Goal_target_tree
{
public:
  Init_ExecuteTree_Goal_target_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_Goal_payload target_tree(::btcpp_ros2_interfaces::action::ExecuteTree_Goal::_target_tree_type arg)
  {
    msg_.target_tree = std::move(arg);
    return Init_ExecuteTree_Goal_payload(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::action::ExecuteTree_Goal>()
{
  return btcpp_ros2_interfaces::action::builder::Init_ExecuteTree_Goal_target_tree();
}

}  // namespace btcpp_ros2_interfaces


namespace btcpp_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_Result_return_message
{
public:
  explicit Init_ExecuteTree_Result_return_message(::btcpp_ros2_interfaces::action::ExecuteTree_Result & msg)
  : msg_(msg)
  {}
  ::btcpp_ros2_interfaces::action::ExecuteTree_Result return_message(::btcpp_ros2_interfaces::action::ExecuteTree_Result::_return_message_type arg)
  {
    msg_.return_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_Result msg_;
};

class Init_ExecuteTree_Result_node_status
{
public:
  Init_ExecuteTree_Result_node_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_Result_return_message node_status(::btcpp_ros2_interfaces::action::ExecuteTree_Result::_node_status_type arg)
  {
    msg_.node_status = std::move(arg);
    return Init_ExecuteTree_Result_return_message(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::action::ExecuteTree_Result>()
{
  return btcpp_ros2_interfaces::action::builder::Init_ExecuteTree_Result_node_status();
}

}  // namespace btcpp_ros2_interfaces


namespace btcpp_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_Feedback_message
{
public:
  Init_ExecuteTree_Feedback_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::btcpp_ros2_interfaces::action::ExecuteTree_Feedback message(::btcpp_ros2_interfaces::action::ExecuteTree_Feedback::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::action::ExecuteTree_Feedback>()
{
  return btcpp_ros2_interfaces::action::builder::Init_ExecuteTree_Feedback_message();
}

}  // namespace btcpp_ros2_interfaces


namespace btcpp_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteTree_SendGoal_Request_goal(::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request goal(::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request msg_;
};

class Init_ExecuteTree_SendGoal_Request_goal_id
{
public:
  Init_ExecuteTree_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_SendGoal_Request_goal goal_id(::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTree_SendGoal_Request_goal(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request>()
{
  return btcpp_ros2_interfaces::action::builder::Init_ExecuteTree_SendGoal_Request_goal_id();
}

}  // namespace btcpp_ros2_interfaces


namespace btcpp_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteTree_SendGoal_Response_stamp(::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response stamp(::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response msg_;
};

class Init_ExecuteTree_SendGoal_Response_accepted
{
public:
  Init_ExecuteTree_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_SendGoal_Response_stamp accepted(::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteTree_SendGoal_Response_stamp(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response>()
{
  return btcpp_ros2_interfaces::action::builder::Init_ExecuteTree_SendGoal_Response_accepted();
}

}  // namespace btcpp_ros2_interfaces


namespace btcpp_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_GetResult_Request_goal_id
{
public:
  Init_ExecuteTree_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request goal_id(::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request>()
{
  return btcpp_ros2_interfaces::action::builder::Init_ExecuteTree_GetResult_Request_goal_id();
}

}  // namespace btcpp_ros2_interfaces


namespace btcpp_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_GetResult_Response_result
{
public:
  explicit Init_ExecuteTree_GetResult_Response_result(::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response result(::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response msg_;
};

class Init_ExecuteTree_GetResult_Response_status
{
public:
  Init_ExecuteTree_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_GetResult_Response_result status(::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteTree_GetResult_Response_result(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response>()
{
  return btcpp_ros2_interfaces::action::builder::Init_ExecuteTree_GetResult_Response_status();
}

}  // namespace btcpp_ros2_interfaces


namespace btcpp_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTree_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteTree_FeedbackMessage_feedback(::btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage feedback(::btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage msg_;
};

class Init_ExecuteTree_FeedbackMessage_goal_id
{
public:
  Init_ExecuteTree_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTree_FeedbackMessage_feedback goal_id(::btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTree_FeedbackMessage_feedback(msg_);
  }

private:
  ::btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage>()
{
  return btcpp_ros2_interfaces::action::builder::Init_ExecuteTree_FeedbackMessage_goal_id();
}

}  // namespace btcpp_ros2_interfaces

#endif  // BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__BUILDER_HPP_
