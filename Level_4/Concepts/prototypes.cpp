// if you try to compile this file with the command g++ prototypes.cpp, you will get an error
// you need to compile the file with the command: " g++ prototypes.cpp my_computations.cpp "
// and you'll get the "a.out" file (you can already execute it, if you want)
// just use  " ./a.out "
// to rename it when compiling , you can use the command " g++ -o new_name prototypes.cpp my_computations.cpp "

#include <iostream>

// when we include a header file, we are telling the compiler to include the contents of the header file in the current file
// both the header file and the cpp file are compiled together

#include "my_computations.hpp"

using namespace std;

// the function print_triple_number is defined here, but declared in the header file
// a function protype is a declaration of a function that tells the compiler about the function's name, return type, and parameters
// it is used to tell the compiler that a function is defined later in the code

int main(){
    print_triple_number(4);
    return 0;
}
