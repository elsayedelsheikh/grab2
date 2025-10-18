// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grab2_msgs:action/GetIsaacGrasp.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__STRUCT_HPP_
#define GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'object_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Goal __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Goal __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetIsaacGrasp_Goal_
{
  using Type = GetIsaacGrasp_Goal_<ContainerAllocator>;

  explicit GetIsaacGrasp_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->isaac_grasp = "";
    }
  }

  explicit GetIsaacGrasp_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_pose(_alloc, _init),
    isaac_grasp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->isaac_grasp = "";
    }
  }

  // field types and members
  using _object_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _object_pose_type object_pose;
  using _isaac_grasp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _isaac_grasp_type isaac_grasp;

  // setters for named parameter idiom
  Type & set__object_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->object_pose = _arg;
    return *this;
  }
  Type & set__isaac_grasp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->isaac_grasp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Goal
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Goal
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIsaacGrasp_Goal_ & other) const
  {
    if (this->object_pose != other.object_pose) {
      return false;
    }
    if (this->isaac_grasp != other.isaac_grasp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIsaacGrasp_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIsaacGrasp_Goal_

// alias to use template instance with default allocator
using GetIsaacGrasp_Goal =
  grab2_msgs::action::GetIsaacGrasp_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'grasps'
#include "moveit_msgs/msg/detail/grasp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Result __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Result __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetIsaacGrasp_Result_
{
  using Type = GetIsaacGrasp_Result_<ContainerAllocator>;

  explicit GetIsaacGrasp_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetIsaacGrasp_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _grasps_type =
    std::vector<moveit_msgs::msg::Grasp_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Grasp_<ContainerAllocator>>>;
  _grasps_type grasps;

  // setters for named parameter idiom
  Type & set__grasps(
    const std::vector<moveit_msgs::msg::Grasp_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Grasp_<ContainerAllocator>>> & _arg)
  {
    this->grasps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Result
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Result
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIsaacGrasp_Result_ & other) const
  {
    if (this->grasps != other.grasps) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIsaacGrasp_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIsaacGrasp_Result_

// alias to use template instance with default allocator
using GetIsaacGrasp_Result =
  grab2_msgs::action::GetIsaacGrasp_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs


#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Feedback __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetIsaacGrasp_Feedback_
{
  using Type = GetIsaacGrasp_Feedback_<ContainerAllocator>;

  explicit GetIsaacGrasp_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetIsaacGrasp_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Feedback
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_Feedback
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIsaacGrasp_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIsaacGrasp_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIsaacGrasp_Feedback_

// alias to use template instance with default allocator
using GetIsaacGrasp_Feedback =
  grab2_msgs::action::GetIsaacGrasp_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_SendGoal_Request __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetIsaacGrasp_SendGoal_Request_
{
  using Type = GetIsaacGrasp_SendGoal_Request_<ContainerAllocator>;

  explicit GetIsaacGrasp_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GetIsaacGrasp_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const grab2_msgs::action::GetIsaacGrasp_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_SendGoal_Request
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_SendGoal_Request
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIsaacGrasp_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIsaacGrasp_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIsaacGrasp_SendGoal_Request_

// alias to use template instance with default allocator
using GetIsaacGrasp_SendGoal_Request =
  grab2_msgs::action::GetIsaacGrasp_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_SendGoal_Response __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetIsaacGrasp_SendGoal_Response_
{
  using Type = GetIsaacGrasp_SendGoal_Response_<ContainerAllocator>;

  explicit GetIsaacGrasp_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GetIsaacGrasp_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_SendGoal_Response
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_SendGoal_Response
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIsaacGrasp_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIsaacGrasp_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIsaacGrasp_SendGoal_Response_

// alias to use template instance with default allocator
using GetIsaacGrasp_SendGoal_Response =
  grab2_msgs::action::GetIsaacGrasp_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs

namespace grab2_msgs
{

namespace action
{

struct GetIsaacGrasp_SendGoal
{
  using Request = grab2_msgs::action::GetIsaacGrasp_SendGoal_Request;
  using Response = grab2_msgs::action::GetIsaacGrasp_SendGoal_Response;
};

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_GetResult_Request __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetIsaacGrasp_GetResult_Request_
{
  using Type = GetIsaacGrasp_GetResult_Request_<ContainerAllocator>;

  explicit GetIsaacGrasp_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GetIsaacGrasp_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_GetResult_Request
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_GetResult_Request
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIsaacGrasp_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIsaacGrasp_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIsaacGrasp_GetResult_Request_

// alias to use template instance with default allocator
using GetIsaacGrasp_GetResult_Request =
  grab2_msgs::action::GetIsaacGrasp_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_GetResult_Response __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetIsaacGrasp_GetResult_Response_
{
  using Type = GetIsaacGrasp_GetResult_Response_<ContainerAllocator>;

  explicit GetIsaacGrasp_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GetIsaacGrasp_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const grab2_msgs::action::GetIsaacGrasp_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_GetResult_Response
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_GetResult_Response
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIsaacGrasp_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIsaacGrasp_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIsaacGrasp_GetResult_Response_

// alias to use template instance with default allocator
using GetIsaacGrasp_GetResult_Response =
  grab2_msgs::action::GetIsaacGrasp_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs

namespace grab2_msgs
{

namespace action
{

struct GetIsaacGrasp_GetResult
{
  using Request = grab2_msgs::action::GetIsaacGrasp_GetResult_Request;
  using Response = grab2_msgs::action::GetIsaacGrasp_GetResult_Response;
};

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__GetIsaacGrasp_FeedbackMessage __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetIsaacGrasp_FeedbackMessage_
{
  using Type = GetIsaacGrasp_FeedbackMessage_<ContainerAllocator>;

  explicit GetIsaacGrasp_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GetIsaacGrasp_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const grab2_msgs::action::GetIsaacGrasp_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_FeedbackMessage
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__GetIsaacGrasp_FeedbackMessage
    std::shared_ptr<grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIsaacGrasp_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIsaacGrasp_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIsaacGrasp_FeedbackMessage_

// alias to use template instance with default allocator
using GetIsaacGrasp_FeedbackMessage =
  grab2_msgs::action::GetIsaacGrasp_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace grab2_msgs
{

namespace action
{

struct GetIsaacGrasp
{
  /// The goal message defined in the action definition.
  using Goal = grab2_msgs::action::GetIsaacGrasp_Goal;
  /// The result message defined in the action definition.
  using Result = grab2_msgs::action::GetIsaacGrasp_Result;
  /// The feedback message defined in the action definition.
  using Feedback = grab2_msgs::action::GetIsaacGrasp_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = grab2_msgs::action::GetIsaacGrasp_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = grab2_msgs::action::GetIsaacGrasp_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = grab2_msgs::action::GetIsaacGrasp_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GetIsaacGrasp GetIsaacGrasp;

}  // namespace action

}  // namespace grab2_msgs

#endif  // GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__STRUCT_HPP_
