cmake_minimum_required(VERSION 3.13)
project(Stream_Processor)

set(CMAKE_CXX_STANDARD 14)


SET(CMAKE_CXX_FLAGS -pthread)

include_directories(.)
include_directories(generated)
include_directories(stream-processor-generator)
include_directories(stream-processor-generator/src)
include_directories(stream-processor-generator/src/antlr)
include_directories(stream-processor-generator/src/cpp-file-creation)
include_directories(stream-processor-generator/src/query)

add_executable(Siddhi_llvm
    generated/SiddhiqlBaseListener.cpp
    generated/SiddhiqlBaseListener.h
    generated/SiddhiqlBaseVisitor.cpp
    generated/SiddhiqlBaseVisitor.h
    generated/SiddhiqlLexer.cpp
    generated/SiddhiqlLexer.h
    generated/SiddhiqlListener.cpp
    generated/SiddhiqlListener.h
    generated/SiddhiqlParser.cpp
    generated/SiddhiqlParser.h
    generated/SiddhiqlVisitor.cpp
    generated/SiddhiqlVisitor.h
    stream-processor-generator/src/antlr/TranslatorVisitor.cpp
    stream-processor-generator/src/antlr/TranslatorVisitor.h
    stream-processor-generator/src/cpp-file-creation/ClassCreator.cpp
    stream-processor-generator/src/cpp-file-creation/ClassCreator.h
    stream-processor-generator/src/cpp-file-creation/FunctionCreation.cpp
    stream-processor-generator/src/cpp-file-creation/FunctionCreation.h
    stream-processor-generator/src/cpp-file-creation/Include.cpp
    stream-processor-generator/src/cpp-file-creation/Include.h
    stream-processor-generator/src/cpp-file-creation/Method.cpp
    stream-processor-generator/src/cpp-file-creation/Method.h
    stream-processor-generator/src/cpp-file-creation/PublicMembers.cpp
    stream-processor-generator/src/cpp-file-creation/PublicMembers.h
    stream-processor-generator/src/cpp-file-creation/Variable.cpp
    stream-processor-generator/src/cpp-file-creation/Variable.h
    stream-processor-generator/src/cpp-file-creation/Enum.cpp
    stream-processor-generator/src/query/Annotation.cpp
    stream-processor-generator/src/query/Annotation.h
    stream-processor-generator/src/query/DefinitionStream.cpp
    stream-processor-generator/src/query/DefinitionStream.h
    stream-processor-generator/src/query/ExecutionElement.cpp
    stream-processor-generator/src/query/ExecutionElement.h
    stream-processor-generator/src/query/OutputAttribute.cpp
    stream-processor-generator/src/query/OutputAttribute.h
    stream-processor-generator/src/query/InputOutputMapper.cpp
    stream-processor-generator/src/query/InputOutputMapper.h
    stream-processor-generator/src/query/AttributeTypeMapper.cpp
    stream-processor-generator/src/query/InputBufferCreator.cpp
    stream-processor-generator/src/query/BufferGenerator.cpp
    stream-processor-generator/src/query/DetailContainerCreator.cpp
    stream-processor-generator/src/query/ArithmaticExecutorGenerator.cpp
    stream-processor-generator/src/query/OutputEmitterGenerator.cpp
    stream-processor-generator/src/query/ProcessedThreadHandlerCreator.cpp
    main.cpp
)



include_directories(
        ${PROJECT_SOURCE_DIR}/generated
        ${PROJECT_SOURCE_DIR}/src
        /usr/local/include/antlr4-runtime
)

link_directories(
        /usr/local/lib
)

target_link_libraries(Siddhi_llvm   antlr4-runtime    )