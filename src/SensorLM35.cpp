#include "SensorLM35.h"

void SensorLM35::setPin(int _pin)
{
    pin = _pin;
}

void SensorLM35::setValue(const double rawADC)
{
    temp = (1.1 * rawADC * 100.0) / 1024.0;
    Subject::_notifyObserver();
}

int SensorLM35::getPin()
{
    return pin;
}

double SensorLM35::getValue() const
{
    return temp;
}

void SensorLM35::run()
{
    setValue(double(analogRead(pin)));
    runned();
}