#ifndef _COMMANDE_ROBOT_H
#define _COMMANDE_ROBOT_H

#include <map>
#include <string>
#include <vector>

using namespace std;

class Invocator;

class CommandeRobot {
private:
    string _name;
protected:
    CommandeRobot() {
    }

public:
    CommandeRobot(string name) {
        cout << "REGISTERING " << name << endl;
        _name = name;
        registeredCommands()[name] = this;
    }

    static CommandeRobot *newCommandeRobot(string type, Invocator &invocator) {
        if (registeredCommands().find(type) == registeredCommands().end()) {
            return nullptr;
        }

        return registeredCommands()[type]->virtualConstructor(invocator);
    }

    virtual CommandeRobot *virtualConstructor(Invocator &invocator) = 0;

    string getName() {
        return _name;
    }

    virtual void execute(Robot &r) = 0;

    static map<string, CommandeRobot *> &registeredCommands() {
        static map<string, CommandeRobot *> *_map = new map<string, CommandeRobot *>;
        return *_map;
    }

    friend ostream &operator<<(ostream &os, CommandeRobot &c) {
        return os << c.getName();
    }

};

#endif
