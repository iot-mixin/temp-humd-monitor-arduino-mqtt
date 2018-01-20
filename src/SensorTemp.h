#ifndef SENSOR_H
#define SENSOR_H
#include "Subject.h"
#include "Thread.h"

class SensorTemp : public Thread, public Subject
{
  private:
    int pin;
    double temp;
    
    void setValue(int);

  public:
    void setPin(int);
    int getPin();
    double getValue() const;
    void run();
};

#endif