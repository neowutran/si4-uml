#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H

#include "CommandeRobot.h"

class CommandeAvancer : public CommandeRobot {

private:
    static CommandeAvancer instance;
    int x, y;
public:
    CommandeAvancer(Invocator& invocator) {
        _invocator = invocator;
    }

    using CommandeRobot::CommandeRobot;

    CommandeRobot* virtualConstructor(Invocator& invocator) {
        cout << "AVANCER CREATED!!! :d" << endl;
        int x = invocator.getInt(),
            y = invocator.getInt();
        return new CommandeAvancer(x, y);
    }

    void execute() {}

};

CommandeAvancer CommandeAvancer::instance("AVANCER");
//CommandeAvancer::instance = new CommandeAvancer("AVANCER");


//CommandeAvancer Comm = CommandeAvancer("lol");

//CommandeRobot c = CommandeRobot::newCommandeRobot("AVANCER");

#endif
