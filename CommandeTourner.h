#ifndef _COMMANDE_TOURNER_H
#define _COMMANDE_TOURNER_H

#include "CommandeRobot.h"
#include "Invocator.h"
#include "Robot.h"

class CommandeTourner : public CommandeRobot {

private:
    string _direction;

    CommandeTourner(string direction, bool b) {
        _direction = direction;

    }

public:
    CommandeTourner(string name) : CommandeRobot(name) {

    }


    CommandeRobot *virtualConstructor(Invocator &invocator) {
        cout << "Veuillez entrer la direction dans laquel vous voulez tourner:" << endl;
        string direction = invocator.getString();
        return new CommandeTourner(direction, true);
    }

    void execute(Robot &r) {
        try {
            r.tourner(_direction);
        } catch (...) {
            cout << "Action impossible" << endl;
        }

    }

};

CommandeTourner *commandeTourner = new CommandeTourner("TOURNER");
#endif
