#!/usr/bin/env bash
cmake clean .
cmake --build . --target siddhi-llvm -- -j 2
