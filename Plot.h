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

    ostream& print(ostream& os) const {
        os << "Plot[\n"
            << "\t\tHauteur: " << getHauteur() << "\n";

            os << "\t\tObject: ";
            if (getObject()) os << *getObject() ;
            else os << "null";
        os << "\n\t]";
        return os;
    }


    friend std::ostream& operator<<(std::ostream& os, const Plot& plot) {
        return plot.print(os);
    }
};
#endif
