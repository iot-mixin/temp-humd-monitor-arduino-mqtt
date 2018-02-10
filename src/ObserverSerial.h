#ifndef OBSERVERSERIAL_H
#define OBSERVERSERIAL_H

#include "Observer.h"
template <typename E>
class ObserverSerial : public Observer
{
  private:
    SensorLM35<E> *subject;

  public:
    void onReceivedDataFromSubject() override;
    void registerSubject(SensorLM35<E> _subject);
};
#endif
