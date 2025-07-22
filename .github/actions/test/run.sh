#!/bin/bash
set -e

# Setup
vcs import < ros2.repos
sudo apt-get update
rosdep update --rosdistro=humble 
rosdep install --from-paths . --ignore-src -y --rosdistro=humble 

# Build
BUILD_TYPE=RelWithDebInfo
colcon build \
        --merge-install \
        --symlink-install \
        --cmake-args "-DCMAKE_BUILD_TYPE=$BUILD_TYPE" "-DCMAKE_EXPORT_COMPILE_COMMANDS=On" \
        -Wall -Wextra -Wpedantic

# Test
if [ -f install/setup.bash ]; then source install/setup.bash; fi
colcon test --merge-install
