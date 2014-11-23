#ifndef _VIDE_FACE_PLOT_STATE_H
#define _VIDE_FACE_PLOT_STATE_H
#include <string>
#include <iostream>
#include <memory>
#include "EnRouteState.h"
#include "Robot.h"

class Vide_face_plot_state : public En_route_state {
private:

    Vide_face_plot_state() {
    }
    Vide_face_plot_state(Vide_face_plot_state const&) = delete;
    void operator=(Vide_face_plot_state const &) = delete;
public:
    shared_ptr<State> figer();


    static shared_ptr<Vide_face_plot_state> get_instance() {
        static shared_ptr<Vide_face_plot_state> _instance(new Vide_face_plot_state());
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
