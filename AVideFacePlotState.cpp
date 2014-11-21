#include <string>
#include "AVideFacePlotState.h"
#include "Object.h"
using namespace std;


std::ostream& operator<<(std::ostream &strm, const Vide_face_plot_state &state) {

    strm << "State: Vide_face_plot_state" << endl;
    return strm;

}
State Vide_face_plot_state::evaluer(){
    return *this;
}
State Vide_face_plot_state::saisir(Object o){
    return *this;
}

State Vide_face_plot_state::tourner(string direction){
    return *this;
}
