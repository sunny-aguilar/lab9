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
** Description:     desc
*********************************************************************/
void StackQueue::start() {
    bool runProgram = true;
    menu.mainMenu();
    do {
        switch (menu.validateNumber(1,3)) {
            case 1:

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


/*********************************************************************
** Description:     desc
*********************************************************************/


/*********************************************************************
** Description:     desc
*********************************************************************/


