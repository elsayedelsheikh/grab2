#!/bin/bash
set -e

# Re-install MPICH - Required for CuRobo
sudo apt-get update
sudo apt-get -y install --reinstall -y \
   libmpich-dev hwloc-nox libmpich12 mpich

# Install ROS2 dependencies
rosdep update --rosdistro=${ROS_DISTRO}
rosdep install --from-paths src --ignore-src -r -y --rosdistro=${ROS_DISTRO}

# Build
colcon build --symlink-install

# Source workspace
if [ -f /ros2_ws/install/setup.bash ]
then
   source /ros2_ws/install/setup.bash
fi

# Execute the command passed into this entrypoint
exec "$@"
