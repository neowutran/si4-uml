#ifndef _OBJECT_H
#define _OBJECT_H
#include <iostream>
#include <memory>

#include <string>
using namespace std;

class Object {
private:
    int _poids;

public:
    int getPoids() const;
    Object(int poids);

    string toInlineString() const {
        return "Object:[Poids:"+to_string(getPoids())+"]";
    }

    string toString() const {
        const string result = "Object:[\n"
            //"\tPoids: " + to_string(this->getPoids()) + "\n"
                "\t\tPoids: " + to_string(3) + "\n"
            "\t]";
        return result;
    }

    friend std::ostream& operator<<(std::ostream& strm, const Object& state) {
        return strm << state.toString();
        /*strm << "Object:[" << endl;
        strm << "\tPoids:" << state.getPoids() << endl;
        strm << "]" << endl;
        return strm;*/

    }
};
#endif
