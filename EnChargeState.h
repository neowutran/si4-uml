#ifndef _CHARGE_STATE_H
#define _CHARGE_STATE_H
#include <string>
#include <iostream>
#include "EnRouteState.h"
#include "State.h"
#include "Plot.h"
class Charge_state: public En_route_state{
    public: 
        virtual State avancer( int x, int y);
        virtual State rencontrerPlot(Plot p);
        virtual State peser();
        virtual State tourner(string direction);
       friend std::ostream& operator<<(std::ostream& strm, const Charge_state& state){
          strm << "State: Charge_state" << endl;
          return strm;

       }
       
};
#endif
