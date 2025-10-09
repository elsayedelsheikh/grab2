#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "grab2_planner::planner_server_core" for configuration ""
set_property(TARGET grab2_planner::planner_server_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(grab2_planner::planner_server_core PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "lifecycle_msgs::lifecycle_msgs__rosidl_generator_c;lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_fastrtps_c;lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_introspection_c;lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_c;lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_fastrtps_cpp;lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_introspection_cpp;lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_cpp;lifecycle_msgs::lifecycle_msgs__rosidl_generator_py;tf2::tf2"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libplanner_server_core.so"
  IMPORTED_SONAME_NOCONFIG "libplanner_server_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS grab2_planner::planner_server_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_grab2_planner::planner_server_core "${_IMPORT_PREFIX}/lib/libplanner_server_core.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
