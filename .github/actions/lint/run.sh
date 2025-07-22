#!/bin/bash
set -e

# Setup
vcs import < ros2.repos
sudo apt-get update
rosdep update --rosdistro=humble 
rosdep install --from-paths . --ignore-src -y --rosdistro=humble 

# Lint
ament_${LINTER} ./
