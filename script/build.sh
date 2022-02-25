#!/bin/bash

if ! [[ -d bin ]]; then
    mkdir bin
fi

g++ -std=c++11 -O2 -Wall $1.cpp -o bin/$1