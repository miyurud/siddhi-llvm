//
// Created by tharsanan on 4/13/19.
//

#include "ExecutorCreator.h"
BufferContainer* ExecutorCreator::bufferContainer = nullptr;

ExecutorCreator::ExecutorCreator(){
    numberOfOutputAttributes = DetailContainer::getNumberOfOutputAttributes();
}

void ExecutorCreator::run(int consumerIndex){
    while(DetailContainer::getExecutionFlag()){
        bufferContainer->executeProcess(consumerIndex);
    }
}
//
//void ExecutorCreator::tempFunc(){
//    PerformanceMonitor::getAvgTime(0);
//    string s1 = "ll";
//
//    string s = "hiiiiiiiiiiiii";
//        for (int j = 0; j < 100000; ++j) {
//            if (j == 99999) {
////                PerformanceMonitor::setStart(0);
//                bufferContainer->pushWeight1Buffer(
//                        s1);
//                bufferContainer->pushWeight2Buffer(
//                        s1);
//                bufferContainer->pushWeight3Buffer(
//                        s1);
//                bufferContainer->pushWeight4Buffer(
//                        s1);
////                PerformanceMonitor::getElapsedTime(2); // 50638 22305 89117 5858m  9018m
//            }
//            else {
//                bufferContainer->pushWeight1Buffer(
//                        s);
//                bufferContainer->pushWeight2Buffer(
//                        s);
//                bufferContainer->pushWeight3Buffer(
//                        s);
//                bufferContainer->pushWeight4Buffer(
//                        s);
//                //PerformanceMonitor::getAvgTime();
//            }
//        }
////        PerformanceMonitor::getElapsedTime(2);
//}

//hilllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllliiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiipppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp
//void ExecutorCreator::createThreads(ExecutorCreator* executorCreator){
//    bufferContainer = new BufferContainer();
//    thread t[numberOfOutputAttributes];
//    for (int i = 0; i < numberOfOutputAttributes; ++i) {
//        t[i] = std::thread(&ExecutorCreator::run, executorCreator, i);
//    }
//    thread th = thread(&ExecutorCreator::tempFunc, executorCreator);
//    thread outputThread = thread(&ExecutorCreator::outputThreadFunc,executorCreator);
//    for (int i = 0; i < numberOfOutputAttributes; ++i) {
//        t[i].join();
//    }
//    th.join();
//    outputThread.join();
//    delete bufferContainer;
//}

void ExecutorCreator::tempFunc(){
    PerformanceMonitor::getAvgTime(0);
    string s = "hiiiiiiiii";
    for (int j = 0; j < 100000; ++j) {
        Executor::executeSync(s,s,s,s);
//        PerformanceMonitor::getAvgTime(0);
    }
    PerformanceMonitor::getElapsedTime(2);

}

void ExecutorCreator::createThreads(ExecutorCreator* executorCreator){
    bufferContainer = new BufferContainer();
    thread th = thread(&ExecutorCreator::tempFunc, executorCreator);
    th.join();
    delete bufferContainer;

}




void ExecutorCreator::outputThreadFunc(){
    OutputEmitter outputEmitter;
    while(DetailContainer::getExecutionFlag()) {
        outputEmitter.emitData(bufferContainer);
    }
}





BufferContainer* ExecutorCreator::getBufferContainer() {
    return bufferContainer;
}
