#!/bin/bash
set -e

# Setup
vcs import < dependencies.repos
sudo apt-get update
rosdep update --rosdistro=humble 
rosdep install --from-paths . --ignore-src -y --rosdistro=humble 

# Build
colcon build --symlink-install

# Test
if [ -f install/setup.bash ]; then source install/setup.bash; fi
colcon test
