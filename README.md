# ROS - Beginner Tutorial

## Dependencies
```
ROS Version: Kinetic
```

## Adding Package
```
Create catkin workspace
$ mkdir -p ~/catkin_workspce/src
$ cd ~/catkin_workspace
$ catkin_make

Add the beginner_tutorial package to your catkin workspace src folder
$ cd ~/catkin_workspace/src
$ git clone --recursive https://github.com/reggie2010/beginner_tutorials

Source your catkin workspace
$ cd ~/catkin_workspace
$ . ~/catkin_ws/devel/setup.bash
```

## Run Nodes
```
In seperate terminals
$ roscore //starts master node

$ . ~/catkin_ws/devel/setup.bash
$ rosrun begineer_tutorials talker.cpp

$ . ~/catkin_ws/devel/setup.bash
$ rosrun begineer_tutorials listener.cpp
```