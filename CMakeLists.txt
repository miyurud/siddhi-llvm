cmake_minimum_required(VERSION 3.13)
project(Stream_Processor)

set(CMAKE_CXX_STANDARD 14)


include_directories(
        ${PROJECT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/generated
        ${PROJECT_SOURCE_DIR}/antlr4-runtime
        ${PROJECT_SOURCE_DIR}/antlr4-runtime/atn
        ${PROJECT_SOURCE_DIR}/antlr4-runtime/dfa
        ${PROJECT_SOURCE_DIR}/antlr4-runtime/misc
        ${PROJECT_SOURCE_DIR}/antlr4-runtime/support
        ${PROJECT_SOURCE_DIR}/antlr4-runtime/tree
)

add_executable(Stream_Processor main.cpp)

target_link_libraries(Stream_Processor antlr4-runtime)