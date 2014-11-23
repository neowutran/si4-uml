#include <string>
#include "EnChargeState.h"
#include "State.h"
#include "Plot.h"
using namespace std;

shared_ptr<State> Charge_state::avancer(int x, int y) {
    return Charge_state::get_instance();
}

shared_ptr<State> Charge_state::peser() {
    return Charge_state::get_instance();
}

shared_ptr<State> Charge_state::rencontrerPlot(shared_ptr<Plot> p) {
    return Charge_state::get_instance();
}

shared_ptr<State> Charge_state::tourner(string direction) {
    return Charge_state::get_instance();
}

