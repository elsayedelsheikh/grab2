// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from btcpp_ros2_interfaces:action/ExecuteTree.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__STRUCT_HPP_
#define BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Goal __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Goal __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTree_Goal_
{
  using Type = ExecuteTree_Goal_<ContainerAllocator>;

  explicit ExecuteTree_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_tree = "";
      this->payload = "";
    }
  }

  explicit ExecuteTree_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_tree(_alloc),
    payload(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_tree = "";
      this->payload = "";
    }
  }

  // field types and members
  using _target_tree_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_tree_type target_tree;
  using _payload_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__target_tree(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_tree = _arg;
    return *this;
  }
  Type & set__payload(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Goal
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Goal
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTree_Goal_ & other) const
  {
    if (this->target_tree != other.target_tree) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTree_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTree_Goal_

// alias to use template instance with default allocator
using ExecuteTree_Goal =
  btcpp_ros2_interfaces::action::ExecuteTree_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'node_status'
#include "btcpp_ros2_interfaces/msg/detail/node_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Result __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Result __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTree_Result_
{
  using Type = ExecuteTree_Result_<ContainerAllocator>;

  explicit ExecuteTree_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->return_message = "";
    }
  }

  explicit ExecuteTree_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_status(_alloc, _init),
    return_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->return_message = "";
    }
  }

  // field types and members
  using _node_status_type =
    btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator>;
  _node_status_type node_status;
  using _return_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _return_message_type return_message;

  // setters for named parameter idiom
  Type & set__node_status(
    const btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator> & _arg)
  {
    this->node_status = _arg;
    return *this;
  }
  Type & set__return_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->return_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Result
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Result
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTree_Result_ & other) const
  {
    if (this->node_status != other.node_status) {
      return false;
    }
    if (this->return_message != other.return_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTree_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTree_Result_

// alias to use template instance with default allocator
using ExecuteTree_Result =
  btcpp_ros2_interfaces::action::ExecuteTree_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Feedback __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTree_Feedback_
{
  using Type = ExecuteTree_Feedback_<ContainerAllocator>;

  explicit ExecuteTree_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit ExecuteTree_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Feedback
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_Feedback
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTree_Feedback_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTree_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTree_Feedback_

// alias to use template instance with default allocator
using ExecuteTree_Feedback =
  btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "btcpp_ros2_interfaces/action/detail/execute_tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTree_SendGoal_Request_
{
  using Type = ExecuteTree_SendGoal_Request_<ContainerAllocator>;

  explicit ExecuteTree_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ExecuteTree_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const btcpp_ros2_interfaces::action::ExecuteTree_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTree_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTree_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTree_SendGoal_Request_

// alias to use template instance with default allocator
using ExecuteTree_SendGoal_Request =
  btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTree_SendGoal_Response_
{
  using Type = ExecuteTree_SendGoal_Response_<ContainerAllocator>;

  explicit ExecuteTree_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ExecuteTree_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTree_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTree_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTree_SendGoal_Response_

// alias to use template instance with default allocator
using ExecuteTree_SendGoal_Response =
  btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace btcpp_ros2_interfaces
{

namespace action
{

struct ExecuteTree_SendGoal
{
  using Request = btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Request;
  using Response = btcpp_ros2_interfaces::action::ExecuteTree_SendGoal_Response;
};

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTree_GetResult_Request_
{
  using Type = ExecuteTree_GetResult_Request_<ContainerAllocator>;

  explicit ExecuteTree_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ExecuteTree_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTree_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTree_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTree_GetResult_Request_

// alias to use template instance with default allocator
using ExecuteTree_GetResult_Request =
  btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "btcpp_ros2_interfaces/action/detail/execute_tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTree_GetResult_Response_
{
  using Type = ExecuteTree_GetResult_Response_<ContainerAllocator>;

  explicit ExecuteTree_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ExecuteTree_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const btcpp_ros2_interfaces::action::ExecuteTree_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTree_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTree_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTree_GetResult_Response_

// alias to use template instance with default allocator
using ExecuteTree_GetResult_Response =
  btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace btcpp_ros2_interfaces
{

namespace action
{

struct ExecuteTree_GetResult
{
  using Request = btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Request;
  using Response = btcpp_ros2_interfaces::action::ExecuteTree_GetResult_Response;
};

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "btcpp_ros2_interfaces/action/detail/execute_tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTree_FeedbackMessage_
{
  using Type = ExecuteTree_FeedbackMessage_<ContainerAllocator>;

  explicit ExecuteTree_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ExecuteTree_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const btcpp_ros2_interfaces::action::ExecuteTree_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage
    std::shared_ptr<btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTree_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTree_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTree_FeedbackMessage_

// alias to use template instance with default allocator
using ExecuteTree_FeedbackMessage =
  btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace btcpp_ros2_interfaces
{

namespace action
{

struct ExecuteTree
{
  /// The goal message defined in the action definition.
  using Goal = btcpp_ros2_interfaces::action::ExecuteTree_Goal;
  /// The result message defined in the action definition.
  using Result = btcpp_ros2_interfaces::action::ExecuteTree_Result;
  /// The feedback message defined in the action definition.
  using Feedback = btcpp_ros2_interfaces::action::ExecuteTree_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = btcpp_ros2_interfaces::action::ExecuteTree_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = btcpp_ros2_interfaces::action::ExecuteTree_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = btcpp_ros2_interfaces::action::ExecuteTree_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ExecuteTree ExecuteTree;

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#endif  // BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__STRUCT_HPP_
