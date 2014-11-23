#include <string>
#include "EnChargeFacePlotState.h"
#include "State.h"
#include "EnChargeState.h"
using namespace std;

shared_ptr<State> Charge_face_plot_state::poser() {
    return Charge_face_plot_state::get_instance();
}

shared_ptr<State> Charge_face_plot_state::peser() {
    return Charge_face_plot_state::get_instance();
}

shared_ptr<State> Charge_face_plot_state::tourner(string direction) {
    return Charge_state::get_instance();
}

