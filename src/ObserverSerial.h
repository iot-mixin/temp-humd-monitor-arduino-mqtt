#ifndef OBSERVERSERIAL_H
#define OBSERVERSERIAL_H

#include "Observer.h"
template <typename E>
class ObserverSerial : public Observer
{
  public:
    void onReceivedDataFromSubject(const Subject*) override;
};
#endif
