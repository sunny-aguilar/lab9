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
StackQueue::StackQueue() {}

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
** Description:     this functions gathers the data from the user to
**                  set up the initial buffer parameters. It sets up
**                  the number of rounds to be simulated and the
**                  rquired percentages.
*********************************************************************/
void StackQueue::queueOps() {
    menu.menuQueueRounds();
    queueRounds = menu.validateNumber(1, 1000);

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


