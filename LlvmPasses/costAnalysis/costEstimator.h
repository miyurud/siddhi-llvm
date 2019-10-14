//
// Created by kiroshkumar on 06/08/19.
//

#ifndef COST_PASS_COSTESTIMATOR_H
#define COST_PASS_COSTESTIMATOR_H


#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/Instructions.h"
#include <map>
#include <vector>
#include <deque>
#include <llvm/IR/CallSite.h>
#include <iostream>
#include <fstream>
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ScalarEvolution.h"


using namespace llvm;
namespace LlvmSP {

    struct Cost : public ModulePass {

        static char ID;

        Cost() : ModulePass(ID) {}

        void getCost(Function *F, int &FunCost);

        void getCallsList(Function &F, Module &M, int &FunTCost);

        void writeResults(std::map<std::string, bool > &results);

        void decideTransform(std::map<std::string, int> &results ,  std::map<std::string, bool > &outputList);

        void getFunctions(std::vector<std::string> &functions);

        bool runOnModule(Module &M) override;

    };

}


#endif //COST_PASS_COSTESTIMATOR_H
