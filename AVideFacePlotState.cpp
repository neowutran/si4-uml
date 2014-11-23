#include <string>
#include "AVideFacePlotState.h"
#include "Object.h"
using namespace std;

shared_ptr<State> Vide_face_plot_state::evaluer() {
    return Vide_face_plot_state::get_instance();
}

shared_ptr<State> Vide_face_plot_state::saisir(shared_ptr<Object> o) {
    return Vide_face_plot_state::get_instance();
}

shared_ptr<State> Vide_face_plot_state::tourner(string direction) {
    return Vide_face_plot_state::get_instance();
}
