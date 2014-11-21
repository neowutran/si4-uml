#include <string>
#include "AVideState.h"
#include "Plot.h"
#include "State.h"
using namespace std;
State Vide_state::rencontrerPlot(Plot p){
    return *this;
}
State Vide_state::avancer(int x, int y){
    return *this;
}
State Vide_state::tourner(string direction){
    return *this;
}

