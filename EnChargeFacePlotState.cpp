#include <string>
#include "EnChargeFacePlotState.h"
#include "State.h"
#include "EnChargeState.h"
using namespace std;
State Charge_face_plot_state::poser(){
return *this;
}
State Charge_face_plot_state::peser(){
return *this;
}

State Charge_face_plot_state::tourner(string direction){
return Charge_state();
}


std::ostream& operator<<(std::ostream &strm, const Charge_face_plot_state &state) {

    strm << "State: Charge_face_plot_state" << endl;
    return strm;

}
