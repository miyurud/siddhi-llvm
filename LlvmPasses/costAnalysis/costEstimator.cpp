//
// Created by kiroshkumar on 03/08/19.
//

#include "costEstimator.h"

char LlvmSP::Cost::ID = 0;



void LlvmSP::Cost::getCost(Function *FI, int &FunCost) {
    int tempCount = 0;
    for (BasicBlock &bb : *FI) {
        for (Instruction &i: bb) {
            tempCount++;
            if (llvm::isa<llvm::CallInst>(i) ||
                llvm::isa<llvm::InvokeInst>(i)) {
//                errs() << "Im a Call Instruction!\n";
            } else if (llvm::isa<llvm::AllocaInst>(i) ||
                       llvm::isa<llvm::LoadInst>(i) ||
                       llvm::isa<llvm::StoreInst>(i) ||
                       llvm::isa<llvm::AtomicCmpXchgInst>(i) ||
                       llvm::isa<llvm::AtomicRMWInst>(i)) {
//                errs() << "Memory access/addressing Instruction!\n";
            } else if (llvm::isa<llvm::BinaryOperator>(i)) {
//                errs() << "binary Instruction!\n";
            } else if (llvm::isa<llvm::ExtractElementInst>(i)
                       || llvm::isa<llvm::InsertElementInst>(i)
                       || llvm::isa<llvm::ShuffleVectorInst>(i)) {
//                errs() << "vector Instruction!\n";
            } else if (llvm::isa<llvm::ExtractValueInst>(i) ||
                       llvm::isa<llvm::InsertValueInst>(i)) {
//                errs() << " Aggregate Instruction!\n";
            } else {
//                errs() << "some other Instruction!\n";
            }
        }
    }
    //TODO:get annotation information in to cost model

    FunCost = tempCount;
//    errs() << FunCost << " : cost\n";
}

void LlvmSP::Cost::getCallsList(Function &F, Module &M, int &FunTCost) {
    std::deque<std::string> FunctionList;
    FunctionList.clear();
    FunctionList.push_back(F.getName());
    int totalCost = 0;
    while (!FunctionList.empty()) {
        int cost = 0;
        std::string funName = FunctionList.front();
//        errs() << funName << "Fuction taken \n";
        Function *func = M.getFunction(funName);
        getCost(func, cost);
        totalCost += cost;
//        errs() << totalCost << " -total cost now";
//        errs() << FunctionList.size() << "!\n";
        FunctionList.pop_front();
        for (BasicBlock &bb : *func) {
            for (Instruction &i: bb) {
                //callsite helps us extract if call/invoke instruction
                CallSite cs(&i);
                // Check whether the instruction is actually a call
                if (!cs.getInstruction()) {
                    continue;
                }
                Value *called = cs.getCalledValue()->stripPointerCasts();
                if (Function *f = dyn_cast<Function>(called)) {
                    FunctionList.push_back(f->getName());
//                    errs() << "found call instruction";
                }
            }
        }
    }
    FunTCost = totalCost;
    FunctionList.clear();
}


void LlvmSP::Cost::writeResults(std::map<std::string, bool> &results) {
    std::ofstream outfile("results.txt");
    std::map<std::string, bool >::iterator i = results.begin();
    std::map<std::string, bool >::iterator e = results.end();
    while (i != e) {
        outfile << i->first << " " << i->second << std::endl;
        i++;
    }
    outfile.close();
}

void LlvmSP::Cost::decideTransform(std::map<std::string, int> &results , std::map<std::string, bool > &outputList) {
    const int thresholdCost = 0;
    int cost;
//TODO:determine final threshold value after experiments
    for (auto const &x : results) {
        cost = x.second;
        if (cost > thresholdCost) { //TODO:  && consider annotations
            outputList[x.first] = true;
        } else{
            outputList[x.first] = false;
        }
    }
}


void LlvmSP::Cost::getFunctions(std::vector<std::string> &functions) {
    std::ifstream inFile;
    inFile.open("input.txt");
    std::string funcName;
    if (!inFile) {
        errs() << "Unable to open file";
        exit(1);
    }
    while (inFile >> funcName) {
        functions.push_back(funcName);
    }
    inFile.close();
}


bool LlvmSP::Cost::runOnModule(Module &M) {
    static std::map<std::string, int> costListPrep;
    static std::map<std::string, bool> resultsList;
    static std::vector<std::string> inputFunctionList;
    getFunctions(inputFunctionList);
    //iterating through functions and find our required functions
    Module::FunctionListType &functions = M.getFunctionList();
    for (Module::FunctionListType::iterator FI = functions.begin(), FE = functions.end(); FI != FE; ++FI) {
        bool isFound = false;
        for (auto const &x : inputFunctionList) {
            if (FI->getName().contains(x)) {
                costListPrep[FI->getName()] = 0;
                isFound = true;
            }
        }
        if (isFound) {
            int totalFunCost = 0;
            errs() << FI->getName();
            getCallsList(*FI, M, totalFunCost);
            costListPrep[FI->getName()] = totalFunCost;
        }
    }
    std::map<std::string, int>::iterator i = costListPrep.begin();
    std::map<std::string, int>::iterator e = costListPrep.end();
    while (i != e) {
        errs() << i->first << ": " << i->second << "\n";
        i++;
    }
    errs() << "\n";
    decideTransform(costListPrep , resultsList);
    writeResults(resultsList);
    costListPrep.clear();
    return false;
}


static RegisterPass<LlvmSP::Cost> X("cost", "costAnalysis", false, true);

