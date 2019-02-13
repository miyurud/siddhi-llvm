//
// Created by tharsanan on 1/31/19.
//

#include "Translator.h"
#include <iostream>
#include "SiddhiqlParser.h"
#include "SiddhiqlBaseListener.h"

using namespace std;

void Translator::enterSiddhi_app(SiddhiqlParser::Siddhi_appContext * ctx)  {
    cout << ctx->getText();
    cout << "\n";
    cout << ctx->children.at(0)->getText();
    cout << "\n";
    cout << ctx->children.at(0)->children.at(0)->getText();
}
void Translator::enterExecution_element(SiddhiqlParser::Execution_elementContext * ctx)  {
    cout <<"\n"<< ctx->getText();
}

void Translator::enterApp_annotation(SiddhiqlParser::App_annotationContext *ctx) {
    cout << "enter app_annotation.\n";
    for (int i = 0; i < ctx->children.size(); i++) {
        cout << ctx->children.at(i)->getText() << "\n";
    }
}

