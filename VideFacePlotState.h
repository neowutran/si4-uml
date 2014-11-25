#ifndef _VIDE_FACE_PLOT_STATE_H
#define _VIDE_FACE_PLOT_STATE_H
#include <string>
#include <iostream>
#include <memory>
#include "Robot.h"
#include "EnRouteState.h"

class VideFacePlotState : public EnRouteState {

private:
    VideFacePlotState() { }
    VideFacePlotState(VideFacePlotState const&) = delete;
    void operator=(VideFacePlotState const &) = delete;

public:
    static shared_ptr<VideFacePlotState> get_instance() {
        static shared_ptr<VideFacePlotState> _instance(new VideFacePlotState());
        return _instance;
    }

    string get_name() const {
        return "A vide face plot";
    }

    virtual shared_ptr<State> evaluerPlot();
    virtual shared_ptr<State> saisir(shared_ptr<Object> o);
    virtual shared_ptr<State> tourner(string direction);
};

#endif
