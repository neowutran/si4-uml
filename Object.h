#ifndef _OBJECT_H
#define _OBJECT_H
#include <iostream>
#include <string>
using namespace std;
class Object{

    public:
        int getPoids() const;
        Object(int poids); 
    friend std::ostream& operator<<(std::ostream& strm, const Object& state){
            strm << "Object:[" << endl;
            strm << "\tPoids:" << state.getPoids() << endl;
            strm << "]" << endl;
            return strm;

        }
    private:
        int _poids;


};
#endif
