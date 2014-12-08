#ifndef _COMMANDE_ROBOT_H
#define _COMMANDE_ROBOT_H

#include <map>
#include <string>

using namespace std;

class CommandeRobot {
private:
    string _name;
    Invocator _invocator;

public:
    CommandeRobot(string name) {
        _name = name;
        registeredCommands()[name] = this;
    };

    static CommandeRobot* newCommandeRobot(string type) {
        return registeredCommands()[type]->virtualConstructor();
    };

    virtual CommandeRobot* virtualConstructor() = 0;

    string getName() {
        return _name;
    }

    void execute(vector<string> parameters) {}

    static map<string, CommandeRobot*>& registeredCommands() {
        static map<string, CommandeRobot*>* _map = new map<string, CommandeRobot*>;
        return *_map;
    }

    friend ostream& operator<<(ostream& os, CommandeRobot& c) {
        return os << c.getName();
    }

};

class Invocator {

public:
    Invocator() { }

    int getInt() {

    }
};



#endif