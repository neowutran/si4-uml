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

        void Attach(IObserver* robot) {
            _observers.push_back(robot);
        }

        void Detach(IObserver* robot) {
            _observers.erase(std::remove(_observers.begin(), _observers.end(), robot), _observers.end());
        }

};

class Robot : IObservable {

    private:
        shared_ptr<State> _state = nullptr;
        string _direction;
        shared_ptr<Plot> _plotEnFace = nullptr;
        shared_ptr<Object> _object = nullptr;
        Position _position;
        bool _afficher = false;

    public:
        string direction() const;
        shared_ptr<Object> object() const;
        Position position() const;
        shared_ptr<State> state() const;
        shared_ptr<Plot> plot() const;

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
