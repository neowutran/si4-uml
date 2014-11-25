#include <string>
#include "FigeState.h"
using namespace std;

FigeState::FigeState(State* currentState) {
    _previousState = currentState;
}

State* FigeState::repartir() {
    delete this;
    return _previousState;
}
