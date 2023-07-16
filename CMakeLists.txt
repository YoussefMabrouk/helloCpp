project(myProject)

cmake_minimum_required(VERSION 3.0)

find_package(Eigen3 REQUIRED)

add_executable(myProject main.cpp)

target_link_libraries(myProject Eigen3::Eigen)
