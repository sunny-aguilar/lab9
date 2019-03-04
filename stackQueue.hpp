/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 3, 2019
** Description:     StackQueue class holds the
**                  for the program. The menu class also holds the
**                  user input validation function.
*********************************************************************/
#ifndef STACKQUEUE_HPP
#define STACKQUEUE_HPP

#include "menu.hpp"
#include <queue>                    // Queue in STL
#include <stack>                    // Stack in STL
using std::queue;
using std::stack;


class StackQueue {
public:
    StackQueue();
    ~StackQueue();
    void start();
    void queueOps();
    void bufferSetup();
    int generateRandom(int max);
    void appendNumber();
    void removeNumber();
    void showBuffer();
    void bufferLength();

private:
    queue <int> myQueue;
    stack <int> myStack;
    Menu menu;
    int queueRounds;
    int frontChance;
    int endChance;
    int N;
};

#endif // STACKQUEUE_HPP