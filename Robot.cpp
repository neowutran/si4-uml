#include <iostream>
#include <string>
#include "Robot.h"
#include "Object.h"
#include "Plot.h"
#include "State.h"

std::ostream& operator<<(std::ostream &strm, const Robot &robot) {
    return strm;

}

void Robot::avancer(int x, int y){
    if(_afficher){
        cout << "Methode: avancer(" << x << ", " << y << ")" << endl;
    }
    _state = _state.avancer(x, y);
}
void Robot::tourner(string direction){
    if(_afficher){
        cout << "Methode: tourner(" << direction << " )" << endl;
    }
    _state = _state.tourner(direction);
}
void Robot::saisir(Object o){
    if(_afficher){
        cout << "Methode: saisir(";

    }
    _state = _state.saisir(o);

}
void Robot::poser(){
    _state = _state.poser();
}
int Robot::peser(){
    _state = _state.poser();
    return 0;
}
void Robot::rencontrerPlot(Plot p){
    _state = _state.rencontrerPlot(p);
}
int Robot::evaluerPlot(){
    _state = _state.evaluerPlot();
    return 0;
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


