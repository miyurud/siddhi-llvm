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
	void processLogic0();
	void executeProcess(int option);
	int getFromWeight1OutputBuffer();
	void pushWeight1OutputBuffer(int value);
	Buffer<int> weight1Buffer;
	static mutex mutexForPopPushLock[constants::inputAttributeCount];
	Buffer<int> weight1OutputBuffer;
};

#endif