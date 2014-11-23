#ifndef _CHARGE_STATE_H
#define _CHARGE_STATE_H
#include <string>
#include <iostream>
#include <memory>

#include "EnRouteState.h"
#include "State.h"
#include "Plot.h"

class Charge_state : public En_route_state {
private:

    Charge_state() {
    }
    Charge_state(Charge_state const&) = delete;
    void operator=(Charge_state const &) = delete;
public:

    static shared_ptr<Charge_state> get_instance() {
        static shared_ptr<Charge_state> _instance(new Charge_state());
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
