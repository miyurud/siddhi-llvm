#include "Executor.h"
Executor::Executor(){
}Sum<long> Executor::sumWeight1TotalWeight2;
Sum<long> Executor::sumWeight2TotalWeight3;
void Executor::executeWeight1(int weight1){
ExecutorCreator::getBufferContainer()->pushWeight1OutputBuffer(weight1);
}
void Executor::executeTotalWeight2(int weight1){
ExecutorCreator::getBufferContainer()->pushTotalWeight2OutputBuffer(sumWeight1TotalWeight2.getSum(weight1));
}
void Executor::executeTotalWeight3(int weight2){
ExecutorCreator::getBufferContainer()->pushTotalWeight3OutputBuffer(sumWeight2TotalWeight3.getSum(weight2));
}
