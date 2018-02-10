#include "ObserverSerial.h"
#include "HardwareSerial.h"

template <typename E>
void ObserverSerial<E>::onReceivedDataFromSubject(const Subject* subject) {
    Serial.print("Value is "); Serial.println(Observer::subject->getValue());
}
