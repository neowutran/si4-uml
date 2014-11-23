#ifndef _FIGE_STATE_H
#define _FIGE_STATE_H
#include <string>
#include <memory>

#include <iostream>
#include "State.h"

class Fige_state : public State {
private:

    Fige_state() {
    }
    Fige_state(Fige_state const&) = delete;
    void operator=(Fige_state const &) = delete;
public:

    static shared_ptr<Fige_state> get_instance(shared_ptr<State> state) {
        static shared_ptr<Fige_state> _instance(new Fige_state(state));
        return _instance;
    }
private:
    shared_ptr<State> _previousState;

public:
    Fige_state(shared_ptr<State> currentState);
    shared_ptr<State> repartir();

    string get_name() const {
        return "Fige";
    }
};
#endif
