#include <string>
#include "ChargeFacePlotState.h"
#include "ChargeState.h"
#include "VideFacePlotState.h"
#include "FigeState.h"
using namespace std;

shared_ptr<State> ChargeFacePlotState::poser() {
    return VideFacePlotState::get_instance();
}

shared_ptr<State> ChargeFacePlotState::peser() {
    return ChargeFacePlotState::get_instance();
}

shared_ptr<State> ChargeFacePlotState::tourner(string direction) {
    return ChargeState::get_instance();
}
shared_ptr<State> ChargeFacePlotState::figer() {
    return make_shared<FigeState>(FigeState(ChargeFacePlotState::get_instance()));
}
