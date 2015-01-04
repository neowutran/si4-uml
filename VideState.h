#ifndef _VIDE_STATE_H
#define _VIDE_STATE_H

#include <string>
#include <iostream>
#include <memory>

#include "State.h"
#include "Plot.h"
#include "EnRouteState.h"

using namespace std;

class VideState : public EnRouteState {
private:
    VideState() {
    };

public:
    static shared_ptr<VideState> get_instance() {
        static shared_ptr<VideState> _instance(new VideState());
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
