#include <string>
#include "ChargeState.h"
#include "ChargeFacePlotState.h"
#include "FigeState.h"
using namespace std;

shared_ptr<State> ChargeState::avancer(int x, int y) {
    return ChargeState::get_instance();
}

shared_ptr<State> ChargeState::peser() {
    return ChargeState::get_instance();
}

shared_ptr<State> ChargeState::rencontrerPlot(shared_ptr<Plot> p) {
    return ChargeFacePlotState::get_instance();
}

shared_ptr<State> ChargeState::tourner(string direction) {
    return ChargeState::get_instance();
}
shared_ptr<State> ChargeState::figer() {
    return FigeState::get_instance(ChargeState::get_instance());
}
