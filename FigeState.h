#ifndef _FIGE_STATE_H
#define _FIGE_STATE_H
#include <string>
#include <iostream>
#include "State.h"
class Fige_state: public State{

    private:
        State* _previousState;

    public:
        Fige_state(State currentState);
        virtual State repartir();
        friend std::ostream& operator<<(std::ostream& strm, const Fige_state& state){
            strm << "State: Fige_state" << endl;
            return strm;

        }
};
#endif
