cmake_minimum_required(VERSION 3.14)
project(verify_rotation)

set(CMAKE_CXX_STANDARD 14)

find_package(Eigen3 3.1.0 REQUIRED)

include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(verify_rotation main.cpp)

target_link_libraries(verify_rotation ${EIGEN3_LIBS})