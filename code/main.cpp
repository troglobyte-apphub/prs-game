//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.hpp"

//
// application foundation function is considered to
// to be the starting point for applications created
// and hosted at the Troglobyte AppHub.
//
// there should not be a reason for you to touch the
// main source file, begin your work in the program
// source file.
//
extern auto trog::foundation(int argc, char **argv) -> int;

//
// main is where program execution starts and foundation
// is where the magic begins. 
//
auto main(int argc, char **argv) -> int
{
    return trog::foundation(argc, argv);
} // end of function main
