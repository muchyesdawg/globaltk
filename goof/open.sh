#!/bin/zsh
nvim main.cpp
g++ binManip.cpp main.cpp
./a.out
echo $?
