file(REMOVE_RECURSE
  "include/behaviortree_ros2/bt_executor_parameters.hpp"
  "include/bt_executor_parameters.hpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/bt_executor_parameters.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
