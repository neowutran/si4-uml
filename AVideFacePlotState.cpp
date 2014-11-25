#include <string>
#include "AVideFacePlotState.h"
#include "EnChargeFacePlotState.h"
#include "AVideState.h"
#include "FigeState.h"
using namespace std;

shared_ptr<State> VideFacePlotState::evaluerPlot() {
    return VideFacePlotState::get_instance();
}

shared_ptr<State> VideFacePlotState::saisir(shared_ptr<Object> o) {
    return ChargeFacePlotState::get_instance();
}

shared_ptr<State> VideFacePlotState::tourner(string direction) {
    return VideState::get_instance();
}

shared_ptr<State> VideFacePlotState::figer() {
    return make_shared<FigeState>(FigeState(VideFacePlotState::get_instance()));
}
