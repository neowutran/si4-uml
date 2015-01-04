#include <string>
#include "VideState.h"
#include "VideFacePlotState.h"

using namespace std;

shared_ptr<State> VideState::rencontrerPlot(shared_ptr<Plot> p) {
    return VideFacePlotState::get_instance();
}

shared_ptr<State> VideState::avancer(int x, int y) {
    return VideState::get_instance();
}

shared_ptr<State> VideState::tourner(string direction) {

    return VideState::get_instance();
}

