/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 3, 2019
** Description:     StackQueue class holds the
**                  for the program. The menu class also holds the
**                  user input validation function. The STL containers
 *                  for the stack and queue are implemented by
 *                  calling the queue and stack libraries.
*********************************************************************/
#ifndef STACKQUEUE_HPP
#define STACKQUEUE_HPP

#include "menu.hpp"
#include <queue>                    // Queue in STL
#include <stack>                    // Stack in STL
#include <string>
#include <cstring>
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
    void bufferAverageLength(int round);
    // stack functions
    void stackOps();
    void getUserString();
    void addString();
    void showStack(stack<char> s);
    void popStack();

private:
    queue <int> myQueue;
    stack <char> myStack;
    Menu menu;
    int queueRounds;
    int frontChance;
    int endChance;
    int N;
    unsigned long bufferSize;
    double averageLength;
    char myCString[30];
};

#endif // STACKQUEUE_HPP