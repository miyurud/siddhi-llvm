//
// Created by tharsanan on 4/17/19.
//

#include "ExecutorCreator.h"

int main (){
//    BufferLocker::prepareUniqueLocks();
    ExecutorCreator* executorCreator = new ExecutorCreator();
    executorCreator->createThreads(executorCreator);
}


//if(weight1 == 99999){
//PerformanceMonitor::getElapsedTime();
//cout<<totalWeight2<<"\n";
//}