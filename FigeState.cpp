#include <string>
#include "FigeState.h"
#include "State.h"
using namespace std;

Fige_state::Fige_state(State currentState) {
    _previousState = &(currentState);
}

State Fige_state::repartir(){
    return *_previousState;
}
