#include "ObserverSerial.h"
#include "HardwareSerial.h"

void ObserverSerial::attachSensor(SensorLM35* sensor){
    this->_sensor = sensor;
    this->_sensor->registerObserver(this);
}

void ObserverSerial::onReceivedDataFromSubject() {
    Serial.print("Value is "); Serial.println(this->_sensor->getValue());
}