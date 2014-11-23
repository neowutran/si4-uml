#include <string>
#include "FigeState.h"
using namespace std;

Fige_state::Fige_state(shared_ptr<State> currentState) {
    _previousState = currentState;
}

shared_ptr<State> Fige_state::repartir() {
    return _previousState;
}
