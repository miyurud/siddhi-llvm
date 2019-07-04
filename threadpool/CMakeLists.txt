cmake_minimum_required(VERSION 3.13)
project(StreamProcessorLLVM_TP)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)

add_executable(StreamProcessorLLVM_TP main.cpp Buffer.cpp Buffer.h ThreadPool.cpp ThreadPool.h Data.cpp Data.h Window.cpp Window.h Processor.cpp Processor.h StreamProcessor.cpp StreamProcessor.h InputHandler.cpp InputHandler.h functions/Sum.cpp functions/Sum.h OutputEmitter.cpp OutputEmitter.h LengthWindow.cpp LengthWindow.h TimeWindow.cpp TimeWindow.h common.h ConfigParams.cpp ConfigParams.h Benchmark.cpp Benchmark.h)