#ifndef STREAM_PROCESSOR_EXECUTOR_H
#define STREAM_PROCESSOR_EXECUTOR_H
#include "common.h"
#include "Sum.h"
#include "Sum.h"
#include "ExecutorCreator.h"

class Executor {
public : 
Executor();
	static void executeWeight1(int weight1);
	static void executeTotalWeight2(int weight1);
	static void executeTotalWeight3(int weight2);
	static Sum<long> sumWeight1TotalWeight2;
	static Sum<long> sumWeight2TotalWeight3;
};

#endif