cmake_minimum_required(VERSION 3.13)
project(cost_pass)

set(CMAKE_CXX_STANDARD 14)

find_package(LLVM REQUIRED CONFIG)
add_definitions(${LLVM_DEFINITIONS})
include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

add_subdirectory(costAnalysis)
add_subdirectory(Transform)



add_executable(cost_pass main.cpp)