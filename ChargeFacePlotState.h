#ifndef _CHARGE_FACE_PLOT_STATE_H
#define _CHARGE_FACE_PLOT_STATE_H

#include <string>
#include <iostream>
#include <memory>

#include "Robot.h"
#include "EnRouteState.h"

class ChargeFacePlotState : public EnRouteState {
private:
    ChargeFacePlotState() {
    }

    ChargeFacePlotState(ChargeFacePlotState const &) = delete;

    void operator=(ChargeFacePlotState const &) = delete;

public:
    static shared_ptr<ChargeFacePlotState> get_instance() {
        static shared_ptr<ChargeFacePlotState> _instance(new ChargeFacePlotState());
        return _instance;
    }

    string get_name() const {
        return "Charge face plot";
    }

    virtual shared_ptr<State> poser();

    virtual shared_ptr<State> peser();

    virtual shared_ptr<State> tourner(string direction);
};

#endif
