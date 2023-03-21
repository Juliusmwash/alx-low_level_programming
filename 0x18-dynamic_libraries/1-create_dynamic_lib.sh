#!/bin/bash
gcc -FPIC -c *.c
gcc -shared -o liball.so *.o
