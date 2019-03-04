/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 3, 2019
** Description:     Menu class holds the main menu and user prompts
**                  for the program. The menu class also holds the
**                  user input validation function.
*********************************************************************/
#include "menu.hpp"

void Menu::mainMenu() {
    cout << " STL CONTAINERS - QUEUE AND STACK\n";
    cout << "+--------------------------------------------------+\n";
    cout << " Choose from the following:\n";
    cout << " 1. Test the Buffer \n";
    cout << " 2. Create a Palindrome\n";
    cout << " 3. Exit Program\n";
    cout << " >> ";
}

/*********************************************************************
** Description:     displays exit message for program
*********************************************************************/
void Menu::menuExit() {
    cout << "Now exiting the program, goodbye\n";
}

/*********************************************************************
** Description:     prompts the user for the number of rounds to be
**                  simulated
*********************************************************************/
void Menu::menuQueueRounds() {
    cout << " How many rounds will be simulated?\n";
    cout << "+--------------------------------------------------+\n";
    cout << " >> ";
}

/*********************************************************************
** Description:     prompts user to enter the percent chance to put a
**                  randomly generated number at the front of bugger
*********************************************************************/
void Menu::menuQueueFront() {
    cout << " Enter a percent chance for FRONT (i.e. 25 = 25%)\n";
    cout << "+--------------------------------------------------+\n";
    cout << " >> ";
}

/*********************************************************************
** Description:     prompts user to enter the percent chance to put a
**                  randomly generated number at the end of bugger
*********************************************************************/
void Menu::menuQueueEnd() {
    cout << " Enter a percent chance for END (i.e. 45 = 45%)\n";
    cout << "+--------------------------------------------------+\n";
    cout << " >> ";
}







/*********************************************************************
** Description:     general validator where the parameters are the
**                  min and max numbers acceptable
*********************************************************************/
int Menu::validateNumber(int min, int max) {
    char choice[100];
    int validatedChoice = 0;
    std::stringstream convert;
    bool tooLong = false;
    bool isNotDigit = false;
    bool notInRange = false;

    // determine # of digits in max value acceptable
    long unsigned length = std::to_string(max).length();

    do {
        // store user input
        cin.getline(choice, 100);

        // reject any input that has more than digits than max parameter
        tooLong = false;
        if (strlen(choice) > length) {
            tooLong = true;
            cout << "enter only one number!\n";
        }

        // check if all characters entered are digits
        isNotDigit = false;
        for (unsigned i = 0; i < strlen(choice); i++) {
            // if digit is not a digit, then set it true so that
            // loop will repeat
            if (!isdigit(choice[i])) {
                isNotDigit = true;
            }
        }
        if (isNotDigit) {
            // prompt user to enter only digits
            cout << "enter only digits!\n";
        }

        // check if characters entered are within range
        notInRange = false;
        if (!isNotDigit && !tooLong) {
            convert.clear();
            convert << choice;
            convert >> validatedChoice;

            if (validatedChoice < min || validatedChoice > max) {
                notInRange = true;
                cout << "enter a number between "
                     << min << " or " << max << endl;
            }
        }
    } while (tooLong || isNotDigit || notInRange);

    return validatedChoice;
}