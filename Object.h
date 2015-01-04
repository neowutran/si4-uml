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

    ostream &printInline(ostream &os) const {
        return os << "Object[Poids:" << getPoids() << "]";
    }

    ostream &print(ostream &os) const {
        return os << "Object[" << endl
                << "\tPoids:" << getPoids() << endl
                << "]";
    }

    friend std::ostream &operator<<(std::ostream &strm, const Object &object) {
        return object.printInline(strm);
    }
};

#endif
