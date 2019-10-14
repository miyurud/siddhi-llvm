Environment::

    1.Architecture:        x86_64
    2.CPU op-mode(s):      32-bit, 64-bit
    3.LLVM 6.0


Running the pass::

    1.Build the source 
    
    2.specify task functions in input.txt
    
    3.Run the pass with opt->
        1.Cost pass
        opt -load <libcostAnalysis.so> -cost < final.bc > /dev/null
        2. Transformation pass
        opt -load <libTransformer.so> -transform < final.bc > optimizedfinal.bc

        
        
For testing::

    1.generate call graph ->
        opt -dot-callgraph test.bc
    2.generate readable bitcode(.ll)
         llvm-dis optimizedfinal.bc


    