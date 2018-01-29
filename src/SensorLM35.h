#ifndef SENSORLM35_H
#define SENSORLM35_H
#include "Subject.h"
#include "Thread.h"

class SensorLM35 : public Thread, public Subject<double>
{
  private:
    int pin;
    double temp;
    
    void setValue(const double) override;

  public:
    void setPin(int);
    int getPin();
    double getValue() const override;
    void run();
};

#endif