#ifndef _VIDE_STATE_H
#define _VIDE_STATE_H
#include <string>
#include <iostream>
#include <memory>

#include "Robot.h"
#include "EnRouteState.h"
using namespace std;

class Vide_state : public En_route_state {
private:

    Vide_state() : En_route_state() {
    }
public:
    shared_ptr<State> figer();


    static shared_ptr<Vide_state> get_instance() {
        static shared_ptr<Vide_state> _instance(new Vide_state());
        return _instance;
    }
    shared_ptr<State> rencontrerPlot(shared_ptr<Plot> p) override;
    shared_ptr<State> avancer(int x, int y) override;
    shared_ptr<State> tourner(string direction) override;

    string get_name() const override {
        return "A vide";
    }

};
#endif
