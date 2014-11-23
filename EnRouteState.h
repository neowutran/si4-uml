#ifndef _EN_ROUTE_STATE_H
#define _EN_ROUTE_STATE_H
#include <memory>
#include "State.h"
#include <string>

class En_route_state : public State {
protected:

    En_route_state() : State() {
    }

public:
    virtual shared_ptr<State> figer();

    virtual string get_name() const {
        return "En route";
    }

};
#endif
