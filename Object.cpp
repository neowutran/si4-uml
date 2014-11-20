#include "Object.h"

Object::Object(int poids){
    _poids = poids;
}

int Object::getPoids() const{
    return _poids;
}
