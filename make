#!/bin/bash

g++ -o compiled.o main.cpp -lncurses -std=c++1y -Wall 
#-Weffc++ -Winit-self 
./compiled.out
