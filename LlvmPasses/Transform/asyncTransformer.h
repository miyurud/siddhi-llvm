//
// Created by kiroshkumar on 19/08/19.
//

#ifndef COST_PASS_ASYNCTRANSFORMER_H
#define COST_PASS_ASYNCTRANSFORMER_H


#include "llvm/IR/Module.h"
#include "llvm/IR/Argument.h"
#include "llvm/IR/IRBuilder.h"
#include <cxxabi.h>
#include <llvm/IR/CallSite.h>
#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/InstIterator.h"
#include <llvm/Support/Debug.h>
#include "llvm/Transforms/Utils/BasicBlockUtils.h"
#include <stack>
#include <fstream>

using namespace llvm;
namespace {
    struct Transformer : public ModulePass {
        static char ID;

        Transformer() : ModulePass(ID) {}
        void getFunctions(std::vector<std::string> &functions);
        bool runOnModule(Module &M) override;


    };

}


#endif //COST_PASS_ASYNCTRANSFORMER_H
