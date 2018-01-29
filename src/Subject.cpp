#include "Subject.h"
#include "Observer.h"
template <typename T>
Subject<T>::Subject()
{
}
template <typename T>
void Subject<T>::registerObserver(Observer *obs)
{
    mObserver = obs; //we will only allow one observer
}
template <typename T>
void Subject<T>::unregisterObserver()
{
    mObserver = nullptr;
}
template <typename T>
void Subject<T>::_notifyObserver()
{
    if (mObserver != nullptr)
    {
        mObserver->onReceivedDataFromSubject(this);
    }
}
