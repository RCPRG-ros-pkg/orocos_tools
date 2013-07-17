cmake_minimum_required(VERSION 2.8.3)
project(xeno_clock)

catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS roscpp
)

find_package(catkin REQUIRED COMPONENTS roscpp)

include_directories(
  include
  ${catkin_INCLUDE_DIRS})

install(DIRECTORY include/${PROJECT_NAME}/
   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)

