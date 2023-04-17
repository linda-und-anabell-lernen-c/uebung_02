#!/bin/bash
mkdir build
gcc -Wall $1.c -o build/$1
./build/$1