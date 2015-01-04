#include <memory>
#include "Robot.h"
#include "AfficheurRobot.h"
#include "CommandeRobot.h"
#include "CommandeAvancer.h"
#include "CommandeAppeler.h"
#include "CommandeEvaluerObstacle.h"
#include "CommandeFiger.h"
#include "CommandeMacro.h"
#include "CommandePeserObject.h"
#include "CommandePoser.h"
#include "CommandeRencontrerObject.h"
#include "CommandeRepartir.h"
#include "CommandeSaisir.h"
#include "CommandeTourner.h"

using namespace std;

int main() {


    AfficheurRobot aff = AfficheurRobot();
    Robot *r = new Robot("Robot1");

    r->Attach(&aff);

    r->setAfficher();    // activation de l'affichage automatique
    cout << "Affichage initial: ";
    r->afficher();       // affichage initial

    shared_ptr<Object> o1 = make_shared<Object>(Object(10));
    shared_ptr<Plot> p1 = make_shared<Plot>(Plot(15, o1));

    shared_ptr<Plot> p2 = make_shared<Plot>(Plot(10));

    r->figer();
    r->repartir();
    r->avancer(10, 5);
    r->tourner("N");
    r->avancer(10, 6);
    r->rencontrerPlot(p1);
    r->figer();
    r->repartir();
    cout << "Plot évalué à: " << r->evaluerPlot() << endl;
    r->saisir(p1->getObject());
    cout << "Poids objet : " << r->peser() << endl;
    r->tourner("S");
    r->figer();
    r->repartir();
    r->avancer(5, 10);
    r->tourner("E");
    r->peser();
    r->rencontrerPlot(p2);
    r->poser();
    Invocator i = Invocator(*r);
    i.infiniteRead();

    cout << "==== THE END ====" << endl;
}
