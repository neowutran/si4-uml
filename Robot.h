#ifndef _ROBOT_H
#define _ROBOT_H
#include <string>
#include <memory>
#include "Plot.h"
#include "Object.h"
#include "Position.h"
#include "State.h"
#include "AVideState.h"
using namespace std;

class Robot {
private:
    shared_ptr<State> _state;
    string _direction;
    shared_ptr<Plot> _plotEnFace;
    shared_ptr<Object> _object;
    Position _position;
    bool _afficher = false;

public:
    string direction() const;
    shared_ptr<Object> object() const;
    Position position() const;
    shared_ptr<State> state() const;
    shared_ptr<Plot> plot() const;

    Robot();
    void avancer(int x, int y);
    void tourner(string direction);
    void saisir(shared_ptr<Object> o);
    void poser();
    int peser();
    void rencontrerPlot(shared_ptr<Plot> p);
    int evaluerPlot();
    void figer();
    void repartir();
    void afficher();
    friend std::ostream& operator<<(std::ostream&, const Robot&);

};

#endif
