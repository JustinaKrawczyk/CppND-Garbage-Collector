# CppND-Garbage-Collector

The garbage collector is a version of a smart pointer and responsible for correct allocation and deallocation of memory, as garbage collectors known from other programming languages like Java. The implementation gives a hint on how pointers and references are used in C++. 

## Dependencies

To run this program the ``` ncurses ``` lib has to be installed on your system. 

To install ``` ncurses ``` lib on Linux system type ``` sudo apt install libncurses5-dev libncursesw5-dev ```.


## Build and Execute

 * You can use the ``` make ``` script to build this project. 

   Type ``` ./make ``` to execute the bash script.

* Otherwise you can use the build command from the make file to build this project and run it manually.

  1. Type ``` g++ -o compiled.o main.cpp -lncurses -std=c++1y -Wall ``` on the console to build the execution file ```compiled.o```.
  2. To run the program just type ``` ./compiled.o ```
  
  
 ## More Information
 
 [Udacity C++ Nanodegree program](https://github.com/udacity/CppND-Garbage-Collector)
 
 ## License
 
 [MIT](https://opensource.org/licenses/MIT)
  





