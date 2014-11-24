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

    string toString() const {
        // TODO: maybe improve this ?
        if (this == nullptr) return "null";

        const Plot* state = this;
        string result = "Plot: [\n"
                "\tHauteur: " + to_string(state->getHauteur())+"\n"+
                "\tObject: " + state->getObject()->toInlineString()+"\n"+
                "]\n";
        return result;
    }


    friend std::ostream& operator<<(std::ostream& strm, const Plot& state) {
        return strm << state.toString();
    }
};
#endif
