#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H

#include "CommandeRobot.h"

class CommandeAvancer : public CommandeRobot {

private:
    static CommandeAvancer instance;
public:
    CommandeAvancer(Invocator& invocator) {
        _invocator = invocator;
    }

    using CommandeRobot::CommandeRobot;

    CommandeRobot* virtualConstructor() {
        return new CommandeAvancer();
    }
    void execute(vector<string> parameters) {}
};

CommandeAvancer CommandeAvancer::instance("AVANCER");


//CommandeAvancer Comm = CommandeAvancer("lol");

//CommandeRobot c = CommandeRobot::newCommandeRobot("AVANCER");

#endif