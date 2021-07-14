// Screen.h
// Screen class definition. Represents the screen of the ATM.
#ifndef SCREEN_H
#define SCREEN_H

#include <string>

class Screen
{

public:
    void displayMessage(std::string) const;  // output a message
    void displayMessageLine(std::string) const;  // output message with newline
    void displayDollarAmount(double) const;  // output a dollar amount

};  // end class Screen

#endif  // SCREEN_H
