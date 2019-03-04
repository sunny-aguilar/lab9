/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 3, 2019
** Description:     StackQueue class holds the
**                  for the program. The menu class also holds the
**                  user input validation function.
*********************************************************************/
#include "stackQueue.hpp"

/*********************************************************************
** Description:     default constructor
*********************************************************************/
StackQueue::StackQueue() :
    queueRounds{0},
    frontChance{0},
    endChance{0},
    N{0},
    averageLength{0} {}

/*********************************************************************
** Description:     destructor
*********************************************************************/
StackQueue::~StackQueue() {}

/*********************************************************************
** Description:     this functions starts the program by showing the
**                  main menu and the options to test the buffer and
**                  to enter a palindrome. A user can also quit the
**                  program. After a user completes one of the menu
**                  operations, the main menu is displayed again for
**                  user convenience.
*********************************************************************/
void StackQueue::start() {
    bool runProgram = true;

    do {
        menu.mainMenu();
        switch (menu.validateNumber(1,3)) {
            case 1:
                queueOps();
                break;
            case 2:

                break;
            case 3:
                runProgram = false;
                menu.menuExit();
                break;
            default:
                cout << "Unable to determine your selection\n";
        }
    } while (runProgram);
}

/*********************************************************************
** Description:     desc
*********************************************************************/
void StackQueue::queueOps() {
    // set buffer parameters
    bufferSetup();

    int round = 0;
    while (round < queueRounds) {
        // generate a random number from 1 - 1000
        N = generateRandom(1000);

        // append a number
        appendNumber();

        // remove a number
        removeNumber();

        // output the values in the buffer
        showBuffer(myQueue);

        // output buffer length
        bufferLength();

        // output the average length of buffer


        round++;
    }

}

/*********************************************************************
** Description:     this functions gathers the data from the user to
**                  set up the initial buffer parameters. It sets up
**                  the number of rounds to be simulated and the
**                  required percentages.
*********************************************************************/
void StackQueue::bufferSetup() {
    menu.menuQueueRounds();
    queueRounds = menu.validateNumber(1, 1000);
    menu.menuQueueFront();
    frontChance = menu.validateNumber(0, 100);
    menu.menuQueueEnd();
    endChance = menu.validateNumber(0,100);
}

/*********************************************************************
** Description:     generates a random number from 1 to 1000 and
**                  returns it
*********************************************************************/
int StackQueue::generateRandom(int max) {
    int randomNum = 0;
    randomNum = rand() % max + 1;
    return randomNum;
}

/*********************************************************************
** Description:     desc
*********************************************************************/
void StackQueue::appendNumber() {
    int appendChance = generateRandom(100);

    if (appendChance <= frontChance) {
        myQueue.push(N);
    }
    else {
    }
}

/*********************************************************************
** Description:     desc
*********************************************************************/
void StackQueue::removeNumber() {
    int removeChance = generateRandom(100);

    if (removeChance <= endChance) {
        myQueue.pop();
    }
}

/*********************************************************************
** Description:     desc
*********************************************************************/
void StackQueue::showBuffer(queue <int> myQ) {
    queue <int> q = myQ;

    cout << "The values in the buffer are:";
    while (!q.empty()) {
        cout << "\t" << q.front();
        q.pop();
    }
    cout << endl;
}

/*********************************************************************
** Description:     desc
*********************************************************************/
void StackQueue::bufferLength() {
    cout << "Length of buffer " << myQueue.size() << endl;
}

/*********************************************************************
** Description:     desc
*********************************************************************/


/*********************************************************************
** Description:     desc
*********************************************************************/


/*********************************************************************
** Description:     desc
*********************************************************************/


/*********************************************************************
** Description:     desc
*********************************************************************/

