cmake_minimum_required(VERSION 3.20)
project(grab2_bt_grabber)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(grab2_msgs REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(behaviortree_ros2 REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(grab2_ros_common REQUIRED)

set(executable_name bt_engine)

add_library(bt_grabber STATIC src/bt_grabber.cpp)
add_library(grab2_bt_grabber::bt_grabber ALIAS bt_grabber)
target_compile_features(bt_grabber PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_include_directories(bt_grabber PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_link_libraries(
  bt_grabber PUBLIC
  rclcpp::rclcpp
  rclcpp_action::rclcpp_action
  tf2_ros::tf2_ros
  grab2_ros_common::grab2_ros_common
  behaviortree_cpp::behaviortree_cpp
  behaviortree_ros2::behaviortree_ros2
  ${ament_index_cpp_TARGETS}
  ${grab2_msgs_TARGETS}
)

# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(bt_grabber PRIVATE "GRAB2_BT_GRABBER_BUILDING_LIBRARY")

add_executable(${executable_name} src/main.cpp)
target_link_libraries(${executable_name} PRIVATE bt_grabber rclcpp::rclcpp)
install(TARGETS ${executable_name}
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

install(
  DIRECTORY config launch behavior_trees
  DESTINATION share/${PROJECT_NAME}
)

install(
  TARGETS bt_grabber
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_include_directories(
  "include/${PROJECT_NAME}"
)
ament_export_libraries(
  bt_grabber
)
ament_export_targets(
  export_${PROJECT_NAME}
)

ament_package()
