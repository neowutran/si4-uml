
#ifndef _POSITION_H
#define _POSITION_H
class Position{

    private: 
        int _x;
        int _y;
        Position(int x, int y);

    public:
        void setx(int x);
        void sety(int y);
        int getx() const;
        int gety() const;

};

#endif
