#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "SiddhiqlLexer.h"
#include "SiddhiqlParser.h"
#include "SiddhiqlBaseListener.h"
#include "Translator.h"
#include "TranslatorVisitor.h"
using namespace antlrcpp;
using namespace antlr4;
using namespace std;


int main ( int argc, const char *args[]){
    ifstream stream;
    stream.open("/home/tharsanan/Tharsanan/FYP/Stream-Processor/sample.exec");
    ANTLRInputStream input(stream);
    SiddhiqlLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SiddhiqlParser parser(&tokens);

    tree::ParseTree *Tree = parser.siddhi_app();
    Translator listener;
    //tree::ParseTreeWalker::DEFAULT.walk(&listener, Tree);

    ifstream stream1;
    stream1.open("/home/tharsanan/Tharsanan/FYP/Stream-Processor/sample.exec");
    ANTLRInputStream input1(stream1);
    SiddhiqlLexer lexer1(&input1);
    CommonTokenStream tokens1(&lexer1);
    SiddhiqlParser parser1(&tokens1);
    TranslatorVisitor translatorVisitor;
    cout << "\n visiting starts \n";
    SiddhiqlParser :: Siddhi_appContext * visitTree = parser1.siddhi_app();
    translatorVisitor.visitSiddhi_app(visitTree);

    std::cout << "AppName : " << translatorVisitor.appName;
    std::cout << "Annotation : " << translatorVisitor.definitionStreams[1].annotation.getName();
    return 0;
}