//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.hpp"
#include <iostream>

//
// Should greet the user into the program
//
const char * trog::greet()
{
    return "Hello, C++ Developer.";
} // end of func greet

//
// overview:
//  This is where all Troglobyte apps start there operation.
//
//  We can also give command-line arguments in C++. CLI
//  arguments are given after the name of the program in
//  command-line shell of Operating Systems.
//
// function arguments:
// -> argc: stores the number of command-line arguments passed in.
// -> argv: array of character pointers listing all the arguments.
auto foundation(int argc, char **argv) -> int
{
    std::cout << trog::greet() << std::endl;
    return 0;
} // end of func foundation
