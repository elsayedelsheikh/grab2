# Grab2 Behavior Demos

[![ROS2 CI](https://github.com/elsayedelsheikh/grab2/actions/workflows/ros2.yaml/badge.svg)](https://github.com/elsayedelsheikh/grab2/actions/workflows/ros2.yaml)

ROS 2 Distro | Build Status |
:----------: | :-----------: |
Humble | ![Humble Build](https://github.com/elsayedelsheikh/grab2/actions/workflows/ros2.yaml/badge.svg?branch=main&event=push&matrix=ros_distro:humble) |
Jazzy | ![Jazzy Build](https://github.com/elsayedelsheikh/grab2/actions/workflows/ros2.yaml/badge.svg?branch=main&event=push&matrix=ros_distro:jazzy) |
Kilted | ![Kilted Build](https://github.com/elsayedelsheikh/grab2/actions/workflows/ros2.yaml/badge.svg?branch=main&event=push&matrix=ros_distro:kilted) |

This repository provides manipulation demos

- Using BehaviorTree.CPP, Moveit2, Nvidia cuRobo, and ROS2 with Nvidia Isaac sim.
- You can use this package with any simulator that supports topic based ROS2 control.
- Docker containers are available as well.

Available demos:

- **Isaac Sim:**
  Check [Start Isaac Sim world](#2-start-the-isaac-sim-simulation-world)
- **No Isaac Sim:**
  Run [mock hardware demo](#3-start-the-behavior-demo)

<img width="3939" height="2160" alt="Screenshot from 2025-07-27 16-36-30" src="https://github.com/user-attachments/assets/f34e4397-ee0e-4210-80d7-5d28c0530126" />

See the sections below for detailed instructions on each option.

## Project Overview

This project demonstrates robot manipulation using a modular tech stack:

- **BehaviorTree.CPP v4.6** for task-level logic and decision making
- **Nvidia CuRobo** for fast, efficient, real-time trajectory planning
- **ROS2** with **ros2_control** and `joint_trajectory_controller` for motion execution

The behavior tree manages the decision-making flow, Nvidia CuRobo handles motion planning, and ROS2 `ros2_control` executes the robot's motion.

<img width="2815" height="1811" alt="Screenshot from 2025-07-27 16-29-25" src="https://github.com/user-attachments/assets/2c2b2646-92b5-44e3-9154-0399a4208a36" />

### Demo Scenarios

- **Simple Room:**
  Franka robot, a bin, and three cubes on a table
- **Toybox:**
  Panda robot with car toys scattered on the ground

### Available Behavior Demos

- `collect_cubes`
- `collect_toys`
- `lookaround_demo`
- `target_ik_demo`

For more information, see `grab2_behavior_tree/behavior_trees`.

### Available Planners

- Moveit2
- Nvidia CuRobo
- Did you write one? Send a pull request to add it to this list.

### Available BehaviorTree Plugins

- See `grab2_behavior_tree/plugins`.
- Did you write one? Send a pull request to add it to this list.

## Requirements

- NVIDIA GPU with driver version 550+ is required for simulation and demo containers.
- [Docker](https://docs.docker.com/get-docker/) and [Docker Compose](https://docs.docker.com/compose/) must be installed.
- Ensure [NVIDIA Container Toolkit](https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/latest/install-guide.html) is set up for GPU access in containers.

## Running Demos with Docker Compose

This project uses Docker Compose to manage simulation and demo containers
defined in `docker-compose.yml`.

---

### 1. Build the Containers

Build all required images:

```sh
docker compose build
```

---

### 2. Start the Isaac Sim Simulation World

You can start the Isaac Sim simulation world in two ways:

- **Using Docker Compose:**
  Launch the simulation environment in a container with:

  ```sh
  docker compose up isaac-simple-room
  ```

  or/ for the toybox world:

  ```sh
  docker compose up isaac-toybox
  ```

- **Using a Local Isaac Sim Installation (version 4.5):**
  If you have Isaac Sim installed locally, you can run the simulation script directly:

  ```sh
  cd isaac_sim_worlds
  ./isaac_py.sh panda_bin_cubes.py
  ```

  or/ for the toybox world:

  ```sh
  cd isaac_sim_worlds
  ./isaac_py.sh panda_toybox.py
  ```

---

### 3. Start the Behavior Demo

In a separate terminal, start the behavior demo container:

- Simple Room Demo (with Isaac Sim):

  ```sh
  docker compose up simple-room-demo
  ```

- Toybox Demo:

  ```sh
  docker compose up toybox-demo
  ```

- Simple Room Demo (no Isaac Sim, mock hardware):
  (No Isaac Sim required; can be run standalone, without objects to grab)

  ```sh
  docker compose up simple-room-demo-no-isaac
  ```

---

### 4. Stopping the Demos

To stop all running containers, press `Ctrl+C` in the terminal or run:

```sh
docker compose down
```
