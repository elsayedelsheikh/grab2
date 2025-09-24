.. grab2 documentation master file, created by
   sphinx-quickstart on Thu Sep 25 00:31:48 2025.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

grab2 documentation
===================

grab2 brings together ROS 2, NVIDIA cuRobo, BehaviorTree.CPP and NVIDIA Isaac Sim; a practical setup for a typical manipulation pipeline from perception to motion planning and behavior orchestration.

Setup
=====

Supported Robots
----------------

+----------------------------------------------------------------+-------------+
|                             Robot                              |   Status    |
+================================================================+=============+
| Franka panda with 2-finger girpper                             | Supported   |
+----------------------------------------------------------------+-------------+
| Universal Robot (UR5) with 2-finger gripper "`robotiq_2f_140`" | Supported   |
+----------------------------------------------------------------+-------------+
| Universal Robot (UR10) with suction gripper                    | Supported   |
+----------------------------------------------------------------+-------------+
| Tiago (Mobile manipulator)                                     | In progress |
+----------------------------------------------------------------+-------------+

Supported Motion Planners
-------------------------

* Moveit2
* NVIDIA cuRobo

Supported Simulators
-------------------------

* NVIDIA Isaac Sim >= 4.5 (any simulator that supports ROS2 topic based control)
* Gazebo

Grab2 Demos
===========

.. toctree::
   :maxdepth: 1

   demos/index
