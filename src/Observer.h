#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
  public:
    virtual void onReceivedDataFromSubject(const Subject*) = 0;
};
#endif