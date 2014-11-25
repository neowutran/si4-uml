#ifndef _FIGE_STATE_H
#define _FIGE_STATE_H

#include <string>
#include <memory>

#include <iostream>
#include "Robot.h"

class FigeState : public State {
private:
    FigeState() { }
    FigeState(State* currentState);
    State* _previousState;
    FigeState(FigeState const&) = delete;
    void operator=(FigeState const &) = delete;

public:
    ~FigeState() = default;

    static FigeState* get_instance(State* currentState) {
        return new FigeState(currentState);
    }
    
    State* repartir();

    string get_name() const {
        return "Fige";
    }
};

#endif
