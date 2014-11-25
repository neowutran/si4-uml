#ifndef _STATE_H
#define _STATE_H
#include <memory>
#include <vector>
#include <string>
#include "Object.h"
#include "Plot.h"
#include "Position.h"
#include "Robot.h"

using namespace std;

class IObserver;
class VideState;

class State {

protected:
    State() {}

public:

    class InvalidActionException {};
    virtual shared_ptr<State> avancer(int x, int y);
    virtual shared_ptr<State> tourner(string direction);
    virtual State* figer();
    virtual State* repartir();
    virtual shared_ptr<State> rencontrerPlot(shared_ptr<Plot> p);
    virtual shared_ptr<State> evaluerPlot();
    virtual shared_ptr<State> saisir(shared_ptr<Object> o);
    virtual shared_ptr<State> poser();
    virtual shared_ptr<State> peser();

    static shared_ptr<State> get_instance() {
        return getInitialState();
    }

    static shared_ptr<State> getInitialState();

    virtual string get_name() const {
        return "State";
    }

    friend std::ostream& operator<<(std::ostream& strm, const State& state) {
        strm << state.get_name();
        return strm;
    }

    string toString() const {
        return get_name();
    }
};


#endif
