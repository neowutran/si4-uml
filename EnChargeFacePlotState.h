#ifndef _CHARGE_FACE_PLOT_STATE_H
#define _CHARGE_FACE_PLOT_STATE_H
#include <string>
#include <iostream>
#include "EnRouteState.h"
#include "State.h"
class Charge_face_plot_state: public En_route_state{
    public: 
        virtual State poser();
        virtual State peser();
        virtual State tourner(string direction);
       friend std::ostream& operator<<(std::ostream& strm, const Charge_face_plot_state& state){
          strm << "State: Charge_face_plot_state" << endl;
          return strm;

       }
};
#endif
