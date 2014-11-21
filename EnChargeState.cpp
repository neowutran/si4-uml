#include <string>
#include "EnChargeState.h"
#include "State.h"
#include "Plot.h"
using namespace std;
State Charge_state::avancer(int x, int y){
    return *this;
}
State Charge_state::peser(){
    return *this;
}
State Charge_state::rencontrerPlot(Plot p){
    return *this;
}
State Charge_state::tourner(string direction){
    return *this;
}

std::ostream& operator<<(std::ostream &strm, const Charge_state &state) {

    strm << "State: Charge_state" << endl;
    return strm;

}
