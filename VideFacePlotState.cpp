#include <string>
#include "VideFacePlotState.h"
#include "ChargeFacePlotState.h"
#include "VideState.h"

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

