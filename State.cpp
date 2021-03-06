#include "State.h"
#include "VideState.h"


shared_ptr<State> State::avancer(int x, int y) {
    throw State::InvalidActionException();
}

shared_ptr<State> State::tourner(string direction) {
    throw State::InvalidActionException();
}

State *State::figer() {
    throw State::InvalidActionException();
}

State *State::repartir() {
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

shared_ptr<State> State::getInitialState() {
    return VideState::get_instance();
}
