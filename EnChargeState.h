#ifndef _CHARGE_STATE_H
#define _CHARGE_STATE_H
#include <string>
#include "EnRouteState.h"
#include "State.h"
#include "Plot.h"
class Charge_state: public En_route_state{
    public: 
        virtual State avancer( int x, int y);
        virtual State rencontrerPlot(Plot p);
        virtual State peser();
        virtual State tourner(string direction);

        friend std::ostream& operator<<(std::ostream&, const Charge_state&);
};
#endif
