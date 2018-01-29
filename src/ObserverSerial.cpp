#include "ObserverSerial.h"
#include "HardwareSerial.h"


void ObserverSerial::onReceivedDataFromSubject() {
    Serial.print("Value is "); //Serial.println(Observer::subject->getValue());
}