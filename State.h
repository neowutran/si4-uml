#ifndef _STATE_H
#define _STATE_H
#include <string>
#include <memory>
#include <list>
#include <vector>
#include "Robot.h"

using namespace std;

class State {
vector<IObserver*> list;
    protected:

    State() {
    }

    
public:

    void Attach(IObserver* robot);
    void Detach(IObserver* robot);
    void Notify(shared_ptr<Object> object, shared_ptr<Plot> plot, shared_ptr<State> state, shared_ptr<Position>, string direction);
    class InvalidActionException {
    };
    virtual shared_ptr<State> avancer(int x, int y);
    virtual shared_ptr<State> tourner(string direction);
    virtual shared_ptr<State> figer();
    virtual shared_ptr<State> repartir();
    virtual shared_ptr<State> rencontrerPlot(shared_ptr<Plot> p);
    virtual shared_ptr<State> evaluerPlot();
    virtual shared_ptr<State> saisir(shared_ptr<Object> o);
    virtual shared_ptr<State> poser();
    virtual shared_ptr<State> peser();

    virtual string get_name() const {

        return "State";
    }

    friend std::ostream& operator<<(std::ostream& strm, shared_ptr<State> state) {
        strm << state->get_name();
        return strm;

    }
};

#endif
