#!/bin/bash -eu
cd $SRC/synthetic-fuzz
$CC $CFLAGS -c vulnerable.c -o vulnerable.o
$CXX $CXXFLAGS $LIB_FUZZING_ENGINE fuzz_target.c vulnerable.o -o $OUT/fuzz_target
