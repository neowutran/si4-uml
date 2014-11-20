#ifndef _ROBOT_H
#define _ROBOT_H
#include <string>
#include "Plot.h"
#include "Object.h"
#include "Position.h"
#include "State.h"
using namespace std;
class Robot{

    private:
        State _state;
        string _direction;
        Plot _plotEnFace;
        Object _object;
        Position _position;

    public:
        void changerEtat(State state);
        void avancer(int x, int y);
        void tourner(string direction);
        void saisir(Object o);
        void poser();
        int peser();
        void rencontrerPlot(Plot p);
        int evaluerPlot(Plot p);
        void figer();
        void repartir();
        void afficher();


};

#endif
