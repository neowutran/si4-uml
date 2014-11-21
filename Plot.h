#ifndef _PLOT_H
#define _PLOT_H

#include "Object.h"

class Plot {

    private:
        int _hauteur;
        Object* _object;

    public:
        int getHauteur() const;
        Plot(int hauteur);
        Plot(int hauteur, Object* object);
        Object* getObject();
};
#endif
