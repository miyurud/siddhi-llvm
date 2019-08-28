#ifndef STREAM_PROCESSOR_DETAILCONTAINER_H
#define STREAM_PROCESSOR_DETAILCONTAINER_H
#include "common.h"

class DetailContainer {
public : 
DetailContainer();
	static void setExecutionFlag(bool value);
	static bool getExecutionFlag();
	static int getInputAttributeCount();
	static int getDependentConsumerCountForInput(int input);
	static int getNumberOfOutputAttributes();
	static int numberOfOutputAttributes;
	static int inputAttributeCount;
	static int consumerCountForInput[];
	static bool executionFlag;
};
enum constants{
inputAttributeCount = 2};

#endif