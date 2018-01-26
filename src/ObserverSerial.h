#ifndef OBSERVERSERIAL_H
#define OBSERVERSERIAL_H

#include "Observer.h"
#include "SensorLM35.h"

class ObserverSerial : public Observer
{
  public:
    void attachSensor(SensorLM35 *);
    void onReceivedDataFromSubject() override;

  protected:
    SensorLM35* _sensor;
};
#endif
