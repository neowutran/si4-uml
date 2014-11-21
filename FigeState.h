#ifndef _FIGE_STATE_H
#define _FIGE_STATE_H
#include <string>
#include "State.h"
class Fige_state: public State{

    public: 
        virtual State repartir();

      //  friend std::ostream& operator<<(std::ostream&, const Fige_state&);
};
#endif
