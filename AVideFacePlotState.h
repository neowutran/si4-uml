#ifndef _VIDE_FACE_PLOT_STATE_H
#define _VIDE_FACE_PLOT_STATE_H
#include <string>
#include <iostream>
#include "EnRouteState.h"
#include "State.h"
class Vide_face_plot_state: public En_route_state{
    public: 
        virtual State evaluer();
        virtual State saisir(Object o);
        virtual State tourner(string direction);
       friend std::ostream& operator<<(std::ostream& strm, const Vide_face_plot_state& state){
          strm << "State: Vide_face_plot_state" << endl;
          return strm;

       }
};
#endif
