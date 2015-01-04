#ifndef _CHARGE_STATE_H
#define _CHARGE_STATE_H

#include <string>
#include <iostream>
#include <memory>
#include "Robot.h"
#include "EnRouteState.h"

class ChargeState : public EnRouteState {
private:

    ChargeState() {
    }

    ChargeState(ChargeState const &) = delete;

    void operator=(ChargeState const &) = delete;

public:
    static shared_ptr<ChargeState> get_instance() {
        static shared_ptr<ChargeState> _instance(new ChargeState());
        return _instance;
    }

    string get_name() const {
        return "Charge";
    }

    virtual shared_ptr<State> avancer(int x, int y);

    virtual shared_ptr<State> rencontrerPlot(shared_ptr<Plot> p);

    virtual shared_ptr<State> peser();

    virtual shared_ptr<State> tourner(string direction);

};

#endif
