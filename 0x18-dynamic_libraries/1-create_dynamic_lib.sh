#!/bin/bash
gcc -fPIC -c *.c
gcc -shard -Wl,-soname,liball.so -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
