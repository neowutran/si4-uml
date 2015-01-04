#ifndef _COMMANDE_POSER_H
#define _COMMANDE_POSER_H

#include "CommandeRobot.h"
#include "Invocator.h"
#include "Robot.h"

class CommandePoser : public CommandeRobot {

private:
    CommandePoser() {


    }

public:
    CommandePoser(string name) : CommandeRobot(name) {

    }


    CommandeRobot *virtualConstructor(Invocator &invocator) {
        return new CommandePoser();
    }

    void execute(Robot &r) {
        try {
            r.poser();
        } catch (...) {
            cout << "Action impossible" << endl;
        }

    }

};

CommandePoser *commandePoser = new CommandePoser("POSER");
#endif
