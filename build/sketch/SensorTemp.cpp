#include "SensorTemp.h"

void SensorTemp::setPin(int _pin)
{
    pin = _pin;
}

void SensorTemp::setValue(int rawADC)
{
    temp = (5.0 * rawADC * 100.0) / 1023.0;
}

int SensorTemp::getPin()
{
    return pin;
}

double SensorTemp::getValue()
{
    return temp;
}

void SensorTemp::run(){
    setValue(analogRead(pin));
        runned();
}