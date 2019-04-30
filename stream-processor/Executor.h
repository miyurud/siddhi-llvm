#ifndef STREAM_PROCESSOR_EXECUTOR_H
#define STREAM_PROCESSOR_EXECUTOR_H
#include "common.h"
#include "Sum.h"
#include "Sum.h"
#include "Sum.h"
#include "ExecutorCreator.h"

class Executor {
public : 
Executor();
	static void executeWeight1(int weight1);
	static void executeTotalWeight2(int weight2);
	static void executeTotalWeight3(int weight3);
	static void executeTotalWeight4(int weight4);
	static Sum<long> sumWeight2TotalWeight2;
	static Sum<long> sumWeight3TotalWeight3;
	static Sum<long> sumWeight4TotalWeight4;
};

#endif