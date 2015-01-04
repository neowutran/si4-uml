#ifndef _COMMANDE_FIGER_H
#define _COMMANDE_FIGER_H

#include <iostream>
#include "CommandeRobot.h"
#include "Invocator.h"
#include "Robot.h"

class CommandeFiger : public CommandeRobot {

private:
    CommandeFiger() {


    }

public:
    CommandeFiger(string name) : CommandeRobot(name) {

    }


    CommandeRobot *virtualConstructor(Invocator &invocator) {
        return new CommandeFiger();
    }

    void execute(Robot &r) {
        try {
            r.figer();
        } catch (...) {
            cout << "Action impossible" << endl;
        }

    }

};

CommandeFiger *commandeFiger = new CommandeFiger("FIGER");
#endif
