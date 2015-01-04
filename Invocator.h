#ifndef _INVOCATOR_H
#define _INVOCATOR_H

#include "CommandeRobot.h"

class Invocator {

private:
    Robot &_robot;
    vector<CommandeRobot*> _macro;
public:

    vector<CommandeRobot*> macro(){
        vector<CommandeRobot*> newVector = _macro;
        _macro.clear();
        return newVector;
    }
    void clear_macro(){
    }

    Invocator(Robot &r) : _robot(r) {
    }

    bool read() {
        string command;
        cout << "Entrez une commande" << endl;
        cin >> command;
        if (command == "exit") {
            return false;
        }
        try {
            CommandeRobot *c = CommandeRobot::newCommandeRobot(command, *this);
            if (c == nullptr) {
                cout << "Cette commande n'existe pas" << endl;
                return true;
            }
            c->execute(_robot);
        } catch (...) {
            cout << "something bad append";
        }
        return true;

    }

    bool readMacro(){
        string command;
        cout << "Entrez une commande pour votre macro" << endl;
        cin >> command;
        if (command == "FINMACRO") {
            cout << "Fin d'enregistrement de la macro" << endl;
            return false;
        }
        try {
            CommandeRobot *c = CommandeRobot::newCommandeRobot(command, *this);
            if (c == nullptr) {
                cout << "Cette commande n'existe pas" << endl;
                return true;
            }

            _macro.push_back(c);

        } catch (...) {
            cout << "something bad append";
        }
        return true;

    }

    int getInt() const {
        int input;
        cin >> input;
        return input;
    }

    string getString() const {
        string input;
        cin >> input;
        return input;
    }

    void infiniteRead() {
        bool b;
        do {
            b = read();
        } while (b);

    }
};


#endif
