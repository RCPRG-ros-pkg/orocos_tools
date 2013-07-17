cmake_minimum_required(VERSION 2.8.3)
project(rtt_control_msgs)

find_package(catkin REQUIRED COMPONENTS 
  rtt_rostopic 
  control_msgs
  rtt_std_msgs  rtt_geometry_msgs  rtt_trajectory_msgs  rtt_actionlib_msgs)

catkin_package(
  DEPENDS ocl rtt
  CATKIN_DEPENDS 
  rtt_rostopic 
  control_msgs
  rtt_std_msgs  rtt_geometry_msgs  rtt_trajectory_msgs  rtt_actionlib_msgs)

include_directories(${catkin_INCLUDE_DIRS})
ros_generate_rtt_typekit(control_msgs)

