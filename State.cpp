#include "State.h"

State State::avancer(int x, int y){
    throw State::InvalidActionException();
}
State State::tourner(string direction){
    throw State::InvalidActionException();
}
State State::figer(){
    throw State::InvalidActionException();
}
State State::repartir(){
    throw State::InvalidActionException();
}
State State::rencontrerPlot(Plot p){
    throw State::InvalidActionException();
}
State State::evaluerPlot(){
    throw State::InvalidActionException();
}
State State::saisir(Object o){
    throw State::InvalidActionException();
}
State State::poser(){
    throw State::InvalidActionException();
}
State State::peser(){
    throw State::InvalidActionException();
}
