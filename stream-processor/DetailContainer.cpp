#include "DetailContainer.h"
DetailContainer::DetailContainer(){
}int DetailContainer::numberOfOutputAttributes = 3;
int DetailContainer::inputAttributeCount = 2;
int DetailContainer::consumerCountForInput[] = {2,1};
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
