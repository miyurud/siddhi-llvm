#include "OutputEmitter.h"
OutputEmitter::OutputEmitter(){
}void OutputEmitter::emitData(BufferContainer* bufferContainer){
int totalWeight1 = bufferContainer->getFromTotalWeight1OutputBuffer();
int totalWeight2 = bufferContainer->getFromTotalWeight2OutputBuffer();
int totalWeight3 = bufferContainer->getFromTotalWeight3OutputBuffer();
int totalWeight4 = bufferContainer->getFromTotalWeight4OutputBuffer();
//cout<<totalWeight1 << " " <<  totalWeight2 << " " << totalWeight3 << " " << totalWeight4 << "\n" ;
PerformanceMonitor::getElapsedTime(totalWeight1);
//PerformanceMonitor::getAvgTime(0);
}
