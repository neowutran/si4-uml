#include <string>
#include <iostream>
#include "AVideState.h"
#include "Plot.h"
#include "State.h"
using namespace std;

shared_ptr<State> Vide_state::rencontrerPlot(shared_ptr<Plot> p) {
    return Vide_state::get_instance();
}

shared_ptr<State> Vide_state::avancer(int x, int y) {
    return Vide_state::get_instance();
}

shared_ptr<State> Vide_state::tourner(string direction) {

    return Vide_state::get_instance();
}

