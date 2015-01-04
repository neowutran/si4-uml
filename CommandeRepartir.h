#ifndef _COMMANDE_REPARTIR_H
#define _COMMANDE_REPARTIR_H

#include "CommandeRobot.h"
#include "Invocator.h"
#include "Robot.h"

class CommandeRepartir : public CommandeRobot {

private:
    CommandeRepartir() {
    }

public:
    CommandeRepartir(string name) : CommandeRobot(name) {

    }


    CommandeRobot *virtualConstructor(Invocator &invocator) {
        return new CommandeRepartir();
    }

    void execute(Robot &r) {
        try {
            r.repartir();
        } catch (...) {
            cout << "Action impossible" << endl;
        }

    }

};

CommandeRepartir *commandeRepartir = new CommandeRepartir("REPARTIR");
#endif
