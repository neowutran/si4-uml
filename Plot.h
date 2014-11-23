#ifndef _PLOT_H
#define _PLOT_H
#include <memory>
#include "Object.h"

class Plot {
private:
    int _hauteur;
    shared_ptr<Object> _object;

public:
    int getHauteur() const;
    Plot(int hauteur);
    void setObject(shared_ptr<Object> object);
    Plot(int hauteur, shared_ptr<Object> object);
    shared_ptr<Object> getObject() const;

    friend std::ostream& operator<<(std::ostream& strm, const Plot& state) {
        strm << "Plot: [" << endl;
        strm << "\tHauteur: " << state.getHauteur() << endl;
        strm << "\tObject: " << state.getObject() << endl;
        strm << "]";
        return strm;

    }
};
#endif
