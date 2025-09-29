cmake_minimum_required(VERSION 3.8)
project(grab2_grasp_generator)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_msgs REQUIRED)
find_package(grab2_ros_common REQUIRED)
find_package(grab2_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(ament_index_cpp REQUIRED)

set(executable_name grasp_generator)
set(library_name ${executable_name}_core)

add_library(${library_name} src/grasp_generator.cpp)
add_library(grab2_grasp_generator::grasp_generator ALIAS ${library_name})
target_compile_features(${library_name} PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

target_include_directories(${library_name} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)

target_link_libraries(${library_name} PUBLIC
  yaml-cpp
  rclcpp::rclcpp
  rclcpp_action::rclcpp_action
  grab2_ros_common::grab2_ros_common
  tf2::tf2
  tf2_ros::tf2_ros
  ${tf2_geometry_msgs_TARGETS}
  ament_index_cpp::ament_index_cpp
  ${std_msgs_TARGETS}
  ${control_msgs_TARGETS}
  ${geometry_msgs_TARGETS}
  ${trajectory_msgs_TARGETS}
  ${grab2_msgs_TARGETS}
  ${visualization_msgs_TARGETS}
  ${moveit_msgs_TARGETS}
)

# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(${library_name} PRIVATE "GRAB2_GRASP_GENERATOR_BUILDING_LIBRARY")

add_executable(${executable_name}
  src/main.cpp
)

target_link_libraries(${executable_name} PRIVATE ${library_name} rclcpp::rclcpp)

install(
  DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

install(
  TARGETS ${library_name}
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(TARGETS ${executable_name}
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  find_package(ament_cmake_gtest REQUIRED)

  # the following line skips the linter which checks for copyrights
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()

  ament_find_gtest()
  add_subdirectory(test)
endif()

ament_export_include_directories(
  "include/${PROJECT_NAME}"
)
ament_export_libraries(
  ${library_name}
)
ament_export_targets(
  export_${PROJECT_NAME}
)

ament_package()
