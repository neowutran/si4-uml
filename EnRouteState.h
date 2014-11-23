#ifndef _EN_ROUTE_STATE_H
#define _EN_ROUTE_STATE_H
#include <memory>
#include "Robot.h"
#include "FigeState.h"
#include <string>

class En_route_state : public State {
protected:

    En_route_state() : State() {
    }

public:

    virtual string get_name() const {
        return "En route";
    }

};
#endif
