#include "Robot.h"

using namespace std;

int main() {

    Robot r = Robot();
    r.afficher();
    shared_ptr<Object> o1 = make_shared<Object>(Object(10));
    shared_ptr<Plot> p1 = make_shared<Plot>(Plot(15, o1));

    shared_ptr<Plot> p2 = make_shared<Plot>(Plot(10));
    r.avancer(10, 5);
    r.tourner("N");
    r.rencontrerPlot(p1);
    r.figer();
    r.repartir();
    r.evaluerPlot();
    r.saisir(p1->getObject());
    r.peser();
    r.figer();
    r.repartir();
    r.tourner("S");
    r.avancer(5, 10);
    r.tourner("E");
    r.peser();
    r.rencontrerPlot(p2);
    r.poser();

    /*int a = 1;
      int* b = &a;

      printf("%d @ %x", a, b);*/

}
