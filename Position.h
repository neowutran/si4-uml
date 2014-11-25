
#ifndef _POSITION_H
#define _POSITION_H

#include <string>

using namespace std;

class Position {

private:
    int _x;
    int _y;

public:
    Position(int x, int y);
    void setx(int x);
    void sety(int y);
    int getx() const;
    int gety() const;

    string toString() const;
    ostream& print(ostream& os) const;

    friend std::ostream& operator<<(std::ostream&, const Position&);

};

#endif
