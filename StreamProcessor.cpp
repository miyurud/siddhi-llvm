//============================================================================
// Name        : StreamProcessor.cpp
// Author      : CodeChefs
// Version     : 0.1
// Copyright   :
// Description : LLVM based SP
//============================================================================

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
//	TODO: implement parent methods
public:

};

int main() {
	std::ifstream stream;
	stream.open("sample.siddhiql");

	ANTLRInputStream input(stream);
	SiddhiqlLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	SiddhiqlParser parser(&tokens);

	CustomListener listener;

	//TODO:do the walk

	return 0;
}
