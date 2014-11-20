#include <string>
#include "AVideFacePlotState.h"
#include "Object.h"
using namespace std;
State Vide_face_plot_state::evaluer(){
return *this;
}
State Vide_face_plot_state::saisir(Object o){
return *this;
}

State Vide_face_plot_state::tourner(string direction){
return *this;
}
