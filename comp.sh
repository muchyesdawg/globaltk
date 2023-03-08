#!/bin/zsh
clear
cd bin
g++ ../*.cc -c
g++ *.o -o a
cd ..
./bin/a