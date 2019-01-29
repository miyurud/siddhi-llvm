#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "SiddhiqlLexer.h"
#include "SiddhiqlParser.h"
#include "SiddhiqlBaseListener.h"

using namespace antlrcpp;
using namespace antlr4;
using namespace std;

int main() {
    std::ifstream stream;
    stream.open("sample.siddhiql");

    ANTLRInputStream input(stream);
    SiddhiqlLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SiddhiqlParser parser(&tokens);
    return 0;
}