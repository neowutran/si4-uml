#ifndef _IOBSERVER_H
#define _IOBSERVER_H

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class IObservable;

class IObserver {

private:
    vector<IObservable *> _observables;

public:
    virtual void Update(IObservable *observable, string message) = 0;

    void Observe(IObservable *observable) {
        _observables.push_back(observable);
    }

    void Ignore(IObservable *observable) {
        _observables.erase(
                std::remove(_observables.begin(), _observables.end(), observable),
                _observables.end()
        );
    }
};

#endif
