#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H

#include "CommandeRobot.h"
#include "Invocator.h"

class CommandeAvancer : public CommandeRobot {

private:
    int _x, _y;

    CommandeAvancer(int x, int y) {
        _x = x;
        _y = y;

    }

public:
    CommandeAvancer(string name) : CommandeRobot(name) {

    }


    CommandeRobot *virtualConstructor(Invocator &invocator) {
        cout << "Veuillez entrer la coordonnée X sur laquel le robot doit se deplacer" << endl;
        int x = invocator.getInt();
        cout << "Veuillez entrer la coordonnée Y sur laquel le robot doit se deplacer" << endl;
        int y = invocator.getInt();
        return new CommandeAvancer(x, y);
    }

    void execute(Robot &r) {
        try {
            r.avancer(_x, _y);
        } catch (...) {
            cout << "Action impossible" << endl;
        }


    }

};

CommandeAvancer *commandeAvancer = new CommandeAvancer("AVANCER");
#endif
