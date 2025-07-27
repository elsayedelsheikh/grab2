#!/bin/bash
set -e

sudo apt-get update
sudo apt-get -y install --reinstall -y \
   libmpich-dev hwloc-nox libmpich12 mpich

rosdep update --rosdistro=humble
rosdep install --from-paths src --ignore-src -r -y --rosdistro=humble

# Source ROS2 workspace
echo "source /opt/ros/humble/setup.bash >> ~/.bashrc"
echo "if [ -f /ros2_ws/install/setup.bash ]; then source /ros2_ws/install/setup.bash; fi" >> ~/.bashrc

# Build
colcon build --symlink-install
source install/setup.bash