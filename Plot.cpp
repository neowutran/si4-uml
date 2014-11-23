#include "Plot.h"

int Plot::getHauteur() const {
    return _hauteur;
}

Plot::Plot(int hauteur) {
    _hauteur = hauteur;
    _object = nullptr;
}

Plot::Plot(int hauteur, shared_ptr<Object> object) {
    _hauteur = hauteur;
    _object = object;
}

shared_ptr<Object> Plot::getObject() const {
    return _object;
}

void Plot::setObject(shared_ptr<Object> object) {
    _object = object;
}
