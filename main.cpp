#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "SiddhiqlLexer.h"
#include "SiddhiqlParser.h"
#include "SiddhiqlBaseListener.h"

using namespace antlrcpp;
using namespace antlr4;
using namespace std;

class CustomListener : public SiddhiqlBaseListener {
public:

    void enterSiddhi_app(SiddhiqlParser::Siddhi_appContext *) override {
        cout << "enter app" << "\n";
    }

    void enterExecution_element(SiddhiqlParser::Execution_elementContext * /*ctx*/) override {
        cout << "enter exec" << "\n";
    }

};

int main(int argc, const char *args[]) {
    ifstream stream;
    stream.open("/home/kiroshkumar/CLionProjects/Stream-Processor/sample.exec");
    ANTLRInputStream input(stream);
    SiddhiqlLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SiddhiqlParser parser(&tokens);

    tree::ParseTree *tree = parser.siddhi_app();
    CustomListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    return 0;
}