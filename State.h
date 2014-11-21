#ifndef _STATE_H
#define _STATE_H
#include <string>
#include "Plot.h"
#include "Object.h"
using namespace std;
class State{

    public:
        class InvalidActionException{};

        virtual State avancer(int x, int y);
        virtual State tourner(string direction);
        virtual State figer();
        virtual State repartir();
        virtual State rencontrerPlot(Plot p);
        virtual State evaluerPlot();
        virtual State saisir(Object o);
        virtual State poser();
        virtual State peser();

};

#endif
