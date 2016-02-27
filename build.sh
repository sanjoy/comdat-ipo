#!/bin/bash

CLANG=clang++
COMPILE_OPTS='-c -Wall -Werror -O3'

${CLANG} -v

${CLANG} ${COMPILE_OPTS} source-a.cpp -o source-a.o
${CLANG} ${COMPILE_OPTS} source-b.cpp -o source-b.o
${CLANG} ${COMPILE_OPTS} main.cpp     -o main.o

${CLANG} ${COMPILE_OPTS} source-a.cpp -emit-llvm -S -o source-a.ll
${CLANG} ${COMPILE_OPTS} source-b.cpp -emit-llvm -S -o source-b.ll
${CLANG} ${COMPILE_OPTS} main.cpp     -emit-llvm -S -o main.ll

${CLANG} main.o source-b.o source-a.o -o order-a && (./order-a || echo "order-a crashed")
${CLANG} main.o source-a.o source-b.o -o order-b && (./order-b || echo "order-b crashed")
${CLANG} source-a.o source-b.o main.o -o order-c && (./order-c || echo "order-c crashed")
