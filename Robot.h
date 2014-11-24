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
#include "State.h"
using namespace std;

class State;
class IObservable;

class IObserver{

    private:
        vector<IObservable*> _observables;

    public:
        virtual void Update(IObservable* observable, string message) = 0;
        void Observe(IObservable* observable) {
            _observables.push_back(observable);
        }

        void Ignore(IObservable* observable) {
            _observables.erase(
                    std::remove(_observables.begin(), _observables.end(), observable),
                    _observables.end()
            );
        }
};

class IObservable {

    private:
        vector<IObserver*> _observers;

    public:
        void NotifyAll(string message) {
            for (uint i = 0; i < _observers.size(); ++i) {
                _observers.at(i)->Update(this, message);
            }
        }

        void Attach(IObserver* observer) {
            _observers.push_back(observer);
            observer->Observe(this);    // propagate to the Observer
        }

        void Detach(IObserver* observer) {
            _observers.erase(
                    std::remove(_observers.begin(), _observers.end(), observer),
                    _observers.end()
            );
            observer->Ignore(this); // propagate to the observer
        }
};

class Robot : public IObservable {

    private:
        shared_ptr<State> _state = nullptr;
        string _direction;
        shared_ptr<Plot> _plotEnFace = nullptr;
        shared_ptr<Object> _object = nullptr;
        Position _position;
        bool _afficher = false;
        string _name = "DefaultName";

public:
    string direction() const;
    shared_ptr<Object> object() const;
    Position position() const;
    shared_ptr<State> state() const;
    shared_ptr<Plot> plot() const;


    Robot(string name = "DefaultName");

    string getNom() const { return _name; }

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

    bool getAfficher() const;
    void setAfficher();

    string toString() const;
    friend std::ostream& operator<<(std::ostream&, const Robot&);

};

#endif
