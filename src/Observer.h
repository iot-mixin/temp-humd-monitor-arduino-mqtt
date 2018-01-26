#ifndef OBSERVER_H
#define OBSERVER_H
#include "Subject.h"

class Observer
{
  public:
    template <typename T>
    void attachSubject(Subject<T> *subject);
    virtual void onReceivedDataFromSubject(const Subject<T> *) = 0;
};
#endif