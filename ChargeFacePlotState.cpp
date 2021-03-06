#include <string>
#include "ChargeFacePlotState.h"
#include "ChargeState.h"
#include "VideFacePlotState.h"

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
