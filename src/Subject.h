#ifndef SUBJECT_H
#define SUBJECT_H
class Observer;

class Subject {
public:
    Subject();
    void registerObserver(Observer*); 
    void unregisterObserver();
    virtual double getValue()const=0;

protected:
    void _notifyObserver();
    Observer* mObserver;
    virtual void setValue(const int val)=0;
};
#endif