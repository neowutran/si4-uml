#include <string>
#include "AVideFacePlotState.h"
#include "EnChargeFacePlotState.h"
#include "AVideState.h"
#include "FigeState.h"
using namespace std;

shared_ptr<State> Vide_face_plot_state::evaluerPlot() {
    return Vide_face_plot_state::get_instance();
}

shared_ptr<State> Vide_face_plot_state::saisir(shared_ptr<Object> o) {
    return Charge_face_plot_state::get_instance();
}

shared_ptr<State> Vide_face_plot_state::tourner(string direction) {
    return Vide_state::get_instance();
}

shared_ptr<State> Vide_face_plot_state::figer() {
    return make_shared<Fige_state>(Fige_state(Vide_face_plot_state::get_instance()));
}
