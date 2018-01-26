#include "ObserverSerial.h"
#include "HardwareSerial.h"


void ObserverSerial::onReceivedDataFromSubject(const Subject<T> *sub) {
    Serial.print("Value is "); Serial.println(sub->getValue());
}