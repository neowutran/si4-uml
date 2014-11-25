#include <string>
#include "FigeState.h"
using namespace std;

FigeState::FigeState(shared_ptr<State> currentState) {
    _previousState = currentState;
}

shared_ptr<State> FigeState::repartir() {
    return _previousState;
}
