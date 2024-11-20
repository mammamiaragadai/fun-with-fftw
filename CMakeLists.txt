cmake_minimum_required(VERSION 3.5)
project(MyProject)

add_subdirectory(vendors/eigen)
include_directories(vendors/eigen)

add_executable(my_project src/main.cpp)
target_link_libraries(my_project Eigen3::Eigen)