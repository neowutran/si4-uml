
#include "Robot.h"
#include <algorithm>

void State::Attach(IObserver* robot)
{
    list.push_back(robot);
}
void State::Detach(IObserver* robot)
{    
    list.erase(std::remove(list.begin(), list.end(), robot), list.end());    
}

    void State::Notify(shared_ptr<Object> object, shared_ptr<Plot> plot, shared_ptr<State> state, shared_ptr<Position> position, string direction){
    for(int i = 0; i < list.size(); i++){
   
        
            list.at(i)->Update(direction);
        
    }
}
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
