#ifndef SENSOR_H
#define SENSOR_H
#include "Subject.h"
#include "Thread.h"

class SensorTemp : public Thread, public Subject
{
    private:
        int pin;
        double temp;

        void setPin(int);
        void setValue(int);
    public:
        int getPin();
        double getValue();
        void run();
};

#endif