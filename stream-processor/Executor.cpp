#include "Executor.h"
Executor::Executor(){
}void Executor::executeTotalWeight1(string weight1){
int count = 0 ; for ( char c : weight1 ) {
        if(c == 'l'){
        count ++;
        }
    }
    ExecutorCreator::getBufferContainer()->pushTotalWeight1OutputBuffer( count );
}
void Executor::executeTotalWeight2(string weight2){
int count = 0 ; for ( char c : weight2 ) {
        if(c == 'l'){
        count ++;
        }
    } ExecutorCreator::getBufferContainer()->pushTotalWeight2OutputBuffer( count ); 
}
void Executor::executeTotalWeight3(string weight3){
int count = 0 ; for ( char c : weight3 ) {
        if(c == 'l'){
        count ++;
        }
    } ExecutorCreator::getBufferContainer()->pushTotalWeight3OutputBuffer( count ); 
}
void Executor::executeTotalWeight4(string weight4){
int count = 0 ; for ( char c : weight4 ) {
        if(c == 'l'){
        count ++;
        }
    } ExecutorCreator::getBufferContainer()->pushTotalWeight4OutputBuffer( count ); 
}

void Executor::executeSync(string weight1, string weight2, string weight3, string weight4) {
//    PerformanceMonitor::setStart(0);
    int count = 0 ;
    for ( char c : weight1 ) {
        if(c == 'l'){
            count ++;
        }
    }
//    PerformanceMonitor::getAvgTime(0);
    int count1 = 0 ;
    for ( char c : weight2 ) {
        if(c == 'l'){
            count1 ++;
        }
    }
    int count3 = 0 ;
    for ( char c : weight3 ) {
        if(c == 'l'){
            count3 ++;
        }
    }
    int count4 = 0 ;
    for ( char c : weight4 ) {
        if(c == 'l'){
            count4 ++;
        }
    }

}
