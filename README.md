# ROS - Beginner Tutorial
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE.md)

## Overview
```
ROS (Robotics Operating System) is a open source platform that allows using to
build robotics software aplications. This is a short tutorial covering the fellowing

--Publishers/Subscriber Nodes
--Server/Client Nodes
--ROS logging
--ROS launch files
```

## Dependencies
```
ROS Version: [Kinetic](http://wiki.ros.org/kinetic/Installation "Kinetic Install Link")
```

## Creating Catkin Workspace
```
Create catkin workspace
$ mkdir -p ~/catkin_workspce/src
$ cd ~/catkin_workspace
$ catkin_make

---Source your catkin workspace---
$ source devel/setup.bash
```


## Add the beginner_tutorial package to your catkin workspace
```
$ cd ~/catkin_workspace/src
$ git clone --recursive https://github.com/reggie2010/beginner_tutorials

$ cd ..
$ catkin_make
```

## Run Nodes
```
In seperate terminals
$ roscore //starts master node

$ . ~/catkin_ws/devel/setup.bash
$ rosrun begineer_tutorials talker 10 //Needs argument to set rate of node

$ . ~/catkin_ws/devel/setup.bash
$ rosrun begineer_tutorials listener
```

## Run Using Launch File
```
---In new terminal window---
$ . ~/catkin_workspace/devel/setup.bash
$ roslaunch beginner_tutorials start.launch
```