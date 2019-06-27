#!/bin/bash

if [ -d llvm_O3 ]; then
	rm -rf llvm_O3
fi

mkdir llvm_O3
cd llvm_O3
clang++ -c -O3 -emit-llvm ../*.cpp		#compile cpp files with O3 opt
clang++ -c -O3 -emit-llvm ../functions/*.cpp	#compile cpp files inside functions with O3 opt
llvm-link *.bc -o final.bc
llc final.bc 	#convert bytecode into assembly
llvm-dis final.bc	#convert into llvm-ir
clang++ -pthread final.s
./a.out 1000 5

