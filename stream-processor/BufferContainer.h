#ifndef STREAM_PROCESSOR_BUFFERCONTAINER_H
#define STREAM_PROCESSOR_BUFFERCONTAINER_H
#include "common.h"
#include "Buffer.h"
#include "iostream"
#include "Executor.h"
#include "BufferLocker.h"

class BufferContainer {
public : 
BufferContainer();
	void pushWeight1Buffer(int value);
	int getFromWeight1Buffer(int consumerIndex);
	void pushWeight2Buffer(int value);
	int getFromWeight2Buffer(int consumerIndex);
	void processLogic0();
	void processLogic1();
	void processLogic2();
	void executeProcess(int option);
	int getFromWeight1OutputBuffer();
	void pushWeight1OutputBuffer(int value);
	long getFromTotalWeight2OutputBuffer();
	void pushTotalWeight2OutputBuffer(long value);
	long getFromTotalWeight3OutputBuffer();
	void pushTotalWeight3OutputBuffer(long value);
	Buffer<int> weight1Buffer;
	Buffer<int> weight2Buffer;
	static mutex mutexForPopPushLock[constants::inputAttributeCount];
	Buffer<int> weight1OutputBuffer;
	Buffer<long> totalWeight2OutputBuffer;
	Buffer<long> totalWeight3OutputBuffer;
};

#endif