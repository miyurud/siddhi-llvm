/**
Copyright 2019 Siddhi-LLVM Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <iostream>
#include <fstream>
#include <thread>
#include <stream-processor-generator/src/query/ArithmaticExecutorGenerator.h>
#include "antlr4-runtime.h"
#include "SiddhiqlLexer.h"
#include "SiddhiqlParser.h"
#include "SiddhiqlBaseListener.h"
#include "stream-processor-generator/src/antlr/TranslatorVisitor.h"
#include "stream-processor-generator/src/antlr/TranslatorVisitor.h"
#include "queue"
#include "BufferGenerator.h"
#include "DetailContainerCreator.h"
#include "OutputEmitterGenerator.h"
#include "ProcessedThreadHandlerCreator.h"


using namespace antlrcpp;
using namespace antlr4;
using namespace std;

int main ( int argc, const char *args[]){
    ifstream stream1;
    stream1.open("/home/tharsanan/CLionProjects/ProducerConsumer/sample.exec");
    ANTLRInputStream input1(stream1);
    SiddhiqlLexer lexer1(&input1);
    CommonTokenStream tokens1(&lexer1);
    SiddhiqlParser parser1(&tokens1);
    TranslatorVisitor translatorVisitor;
    SiddhiqlParser :: Siddhi_appContext * visitTree = parser1.siddhi_app();
    translatorVisitor.visitSiddhi_app(visitTree);
    AttributeTypeMapper attributeTypeMapper;

    for (int j = 0; j < TranslatorVisitor::getInputOutputMapperList().size(); ++j) {
        TranslatorVisitor::getInputOutputMapperFromList(j)->getLogicString();
    }

    BufferGenerator bufferGenerator;
    string argString = "";
    int count  = 0;

    for (int k = 0; k < AttributeTypeMapper::getInputAttributeNameVector().size(); ++k) {
        if(count == 0){
            argString += AttributeTypeMapper::getInputAttributeNameVector()[k] + " " + AttributeTypeMapper::getTypeForInputAttribute(AttributeTypeMapper::getInputAttributeNameVector()[k]);
        }
        else{
            argString += + "," + AttributeTypeMapper::getInputAttributeNameVector()[k] + " " + AttributeTypeMapper::getTypeForInputAttribute(AttributeTypeMapper::getInputAttributeNameVector()[k]);
        }
        count++;
    }

//    for(auto const& x : AttributeTypeMapper::getInputAttributeMap()){
//        if(count == 0){
//            argString += x.first + " " + x.second;
//        }
//        else{
//            argString += + "," + x.first + " " + x.second;
//        }
//        count++;
//    }
    bufferGenerator.readArgs(argString);
    for (int i = 0; i < TranslatorVisitor::getInputOutputMapperList().size(); ++i) {
        bufferGenerator.iomappers.push_back(TranslatorVisitor::getInputOutputMapperList()[i]);
    }
    bufferGenerator.createViaFileCreator();
    DetailContainerCreator detailContainerCreator;
    detailContainerCreator.create();

    ArithmaticExecutorGenerator::create();
    OutputEmitterGenerator outputEmitterGenerator;
    outputEmitterGenerator.createOutputEmitter();
    ProcessedThreadHandlerCreator::createProcessedThreadHandler();
    return 0;
}
//
//@App:name("CargoWeightApp")
//
//define stream CargoStream (weight1 int, weight2 int, weight3 int, weight4 int);
//
//@sink(type='log', prefix='LOGGER')
//define stream OutputStream(weight1 int, totalWeight2 long, totalWeight3 long, totalWeight4 long);
//
//@info(name='CargoWeightQuery')
//from CargoStream
//select weight1, sum(weight2) as totalWeight2, sum(weight3) as totalWeight3, sum(weight4) as totalWeight4
//insert into OutputStream;






//@App:name("CargoWeightApp")
//
//define stream CargoStream (weight1 int, weight2 int);
//
//@sink(type='log', prefix='LOGGER')
//define stream OutputStream(weight1 int, totalWeight2 long, totalWeight3 long);
//
//@info(name='CargoWeightQuery')
//from CargoStream
//select weight1, sum(weight1) as totalWeight2, sum(weight2) as totalWeight3
//insert into OutputStream;






//@App:name("CargoWeightApp")
//
//define stream CargoStream (weight1 int);
//
//@sink(type='log', prefix='LOGGER')
//define stream OutputStream(weight1 int);
//
//@info(name='CargoWeightQuery')
//from CargoStream
//select weight1
//insert into OutputStream;
