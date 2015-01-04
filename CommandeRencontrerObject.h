#ifndef _COMMANDE_RENCONTRER_OBSTACLE_H
#define _COMMANDE_RENCONTRER_OBSTACLE_H

#include "CommandeRobot.h"
#include "Invocator.h"
#include "Robot.h"

class CommandeRencontrerObstacle : public CommandeRobot {

private:
    int _hauteur;

    CommandeRencontrerObstacle(int hauteur) {
        _hauteur = hauteur;
    }

public:
    CommandeRencontrerObstacle(string name) : CommandeRobot(name) {

    }

    CommandeRobot *virtualConstructor(Invocator &invocator) {
        cout << "Veuillez entrer la hauteur de l'osbtacle rencontrée: " << endl;
        int hauteur = invocator.getInt();
        return new CommandeRencontrerObstacle(hauteur);
    }

    void execute(Robot &r) {
        try {
            shared_ptr<Plot> p = make_shared<Plot>(Plot(_hauteur));
            r.rencontrerPlot(p);
        } catch (...) {
            cout << "Action impossible" << endl;
        }

    }

};

CommandeRencontrerObstacle *commandeRencontrerObstacle = new CommandeRencontrerObstacle("RENCONTREROBST");
#endif
