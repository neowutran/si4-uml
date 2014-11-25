#include <iostream>
#include <string>
#include "Robot.h"
#include "FigeState.h"
#include "VideState.h"
#include <algorithm>
#include <sstream>

ostream& Robot::print(ostream& os) const {
    os << "Robot " << getNom() << " [" << endl;
    os << "\tState: " << state() << endl;
    os << "\tPosition: " << position() << endl;
    os << "\tDirection: " << direction() << endl;

    os << "\tPlot: " ;
    if (plot()) os << *plot();
    else os << "null";
    os << endl;

    os << "\tObject: ";
    if (object()) os << *object();
    else os << "null";
    os << endl;

    os << "]" << endl;
    return os;
}

std::ostream& operator<<(std::ostream &strm, const Robot& robot) {
    return robot.print(strm);
}

Robot::Robot(string name): _position(Position(0,0)) {
    _name = name;
    _state = State::getInitialState();//VideState::get_instance();
    _direction = "N";
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

Position Robot::position() const {
    return _position;
}

shared_ptr<State> Robot::state() const {
    return _state;
}

void Robot::avancer(int x, int y) {
    _state = _state->avancer(x, y);
    _position.setx(x);
    _position.sety(y);

    stringstream message;
    message << "avancer(" << x << ", " << y << ")";
    NotifyAll(message.str());
    //NotifyAll("avancer(" + to_string(x) + ", " + to_string(y) + ")");
}

void Robot::tourner(string direction) {
    _direction = direction;
    _state = _state->tourner(direction);

    stringstream message;
    message << "tourner(" << direction << ")";
    NotifyAll(message.str());
    //NotifyAll("tourner("+ direction + ")");
}

void Robot::saisir(shared_ptr<Object> o) {
    _object = o;
    _state = _state->saisir(o);

    stringstream message;
    message << "saisir(" << *o << ")";
    NotifyAll(message.str());
}

void Robot::poser() {
    _plotEnFace->setObject(_object);
    _object = nullptr;
    _state = _state->poser();
    NotifyAll("poser()");
}

int Robot::peser() {
    _state = _state->peser();
    NotifyAll("peser()");
    return _object->getPoids();
}

void Robot::rencontrerPlot(shared_ptr<Plot> p) {
    _state = _state->rencontrerPlot(p);
    _plotEnFace = p;

    stringstream message;
    message << "rencontrerPlot(" << *p << ")";
    NotifyAll(message.str());
}

int Robot::evaluerPlot() {
    _state = _state->evaluerPlot();
    NotifyAll("evaluerPlot()");
    return _plotEnFace->getHauteur();
}

void Robot::figer() {
    _state = _state->figer();
    NotifyAll("figer()");
}

void Robot::repartir() {
    _state = _state->repartir();
    stringstream message;
    message << "repartir(" << _state->get_name() << ")";
    NotifyAll(message.str());
}

void Robot::setAfficher() {
    _afficher = true;
}


bool Robot::getAfficher() const {
    return _afficher;
}

void Robot::afficher() {
    cout << *this;
}
