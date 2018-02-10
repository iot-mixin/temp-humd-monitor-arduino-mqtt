#ifndef SENSORLM35_H
#define SENSORLM35_H
#include "Subject.h"
#include "Thread.h"

template <typename E>
class SensorLM35 : public Thread, public Subject<double>
{
  private:
    int pin;
    E temp;
    
    void setValue(const E);

  public:
    void setPin(int);
    int getPin();
    const E getValue();
    void run();
};

#endif