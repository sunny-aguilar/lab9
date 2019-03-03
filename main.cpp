/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 3, 2019
** Description:     This lab implements linear data structures using
**                  STL containers "stack" and "queue."
**
**                  algorithms. Text files are used to retrieve
**                  integer values which are stored in arrays and
**                  searched for a user-entered value. After the
**                  search is done, the arrays are sorted in
**                  ascending order. Once the arrays are sorted, text
**                  files are outputted with the sorted values.
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