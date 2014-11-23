#ifndef _CHARGE_FACE_PLOT_STATE_H
#define _CHARGE_FACE_PLOT_STATE_H
#include <string>
#include <iostream>
#include <memory>

#include "EnRouteState.h"
#include "Robot.h"

class Charge_face_plot_state : public En_route_state {
private:

    Charge_face_plot_state() {
    }
    Charge_face_plot_state(Charge_face_plot_state const&) = delete;
    void operator=(Charge_face_plot_state const &) = delete;
public:
    shared_ptr<State> figer();


    static shared_ptr<Charge_face_plot_state> get_instance() {
        static shared_ptr<Charge_face_plot_state> _instance(new Charge_face_plot_state());
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
