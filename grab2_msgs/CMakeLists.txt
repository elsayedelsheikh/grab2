cmake_minimum_required(VERSION 3.8)
project(grab2_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(action_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(control_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(btcpp_ros2_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/ComputePlanToPose.action"
  "action/ComputePlanThroughPoses.action"
  "action/GetIsaacGrasp.action"
  "action/ReachObject.action"
  DEPENDENCIES builtin_interfaces std_msgs control_msgs geometry_msgs moveit_msgs trajectory_msgs btcpp_ros2_interfaces
)

ament_package()
