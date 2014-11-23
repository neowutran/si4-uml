#include <string>
#include "EnChargeFacePlotState.h"
#include "EnChargeState.h"
#include "AVideFacePlotState.h"
using namespace std;

shared_ptr<State> Charge_face_plot_state::poser() {
    return Vide_face_plot_state::get_instance();
}

shared_ptr<State> Charge_face_plot_state::peser() {
    return Charge_face_plot_state::get_instance();
}

shared_ptr<State> Charge_face_plot_state::tourner(string direction) {
    return Charge_state::get_instance();
}
shared_ptr<State> Charge_face_plot_state::figer() {
    return make_shared<Fige_state>(Fige_state(Charge_face_plot_state::get_instance()));
}
