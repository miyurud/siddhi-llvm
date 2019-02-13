cmake_minimum_required(VERSION 3.13)
project(Stream_Processor)

set(CMAKE_CXX_STANDARD 14)

add_executable(Stream_Processor main.cpp generated/SiddhiqlBaseListener.cpp generated/SiddhiqlLexer.cpp generated/SiddhiqlListener.cpp
        generated/SiddhiqlParser.cpp)

include_directories(
        ${PROJECT_SOURCE_DIR}/generated
        /usr/local/include//antlr4-runtime
)

link_directories(
        /usr/local/lib
)

target_link_libraries(Stream_Processor antlr4-runtime)