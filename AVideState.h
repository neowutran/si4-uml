#ifndef _VIDE_STATE_H
#define _VIDE_STATE_H
#include <string>
#include "State.h"
#include "EnRouteState.h"
using namespace std;
class Vide_state: public En_route_state{

    public: 
        virtual State rencontrerPlot(Plot p);
        virtual State avancer(int x, int y);
        virtual State tourner(string direction);
     //  friend std::ostream& operator<<(std::ostream&, const Vide_state&);

};
#endif
