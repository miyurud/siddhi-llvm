#include "OutputEmitter.h"
OutputEmitter::OutputEmitter(){
}void OutputEmitter::emitData(BufferContainer* bufferContainer){
long totalWeight2 = bufferContainer->getFromTotalWeight2OutputBuffer();
long totalWeight3 = bufferContainer->getFromTotalWeight3OutputBuffer();
long totalWeight4 = bufferContainer->getFromTotalWeight4OutputBuffer();
int weight1 = bufferContainer->getFromWeight1OutputBuffer();
    if(weight1 == 999999){
        PerformanceMonitor::getElapsedTime();
        cout<<totalWeight2<<"\n";
    }
}
