#ifndef _INVOCATOR_H
#define _INVOCATOR_H

#include "CommandeRobot.h"

class Invocator {

public:
    Invocator() { }

    void read() {
        string command;
        cin >> command;

        cout << "Command read : " << command << endl;
        CommandeRobot* c = CommandeRobot::newCommandeRobot(command, *this);

        cout << "COMMAND = " << *c << endl;
    }

    int getInt() {
        int input;
        cin >> input;
        return input;
    }
    string getString() {
        string input;
        cin >> input;
        return input;
    }
};


#endif