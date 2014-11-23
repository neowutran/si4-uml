#include <iostream>
#include <string>
#include "Robot.h"
#include "Object.h"
#include "Plot.h"
#include "State.h"
#include "FigeState.h"
#include "EnRouteState.h"
#include "AVideState.h"

std::ostream& operator<<(std::ostream &strm, const Robot &robot) {
    strm << "Robot: [" << endl;
    strm << "\tDirection: " << robot.direction() << endl;
    strm << "\tPlot: " << robot.plot() << endl;
    strm << "\tState: " << robot.state() << endl;
    strm << "\tObject: " << robot.object() << endl;
    strm << "]" << endl;
    return strm;

}

Robot::Robot() : _state(Vide_state::get_instance()), _plotEnFace(nullptr), _direction("N"), _object(nullptr), _position(Position(0, 0)) {
}

shared_ptr<Plot> Robot::plot() const {
    return _plotEnFace;
}

string Robot::direction() const {
    return _direction;
}

shared_ptr<Object> Robot::object() const {
    return _object;
}

shared_ptr<State> Robot::state() const {
    return _state;
}

void Robot::avancer(int x, int y) {
    if (_afficher) {
        cout << "Methode: avancer(" << x << ", " << y << ")" << endl;
    }
    _state = _state->avancer(x, y);
    _position.setx(x);
    _position.sety(y);
    if (_afficher) {
        cout << *this;
    }
}

void Robot::tourner(string direction) {
    if (_afficher) {
        cout << "Methode: tourner(" << direction << " )" << endl;
    }
    _direction = direction;
    _state = _state->tourner(direction);
    if (_afficher) {
        cout << *this;
    }
}

void Robot::saisir(shared_ptr<Object> o) {
    if (_afficher) {
        cout << "Methode: saisir(";
    }
    _object = o;
    _state = _state->saisir(o);
    if (_afficher) {
        cout << *this;
    }
}

void Robot::poser() {
    if (_afficher) {
        cout << "Methode: poser()" << endl;
    }
    _plotEnFace->setObject(_object);
    _object = nullptr;
    _state = _state->poser();
    if (_afficher) {
        cout << *this;
    }
}

int Robot::peser() {
    if (_afficher) {
        cout << "Methode: peser()" << endl;
    }
    _state = _state->peser();
    if (_afficher) {
        cout << *this;
    }
    return _object->getPoids();
}

void Robot::rencontrerPlot(shared_ptr<Plot> p) {
    if (_afficher) {
        cout << "Methode: rencontrerPlot(" << p << ")" << endl;
    }
    _state = _state->rencontrerPlot(p);
    _plotEnFace = p;
    if (_afficher) {
        cout << *this;
    }
}

int Robot::evaluerPlot() {
    if (_afficher) {
        cout << "Methode: evaluerPlot()" << endl;
    }
    _state = _state->evaluerPlot();
    if (_afficher) {
        cout << *this;
    }
    return _plotEnFace->getHauteur();
}

void Robot::figer() {
    if (_afficher) {
        cout << "Methode: figer()" << endl;
    }
    _state = _state->figer();
    if (_afficher) {
        cout << *this;
    }
}

void Robot::repartir() {
    if (_afficher) {
        cout << "Methode: repartir()" << endl;
    }
    _state = _state->repartir();
    if (_afficher) {
        cout << *this;
    }
}

void Robot::afficher() {
    _afficher = true;
}
