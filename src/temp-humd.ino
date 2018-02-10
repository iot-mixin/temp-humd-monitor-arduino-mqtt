#include "ObserverSerial.h"
#include "SensorLM35.h"
#include "ThreadController.h"

SensorLM35<double> sensor;
ObserverSerial<double> observer;
ThreadController controller;
void setup()
{
    analogReference(INTERNAL);
    Serial.begin(9600);
    while (!Serial)
    {
        ;
    }
    sensor.registerObserver(&observer);
    sensor.setPin(A0);
    sensor.setInterval(1000);
    observer.registerSubject(&sensor);
    controller.add(&sensor);
}

void loop()
{
    controller.run();
}
