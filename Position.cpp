#include "Position.h"
#include <iostream>

using namespace std;

Position::Position(int x, int y) {
    _x = x;
    _y = y;
}

int Position::gety() const {
    return _y;
}

int Position::getx() const {
    return _x;
}

void Position::setx(int x) {
    _x = x;
}

void Position::sety(int y) {
    _y = y;
}

ostream &Position::print(ostream &os) const {
    return os << "(" << getx() << ", " << gety() << ")";
}

std::ostream &operator<<(std::ostream &os, const Position &p) {
    return p.print(os);
}
