#include "Plot.h"

int Plot::getHauteur() const{
    return _hauteur;
}

Plot::Plot(int hauteur){
    _hauteur = hauteur;
    _object = nullptr;
}

Plot::Plot(int hauteur, Object* object) {
    _hauteur = hauteur;
    _object = object;
}

Object* Plot::getObject() {
    return _object;
}
