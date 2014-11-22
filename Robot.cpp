#include <iostream>
#include <string>
#include "Robot.h"
#include "Object.h"
#include "Plot.h"
#include "State.h"

std::ostream& operator<<(std::ostream &strm, const Robot &robot) {
    strm << "Robot: [" << endl;
    strm << "\tDirection: " << robot.direction() << endl;
    strm << "\tPlot: " << robot.plot() << endl;
    strm << "\tState: " << robot.state() << endl;
    strm << "\tObject: " << robot.object() << endl;
    strm << "]" << endl;
    return strm;

}

Robot::Robot() {
    _plotEnFace = nullptr;
    _object = nullptr;
    _position = new Position(0, 0);
}

Plot * Robot::plot() const {
    return _plotEnFace;
}

string Robot::direction() const{
    return _direction;
}

Object* Robot::object() const {
    return _object;
}

State Robot::state() const {
    return _state;
}

void Robot::avancer(int x, int y){
    if(_afficher){
        cout << "Methode: avancer(" << x << ", " << y << ")" << endl;
    }
    _state = _state.avancer(x, y);
    _position->setx(x);
    _position->sety(y);
}
void Robot::tourner(string direction){
    if(_afficher){
        cout << "Methode: tourner(" << direction << " )" << endl;
    }
    _direction = direction;
    _state = _state.tourner(direction);
}
void Robot::saisir(Object* o){
    if(_afficher){
        cout << "Methode: saisir(";
    }
    _object = o;
    _state = _state.saisir(*o);

}
void Robot::poser(){
    _plotEnFace->setObject(_object);
    _object = nullptr;
    _state = _state.poser();
}
int Robot::peser(){
    _state = _state.peser();
    return _object->getPoids();
}
void Robot::rencontrerPlot(Plot* p){
    _state = _state.rencontrerPlot(*p);
    _plotEnFace = p;
}
int Robot::evaluerPlot(){
    _state = _state.evaluerPlot();
    return _plotEnFace->getHauteur();
}
void Robot::figer(){
    _state = _state.figer();
}
void Robot::repartir(){
    _state = _state.repartir();

}
void Robot::afficher(){
    _afficher = true;
}