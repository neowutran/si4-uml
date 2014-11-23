#include <string>
#include <iostream>
#include "AVideState.h"
#include "AVideFacePlotState.h"
using namespace std;

shared_ptr<State> Vide_state::rencontrerPlot(shared_ptr<Plot> p) {
    return Vide_face_plot_state::get_instance();
}

shared_ptr<State> Vide_state::avancer(int x, int y) {
    return Vide_state::get_instance();
}

shared_ptr<State> Vide_state::tourner(string direction) {

    return Vide_state::get_instance();
}
shared_ptr<State> Vide_state::figer() {
    return make_shared<Fige_state>(Fige_state(Vide_state::get_instance()));
}
