#ifndef _COMMANDE_SAISIR_H
#define _COMMANDE_SAISIR_H

#include "CommandeRobot.h"
#include "Invocator.h"
#include "Robot.h"

class CommandeSaisir : public CommandeRobot {

private:
    int _poids;

    CommandeSaisir(int poids) {
        _poids = poids;

    }

public:
    CommandeSaisir(string name) : CommandeRobot(name) {

    }

    CommandeRobot *virtualConstructor(Invocator &invocator) {
        cout << "Veuillez saisir le poids de l'object a saisir" << endl;
        int poids = invocator.getInt();
        return new CommandeSaisir(poids);
    }

    void execute(Robot &r) {
        try {
            shared_ptr<Object> object = make_shared<Object>(Object(_poids));
            r.saisir(object);
        } catch (...) {
            cout << "Action impossible" << endl;
        }

    }

};

CommandeSaisir *commandeSaisir = new CommandeSaisir("SAISIR");
#endif
