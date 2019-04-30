#include "DetailContainer.h"
DetailContainer::DetailContainer(){
}int DetailContainer::numberOfOutputAttributes = 4;
int DetailContainer::inputAttributeCount = 4;
int DetailContainer::consumerCountForInput[] = {1,1,1,1};
bool DetailContainer::executionFlag = true;
void DetailContainer::setExecutionFlag(bool value){
executionFlag = value;
}
bool DetailContainer::getExecutionFlag(){
return executionFlag;
}
int DetailContainer::getInputAttributeCount(){
return inputAttributeCount;
}
int DetailContainer::getDependentConsumerCountForInput(int input){
return consumerCountForInput[input];
}
int DetailContainer::getNumberOfOutputAttributes(){
return numberOfOutputAttributes;
}
