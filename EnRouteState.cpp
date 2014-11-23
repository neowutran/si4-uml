#include "EnRouteState.h"
#include "State.h"
#include "FigeState.h"
#include "AVideState.h"

shared_ptr<State> En_route_state::figer() {
    return Fige_state::get_instance(Vide_state::get_instance());
}

