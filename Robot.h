#ifndef _ROBOT_H
#define _ROBOT_H
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <list>
#include "Plot.h"
#include "Object.h"
#include "Position.h"
using namespace std;
class IObserver{

    public: 
        virtual void Update(string direction) = 0;

};


class State {
vector<IObserver*> list;
    protected:

    State() {
    }

    
public:

    void Attach(IObserver* robot);
    void Detach(IObserver* robot);
    void Notify(shared_ptr<Object> object, shared_ptr<Plot> plot, shared_ptr<State> state, shared_ptr<Position>, string direction);
    class InvalidActionException {
    };
    virtual shared_ptr<State> avancer(int x, int y);
    virtual shared_ptr<State> tourner(string direction);
    virtual shared_ptr<State> figer();
    virtual shared_ptr<State> repartir();
    virtual shared_ptr<State> rencontrerPlot(shared_ptr<Plot> p);
    virtual shared_ptr<State> evaluerPlot();
    virtual shared_ptr<State> saisir(shared_ptr<Object> o);
    virtual shared_ptr<State> poser();
    virtual shared_ptr<State> peser();

    virtual string get_name() const {

        return "State";
    }

    friend std::ostream& operator<<(std::ostream& strm, shared_ptr<State> state) {
        strm << state->get_name();
        return strm;

    }
};



class Robot : IObserver{
private:
    shared_ptr<State> _state;
    string _direction;
    shared_ptr<Plot> _plotEnFace;
    shared_ptr<Object> _object;
    Position _position;
    bool _afficher = false;

public:
    string direction() const;
    shared_ptr<Object> object() const;
    Position position() const;
    shared_ptr<State> state() const;
    shared_ptr<Plot> plot() const;

    void Update(string direction);
    Robot();
    void avancer(int x, int y);
    void tourner(string direction);
    void saisir(shared_ptr<Object> o);
    void poser();
    int peser();
    void rencontrerPlot(shared_ptr<Plot> p);
    int evaluerPlot();
    void figer();
    void repartir();
    void afficher();
    friend std::ostream& operator<<(std::ostream&, const Robot&);

};

#endif
