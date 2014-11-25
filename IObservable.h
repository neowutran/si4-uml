#ifndef _IOBSERVABLE_H
#define _IOBSERVABLE_H
#include <string>
#include <algorithm>
#include "IObserver.h"
using namespace std;
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

#endif
