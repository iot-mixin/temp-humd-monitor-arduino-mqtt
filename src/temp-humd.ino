#include "ObserverSerial.h"
#include "SensorLM35.h"
#include "ThreadController.h"

SensorLM35 sensor;
ObserverSerial observer;
ThreadController controller;
void setup()
{
    analogReference(INTERNAL);
    Serial.begin(9600);
    while (!Serial)
    {
        ;
    }
    observer.attachSensor(&sensor);
    sensor.setPin(A0);
    sensor.setInterval(1000);

    controller.add(&sensor);
}

void loop()
{
    controller.run();
}
