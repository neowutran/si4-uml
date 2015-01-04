#ifndef _COMMANDE_APPELER_H
#define _COMMANDE_APPELER_H

#include "CommandeRobot.h"
#include "Invocator.h"

class CommandeAppeler : public CommandeRobot {

private:
    string _macro;

    CommandeAppeler(string macro, bool b) {
        _macro = macro;
    }




public:
    static map<string, vector<CommandeRobot* >> *liste_macro;

    static void add_macro(string macro, vector<CommandeRobot*> commandeRobot){
        CommandeAppeler::liste_macro = new map<string, vector<CommandeRobot *>>;
        (*CommandeAppeler::liste_macro)[macro] = commandeRobot;
    }

    CommandeAppeler(string name) : CommandeRobot(name) {

    }


    CommandeRobot *virtualConstructor(Invocator &invocator) {
        cout << "Veuillez entrer le nom de la macro a appeler" << endl;
        string name = invocator.getString();
        return new CommandeAppeler(name, true);
    }

    void execute(Robot &r) {
        vector<CommandeRobot *> commandes = liste_macro->at(_macro);
        try {
            for(CommandeRobot * commande : commandes){
commande->execute(r);
            }
        } catch (...) {
            cout << "Action impossible" << endl;
        }


    }

};
map<string, vector<CommandeRobot* >> *CommandeAppeler::liste_macro;
CommandeAppeler *commandeAppeler = new CommandeAppeler("APPELER");
#endif
