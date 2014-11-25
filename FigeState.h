#ifndef _FIGE_STATE_H
#define _FIGE_STATE_H

#include <string>
#include <memory>

#include <iostream>
#include "Robot.h"

class FigeState : public State {
private:
    FigeState() {
    }
    shared_ptr<State> _previousState;
    FigeState(FigeState const&) = delete;
    void operator=(FigeState const &) = delete;
    FigeState(shared_ptr<State> currentState);
public:

    static shared_ptr<FigeState> get_instance(shared_ptr<State> currentState) {
        shared_ptr<FigeState> _instance(new FigeState(currentState));
        return _instance;
    }
    
    shared_ptr<State> repartir();

    string get_name() const {
        return "Fige";
    }
};

#endif
