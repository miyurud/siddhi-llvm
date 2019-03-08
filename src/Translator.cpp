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

