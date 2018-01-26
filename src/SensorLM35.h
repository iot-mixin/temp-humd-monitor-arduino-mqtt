#ifndef SENSORLM35_H
#define SENSORLM35_H

#include "Subject.h"
#include "Thread.h"

class SensorLM35 : public Thread, public Subject
{
  private:
    int pin;
    double temp;
    
    void setValue(double);

  public:
    void setPin(int);
    int getPin();
    double getValue() const;
    void run();
};

#endif