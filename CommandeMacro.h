#ifndef _COMMANDE_MACRO_H
#define _COMMANDE_MACRO_H

#include "CommandeRobot.h"
#include "Invocator.h"
#include "Robot.h"

class CommandeMacro : public CommandeRobot {

private:

    string _macro;
    vector<CommandeRobot*> _commandes;
    CommandeMacro(string macro, vector<CommandeRobot*> commandes) {
_commandes = commandes;
        _macro = macro;

    }

public:
    CommandeMacro(string name) : CommandeRobot(name) {

    }


    CommandeRobot *virtualConstructor(Invocator &invocator) {
        cout << "Veuillez entrer le nom de votre macro" << endl;
        string name = invocator.getString();
        vector<CommandeRobot *> commandes;
bool b;
        do{
            b = invocator.readMacro();
        }while(b);

        return new CommandeMacro(name, invocator.macro());
    }

    void execute(Robot &r) {
        CommandeAppeler::add_macro(_macro, _commandes);
    }

};

CommandeMacro *commandeMacro = new CommandeMacro("DEFMACRO");
#endif
