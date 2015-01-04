#ifndef _AFFICHEUR_ROBOT_H
#define _AFFICHEUR_ROBOT_H

#include "Robot.h"

class AfficheurRobot : public IObserver {

public :
    AfficheurRobot() {
    };

    void Update(IObservable *observable, string message) {
        Robot *r = static_cast<Robot *>(observable);

        if (r->getAfficher()) {
            cout << "\n========================" << endl;
            cout << r->getNom() << " vient d'effectuer l'action: " << message << endl;
            cout << "\n";
            cout << "Etat après action: ";
            r->afficher();
        }
    }
};


#endif