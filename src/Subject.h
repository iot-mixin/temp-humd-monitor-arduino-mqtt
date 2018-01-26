#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

class Subject
{
  public:
    void registerObserver(Observer * observer);
    void unregisterObserver();

  protected:
    Observer *mObserver;
    void _notifyObserver();
};

#endif