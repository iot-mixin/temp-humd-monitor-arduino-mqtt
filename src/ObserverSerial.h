#ifndef OBSERVERSERIAL_H
#define OBSERVERSERIAL_H

#include "Observer.h"
 
class ObserverSerial : public Observer
{
public:
template <typename T>
    void onReceivedDataFromSubject(const Subject<T> *) override;
};
#endif
