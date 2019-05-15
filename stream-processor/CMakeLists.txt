cmake_minimum_required(VERSION 3.13)
project(stream_processor)

set(CMAKE_CXX_STANDARD 14)

SET(CMAKE_CXX_FLAGS -pthread)

include_directories(.)
include_directories(math_logic)
include_directories(temp)

add_executable(stream_processor
        math_logic/Average.cpp
        math_logic/Average.h
        math_logic/Sum.cpp
        math_logic/Sum.h
        temp/Consumer.cpp
        temp/Consumer.h
        temp/Producer.cpp
        temp/Producer.h
        Buffer.cpp
        Buffer.h
        BufferContainer.cpp
        BufferContainer.h
        BufferLocker.cpp
        BufferLocker.h
        common.h
        DetailContainer.cpp
        DetailContainer.h
        Executor.cpp
        Executor.h
        ExecutorCreator.cpp
        ExecutorCreator.h
        InputOutputMapper.cpp
        InputOutputMapper.h
        LogicExecution.cpp
        LogicExecution.h
        OutputEmitter.cpp
        OutputEmitter.h
        PerformanceMonitor.cpp
        PerformanceMonitor.h
        ProcessedThreadHandler.cpp
        Main.cpp
        WindowBufferContainer.cpp
        WindowBufferContainer.h)
