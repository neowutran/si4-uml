#include "Position.h"
#include "Object.h"
#include "Plot.h"
#include "Robot.h"
#include "State.h"

using namespace std;

int main(){

    Robot r = Robot();

    Plot p1 = Plot();
    Object o1 = Object();

    r.avancer(10, 5);
    r.tourner("N");
    r.rencontrerPlot(p1);
    r.evaluerPlot(p1);
    r.saisir(p1.getObject());
}
