/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 3, 2019
** Description:     Menu class holds the main menu and user prompts
**                  for the program. The menu class also holds the
**                  user input validation function.
*********************************************************************/
#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>
using std::string;
using std::setw;
using std::left;
using std::cin;
using std::cout;
using std::endl;

class Menu {
public:
    void mainMenu();
    void menuQueueRounds();
    void menuExit();
    int validateNumber(int min, int max);

private:

};


#endif //LAB9_MENU_HPP
