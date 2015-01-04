#ifndef _COMMANDE_PESER_OBJECT_H
#define _COMMANDE_PESER_OBJECT_H

#include "CommandeRobot.h"
#include "Invocator.h"
#include "Robot.h"

class CommandePeserObject : public CommandeRobot {

private:
    CommandePeserObject() {


    }

public:
    CommandePeserObject(string name) : CommandeRobot(name) {

    }


    CommandeRobot *virtualConstructor(Invocator &invocator) {
        return new CommandePeserObject();
    }

    void execute(Robot &r) {
        try {
            r.peser();
        } catch (...) {
            cout << "Action impossible" << endl;
        }

    }

};

CommandePeserObject *commandePeserObject = new CommandePeserObject("PESER");
#endif
