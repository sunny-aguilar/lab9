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
    N{0} {}

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

    // generate a random number from 1 - 1000
    N = generateRandom(1000);


}

/*********************************************************************
** Description:     this functions gathers the data from the user to
**                  set up the initial buffer parameters. It sets up
**                  the number of rounds to be simulated and the
**                  rquired percentages.
*********************************************************************/
void StackQueue::bufferSetup() {
    int remainingPercent = 0;

    menu.menuQueueRounds();
    queueRounds = menu.validateNumber(1, 1000);
    menu.menuQueueFront();
    frontChance = menu.validateNumber(0, 99);
    remainingPercent = 100 - frontChance;
    menu.menuQueueEnd(remainingPercent);
    endChance = menu.validateNumber(0,remainingPercent);
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

}

/*********************************************************************
** Description:     desc
*********************************************************************/
void StackQueue::removeNumber() {

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


/*********************************************************************
** Description:     desc
*********************************************************************/

