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
   void setObject(Object* object);
        Plot(int hauteur, Object* object);
        Object* getObject() const;
        friend std::ostream& operator<<(std::ostream& strm, const Plot& state){
            strm << "Plot: [" << endl;
            strm << "\tHauteur: " << state.getHauteur() << endl;
            strm << "\tObject: " << state.getObject() << endl;
            strm << "]";
            return strm;

        }
};
#endif
