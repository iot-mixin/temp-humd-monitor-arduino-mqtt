#include "Subject.h"
#include "Observer.h"

Subject::Subject()
{
}

void Subject::registerObserver(Observer<T> *obs)
{
    mObserver = obs; //we will only allow one observer
}

void Subject::unregisterObserver()
{
    mObserver = nullptr;
}

void Subject::_notifyObserver()
{
    if (mObserver != nullptr)
    {
        mObserver->onReceivedDataFromSubject(this);
    }
}
