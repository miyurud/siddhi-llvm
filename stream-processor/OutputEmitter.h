#ifndef STREAM_PROCESSOR_OUTPUTEMITTER_H
#define STREAM_PROCESSOR_OUTPUTEMITTER_H
#include "common.h"
#include "BufferContainer.h"

class BufferContainer;
class OutputEmitter {
public : 
OutputEmitter();
	void emitData(BufferContainer* bufferContainer);
};

#endif