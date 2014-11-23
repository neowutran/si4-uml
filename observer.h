#ifndef _OBSERVER_H
#define _OBSERVER_H
#include <memory>
#include <string>
#include "Position.h"
#include "Object.h"
#include "Plot.h"
#include "State.h"
using namespace std;
class IObserver{

    public: 
        virtual void Update(shared_ptr<Object> object, shared_ptr<Plot> plot, shared_ptr<State> state, shared_ptr<Position>, string direction) = 0;

};

#endif
