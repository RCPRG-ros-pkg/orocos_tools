cmake_minimum_required(VERSION 2.8.3)
project(oro_action_server)

catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS actionlib
)

find_package(catkin REQUIRED COMPONENTS actionlib)

include_directories(
  include
  ${catkin_INCLUDE_DIRS})

install(DIRECTORY include/${PROJECT_NAME}/
   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)

