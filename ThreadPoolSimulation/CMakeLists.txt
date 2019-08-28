cmake_minimum_required(VERSION 3.14)
project(MockSPForLLVMOptimization)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)
add_executable(MockSPForLLVMOptimization main.cpp ThreadPool.cpp ThreadPool.h Task.cpp Task.h)