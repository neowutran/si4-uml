#ifndef _COMMANDE_EVALUER_OBSTACLE_H
#define _COMMANDE_EVALUER_OBSTACLE_H

#include "CommandeRobot.h"
#include "Invocator.h"
#include "Robot.h"

class CommandeEvaluerObstacle : public CommandeRobot {

private:
    CommandeEvaluerObstacle() {

    }

public:
    CommandeEvaluerObstacle(string name) : CommandeRobot(name) {

    }


    CommandeRobot *virtualConstructor(Invocator &invocator) {
        return new CommandeEvaluerObstacle();
    }

    void execute(Robot &r) {
        try {
            r.evaluerPlot();
        } catch (...) {
            cout << "Action impossible" << endl;
        }

    }

};

CommandeEvaluerObstacle *commandeEvaluerObstacle = new CommandeEvaluerObstacle("EVALUEROBST");

#endif
