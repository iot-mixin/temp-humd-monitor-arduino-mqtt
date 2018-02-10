#include "SensorLM35.h"

template <typename E>
void SensorLM35<E>::setPin(int _pin)
{
    pin = _pin;
}

template <typename E>
void SensorLM35<E>::setValue(const E rawADC)
{
    temp = (1.1 * rawADC * 100.0) / 1024.0;
    Subject::_notifyObserver();
}

template <typename E>
int SensorLM35<E>::getPin()
{
    return pin;
}

template <typename E>
const E SensorLM35<E>::getValue()
{
    return temp;
}

template <typename E>
void SensorLM35<E>::run()
{
    setValue(double(analogRead(pin)));
    runned();
}