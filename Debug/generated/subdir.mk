################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../generated/SiddhiqlBaseListener.cpp \
../generated/SiddhiqlLexer.cpp \
../generated/SiddhiqlListener.cpp \
../generated/SiddhiqlParser.cpp 

OBJS += \
./generated/SiddhiqlBaseListener.o \
./generated/SiddhiqlLexer.o \
./generated/SiddhiqlListener.o \
./generated/SiddhiqlParser.o 

CPP_DEPS += \
./generated/SiddhiqlBaseListener.d \
./generated/SiddhiqlLexer.d \
./generated/SiddhiqlListener.d \
./generated/SiddhiqlParser.d 


# Each subdirectory must supply rules for building sources it contributes
generated/%.o: ../generated/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/kiroshkumar/eclipse-lat-workspace/StreamProcessor" -I"/home/kiroshkumar/eclipse-lat-workspace/StreamProcessor/generated" -I/usr/local/include/antlr4-runtime -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


