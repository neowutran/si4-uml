#ifndef _ROBOT_H
#define _ROBOT_H

#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <list>
#include "Plot.h"
#include "Object.h"
#include "Position.h"
#include "State.h"
#include "IObserver.h"
#include "IObservable.h"

using namespace std;

class IObservable;

class State;

class Robot : public IObservable {
private:
    State *_state = 0;
    string _direction;
    shared_ptr<Plot> _plotEnFace = nullptr;
    shared_ptr<Object> _object = nullptr;
    Position _position;
    bool _afficher = false;
    string _name = "DefaultName";

public:
    string direction() const;

    shared_ptr<Object> object() const;

    Position position() const;

    State *state() const;

    shared_ptr<Plot> plot() const;


    Robot(string name = "DefaultName");

    string getNom() const {
        return _name;
    }

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

    bool getAfficher() const;

    void setAfficher();

    ostream &print(ostream &os) const;

    friend std::ostream &operator<<(std::ostream &, const Robot &);

};

#endif
