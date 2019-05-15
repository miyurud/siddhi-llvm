#ifndef STREAM_PROCESSOR_EXECUTOR_H
#define STREAM_PROCESSOR_EXECUTOR_H
#include "common.h"
#include "ExecutorCreator.h"
#include "string"

using namespace std;

class Executor {
public : 
Executor();
	static void executeTotalWeight1(string weight1);
	static void executeTotalWeight2(string weight2);
	static void executeTotalWeight3(string weight3);
	static void executeTotalWeight4(string weight4);

    static void executeSync(string string1, string string2, string string3, string string4);
};

#endif