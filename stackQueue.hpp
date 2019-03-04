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
#include <string>
using std::queue;
using std::stack;
using std::string;

class StackQueue {
public:
    StackQueue();
    ~StackQueue();
    void start();

    // queue/buffer functions
    void queueOps();
    void bufferSetup();
    int generateRandom(int max);
    void appendNumber();
    void removeNumber();
    void showBuffer(queue <int> q);
    void bufferLength();
    void bufferAverageLenght(int round);

    // stack functions
    void stackOps();
    void getUserString();
    void addString();
    void showStack();

private:
    queue <int> myQueue;
    stack <string> myStack;
    Menu menu;
    int queueRounds;
    int frontChance;
    int endChance;
    int N;
    int bufferSize;
    double averageLength;

    string userString;

};

#endif // STACKQUEUE_HPP