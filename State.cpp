#include "State.h"
#include <algorithm>
class IObserver;

/*
void State::Notify(shared_ptr<Object> object, shared_ptr<Plot> plot, shared_ptr<State> state, shared_ptr<Position> position, string direction){
    for(uint i = 0; i < list.size(); i++){
        list.at(i)->Update(direction);
    }
}*/
shared_ptr<State> State::avancer(int x, int y) {
    throw State::InvalidActionException();
}

shared_ptr<State> State::tourner(string direction) {
    throw State::InvalidActionException();
}

shared_ptr<State> State::figer() {
    throw State::InvalidActionException();
}

shared_ptr<State> State::repartir() {
    throw State::InvalidActionException();
}

shared_ptr<State> State::rencontrerPlot(shared_ptr<Plot> p) {
    throw State::InvalidActionException();
}

shared_ptr<State> State::evaluerPlot() {
    throw State::InvalidActionException();
}

shared_ptr<State> State::saisir(shared_ptr<Object> o) {
    throw State::InvalidActionException();
}

shared_ptr<State> State::poser() {
    throw State::InvalidActionException();
}

shared_ptr<State> State::peser() {
    throw State::InvalidActionException();
}
