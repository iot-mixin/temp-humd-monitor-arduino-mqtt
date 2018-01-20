#include <Arduino.h>
#line 1 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/Observer.cpp"
#line 1 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/Observer.cpp"
#include "Observer.h"
#include "Subject.h"

void Observer::attachSubject(Subject * subject) {
    subject->registerObserver(this);
#line 6 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/temp-humd.ino"
void setup();
#line 12 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/temp-humd.ino"
void loop();
#line 6 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/temp-humd.ino"
}
#line 1 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/temp-humd.ino"
#include "Observer.h"
#include "SensorTemp.h"
#include "ThreadController.h"


void setup(){
    Serial.begin(9600);
    while(!Serial){;}
}


void loop(){

}


