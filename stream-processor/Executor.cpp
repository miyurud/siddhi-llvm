#include "Executor.h"
Executor::Executor(){
}void Executor::executeWeight1(int weight1){
ExecutorCreator::getBufferContainer()->pushWeight1OutputBuffer(weight1);
}
