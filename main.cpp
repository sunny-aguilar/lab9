/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 3, 2019
** Description:     This lab implements linear data structures using
**                  STL containers "stack" and "queue." The buffer is
**                  implemented using the STL queue container. An
**                  STL stack container is used to help build a
**                  palindrome.
*********************************************************************/
#include "stackQueue.hpp"
#include <iostream>
#include <ctime>

int main() {
    auto seed = static_cast<unsigned int>(time(nullptr));
    srand(seed);        // create random number generator
    StackQueue stl;     // create STL class instance
    stl.start();        // start program
    return 0;
}