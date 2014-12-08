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

    public:
        CommandeRobot(string name) {
            cout << "REGISTERING " << name << endl;
            _name = name;
            registeredCommands()[name] = this;
        };

        static CommandeRobot* newCommandeRobot(string type, const Invocator& invocator) {
            return registeredCommands()[type]->virtualConstructor(invocator);
        };

        virtual CommandeRobot* virtualConstructor(const Invocator& invocator) = 0;
        virtual vector<string> getParamsTypes() = 0;
        virtual void setParams(vector<void*> params) = 0;

        string getName() {
            return _name;
        }

        void execute() {}

        static map<string, CommandeRobot*>& registeredCommands() {
            static map<string, CommandeRobot*>* _map = new map<string, CommandeRobot*>;
            return *_map;
        }

        friend ostream& operator<<(ostream& os, CommandeRobot& c) {
            return os << c.getName();
        }

};

#endif
