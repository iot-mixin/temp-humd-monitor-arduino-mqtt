#include "ObserverSerial.h"
#include "SensorTemp.h"
#include "ThreadController.h"

SensorTemp sensor;
ObserverSerial observer;
ThreadController controller;
void setup()
{
    Serial.begin(9600);
    while (!Serial)
    {
        ;
    }
    observer.attachSubject(&sensor);
    sensor.setPin(A0);
    sensor.setInterval(1000);

    controller.add(&sensor);
}

void loop()
{
    controller.run();
}
