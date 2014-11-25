#include "EnRouteState.h"
#include "FigeState.h"

State* EnRouteState::figer() {
    return FigeState::get_instance(this);
}