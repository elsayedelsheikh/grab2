// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from btcpp_ros2_interfaces:action/Sleep.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__ACTION__DETAIL__SLEEP__STRUCT_HPP_
#define BTCPP_ROS2_INTERFACES__ACTION__DETAIL__SLEEP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Goal __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Goal __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Sleep_Goal_
{
  using Type = Sleep_Goal_<ContainerAllocator>;

  explicit Sleep_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msec_timeout = 0l;
    }
  }

  explicit Sleep_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msec_timeout = 0l;
    }
  }

  // field types and members
  using _msec_timeout_type =
    int32_t;
  _msec_timeout_type msec_timeout;

  // setters for named parameter idiom
  Type & set__msec_timeout(
    const int32_t & _arg)
  {
    this->msec_timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Goal
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Goal
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sleep_Goal_ & other) const
  {
    if (this->msec_timeout != other.msec_timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sleep_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sleep_Goal_

// alias to use template instance with default allocator
using Sleep_Goal =
  btcpp_ros2_interfaces::action::Sleep_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Result __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Result __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Sleep_Result_
{
  using Type = Sleep_Result_<ContainerAllocator>;

  explicit Sleep_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  explicit Sleep_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  // field types and members
  using _done_type =
    bool;
  _done_type done;

  // setters for named parameter idiom
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Result
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Result
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sleep_Result_ & other) const
  {
    if (this->done != other.done) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sleep_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sleep_Result_

// alias to use template instance with default allocator
using Sleep_Result =
  btcpp_ros2_interfaces::action::Sleep_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Feedback __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Sleep_Feedback_
{
  using Type = Sleep_Feedback_<ContainerAllocator>;

  explicit Sleep_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cycle = 0l;
    }
  }

  explicit Sleep_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cycle = 0l;
    }
  }

  // field types and members
  using _cycle_type =
    int32_t;
  _cycle_type cycle;

  // setters for named parameter idiom
  Type & set__cycle(
    const int32_t & _arg)
  {
    this->cycle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Feedback
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_Feedback
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sleep_Feedback_ & other) const
  {
    if (this->cycle != other.cycle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sleep_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sleep_Feedback_

// alias to use template instance with default allocator
using Sleep_Feedback =
  btcpp_ros2_interfaces::action::Sleep_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_SendGoal_Request __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Sleep_SendGoal_Request_
{
  using Type = Sleep_SendGoal_Request_<ContainerAllocator>;

  explicit Sleep_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Sleep_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const btcpp_ros2_interfaces::action::Sleep_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_SendGoal_Request
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_SendGoal_Request
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sleep_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sleep_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sleep_SendGoal_Request_

// alias to use template instance with default allocator
using Sleep_SendGoal_Request =
  btcpp_ros2_interfaces::action::Sleep_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_SendGoal_Response __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Sleep_SendGoal_Response_
{
  using Type = Sleep_SendGoal_Response_<ContainerAllocator>;

  explicit Sleep_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Sleep_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_SendGoal_Response
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_SendGoal_Response
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sleep_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sleep_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sleep_SendGoal_Response_

// alias to use template instance with default allocator
using Sleep_SendGoal_Response =
  btcpp_ros2_interfaces::action::Sleep_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace btcpp_ros2_interfaces
{

namespace action
{

struct Sleep_SendGoal
{
  using Request = btcpp_ros2_interfaces::action::Sleep_SendGoal_Request;
  using Response = btcpp_ros2_interfaces::action::Sleep_SendGoal_Response;
};

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_GetResult_Request __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Sleep_GetResult_Request_
{
  using Type = Sleep_GetResult_Request_<ContainerAllocator>;

  explicit Sleep_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Sleep_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_GetResult_Request
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_GetResult_Request
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sleep_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sleep_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sleep_GetResult_Request_

// alias to use template instance with default allocator
using Sleep_GetResult_Request =
  btcpp_ros2_interfaces::action::Sleep_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_GetResult_Response __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Sleep_GetResult_Response_
{
  using Type = Sleep_GetResult_Response_<ContainerAllocator>;

  explicit Sleep_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Sleep_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const btcpp_ros2_interfaces::action::Sleep_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_GetResult_Response
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_GetResult_Response
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sleep_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sleep_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sleep_GetResult_Response_

// alias to use template instance with default allocator
using Sleep_GetResult_Response =
  btcpp_ros2_interfaces::action::Sleep_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace btcpp_ros2_interfaces

namespace btcpp_ros2_interfaces
{

namespace action
{

struct Sleep_GetResult
{
  using Request = btcpp_ros2_interfaces::action::Sleep_GetResult_Request;
  using Response = btcpp_ros2_interfaces::action::Sleep_GetResult_Response;
};

}  // namespace action

}  // namespace btcpp_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__action__Sleep_FeedbackMessage __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Sleep_FeedbackMessage_
{
  using Type = Sleep_FeedbackMessage_<ContainerAllocator>;

  explicit Sleep_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Sleep_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const btcpp_ros2_interfaces::action::Sleep_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_FeedbackMessage
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__action__Sleep_FeedbackMessage
    std::shared_ptr<btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sleep_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sleep_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sleep_FeedbackMessage_

// alias to use template instance with default allocator
using Sleep_FeedbackMessage =
  btcpp_ros2_interfaces::action::Sleep_FeedbackMessage_<std::allocator<void>>;

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

struct Sleep
{
  /// The goal message defined in the action definition.
  using Goal = btcpp_ros2_interfaces::action::Sleep_Goal;
  /// The result message defined in the action definition.
  using Result = btcpp_ros2_interfaces::action::Sleep_Result;
  /// The feedback message defined in the action definition.
  using Feedback = btcpp_ros2_interfaces::action::Sleep_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = btcpp_ros2_interfaces::action::Sleep_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = btcpp_ros2_interfaces::action::Sleep_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = btcpp_ros2_interfaces::action::Sleep_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Sleep Sleep;

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#endif  // BTCPP_ROS2_INTERFACES__ACTION__DETAIL__SLEEP__STRUCT_HPP_
