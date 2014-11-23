#ifndef _FIGE_STATE_H
#define _FIGE_STATE_H
#include <string>
#include <memory>

#include <iostream>
#include "Robot.h"

class Fige_state : public State {
private:

    Fige_state() {
    }
    shared_ptr<State> _previousState;

public:
    Fige_state(shared_ptr<State> currentState);
    shared_ptr<State> repartir();

    string get_name() const {
        return "Fige";
    }
};
#endif
