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
	void pushWeight1Buffer(string value);
	string getFromWeight1Buffer(int consumerIndex);
	void pushWeight2Buffer(string value);
	string getFromWeight2Buffer(int consumerIndex);
	void pushWeight3Buffer(string value);
	string getFromWeight3Buffer(int consumerIndex);
	void pushWeight4Buffer(string value);
	string getFromWeight4Buffer(int consumerIndex);
	void processLogic0();
	void processLogic1();
	void processLogic2();
	void processLogic3();
	void executeProcess(int option);
	int getFromTotalWeight1OutputBuffer();
	void pushTotalWeight1OutputBuffer(int value);
	int getFromTotalWeight2OutputBuffer();
	void pushTotalWeight2OutputBuffer(int value);
	int getFromTotalWeight3OutputBuffer();
	void pushTotalWeight3OutputBuffer(int value);
	int getFromTotalWeight4OutputBuffer();
	void pushTotalWeight4OutputBuffer(int value);
	Buffer<string> weight1Buffer;
	Buffer<string> weight2Buffer;
	Buffer<string> weight3Buffer;
	Buffer<string> weight4Buffer;
	static mutex mutexForPopPushLock[constants::inputAttributeCount];
	Buffer<int> totalWeight1OutputBuffer;
	Buffer<int> totalWeight2OutputBuffer;
	Buffer<int> totalWeight3OutputBuffer;
	Buffer<int> totalWeight4OutputBuffer;
};

#endif