# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_btcpp_ros2_samples_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED btcpp_ros2_samples_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(btcpp_ros2_samples_FOUND FALSE)
  elseif(NOT btcpp_ros2_samples_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(btcpp_ros2_samples_FOUND FALSE)
  endif()
  return()
endif()
set(_btcpp_ros2_samples_CONFIG_INCLUDED TRUE)

# output package information
if(NOT btcpp_ros2_samples_FIND_QUIETLY)
  message(STATUS "Found btcpp_ros2_samples: 0.2.0 (${btcpp_ros2_samples_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'btcpp_ros2_samples' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${btcpp_ros2_samples_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(btcpp_ros2_samples_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${btcpp_ros2_samples_DIR}/${_extra}")
endforeach()
