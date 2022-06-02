//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.hpp"
#include <iostream>
#include <ctime>
#include <random>

//
// Should greet the user into the program
//
const char *trog::greet()
{
    return "Hello, C++ Developer.";
} // end of func greet

void result(int user, int computer)
{
    if (user == computer)
    {
        std::cout << "Draw!\n";
    }
    else if (user == 1 && computer == 3)
    {
        std::cout << "You Win!\n";
    }
    else if (user == 3 && computer == 2)
    {
        std::cout << "You Lose!\n";
    }
    else
    {
        std::cout << "Computer Wins!\n";
    }
}

void option(int user)
{
    std::string roc = "1) Rock\n";
    std::string pap = "2) Paper\n";
    std::string sci = "3) Scissors\n";

   switch (user)
    {
    case 1:
        std::cout << roc;
        break;
    case 2:
        std::cout << pap;
        break;
    case 3:
        std::cout << sci;
        break;
    default:
        std::cout << "Invaild Option\n";
    }
}

auto exits(int user) -> bool
{
    std::cout << "enter 0 to exit: ";
    std::cin >> user;
    std::system("clear");
    return (user == 0)? false : true;
}

void menu()
{
    std::cout << "Rock Paper Scissors!"           << std::endl;
    std::cout << "It's you againts the computer!" << std::endl;
    std::cout << "Choose: \n1) Rock\n2) Paper\n3)Scissors\n";
}

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
    srand((unsigned)time(nullptr));
    auto loop = true;
    auto computer = rand() % 3 + 1;
    auto user = 0;
    auto games = 3;

    //
    // we begin with a classic game loop, this
    // is where the fun begins and ends and we
    // won't stop running games of paper rock
    // scissors until the user ends the loop.
    //
    while (loop)
    {
        //
        // here we will play the game for a max of
        // three rounds each time the play would like
        // to play the game.
        //
        do
        {
            menu();
            std::cin >> user;

            std::cout << std::endl;
            std::cout << "You choose: ";
            option(user);

            std::cout << std::endl;
            std::cout << "Computer choose: ";
            option(computer);

            result(user, computer);
        } while (games); // end do while

        //
        // here we see if the player(s) would like to play
        // again, if so we just start over from the top
        // else we leave the game.
        //
        loop = exits(user);
    } // end while

    return 0;
} // end of func foundation
