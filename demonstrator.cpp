#include "Position.h"
#include "Object.h"
#include "Plot.h"
#include "Robot.h"
#include "State.h"

using namespace std;

int main(){

    Robot r = Robot();
r.afficher();
    Object* o1 = new Object(10);
    Plot p1 = Plot(15, o1);

    Plot p2 = Plot(10);


    r.avancer(10, 5);
    r.tourner("N");
    r.rencontrerPlot(&p1);
    r.figer();
    r.repartir();
    r.evaluerPlot();
    r.saisir(p1.getObject());
    r.peser();
    r.figer();
    r.repartir();
    r.tourner("S");
    r.avancer(5,10);
    r.tourner("E");
    r.peser();
    r.rencontrerPlot(&p2);
    r.poser();

    /*int a = 1;
    int* b = &a;

    printf("%d @ %x", a, b);*/

}
