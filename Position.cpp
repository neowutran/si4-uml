#include "Position.h"

using namespace std;

Position::Position(int x, int y){
    _x = x;
    _y = y;
}

int Position::gety() const{
    return _y;
}

int Position::getx() const{
    return _x;
}

void Position::setx(int x){
    _x = x;
}

void Position::sety(int y){
    _y = y;
}

string Position::toString() const {
    return "("+to_string(getx())+", "+to_string(gety())+")";
}
