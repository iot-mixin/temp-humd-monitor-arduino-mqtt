# 1 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/Observer.cpp"
# 1 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/Observer.cpp"
# 2 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/Observer.cpp" 2


void Observer::attachSubject(Subject * subject) {
    subject->registerObserver(this);
}
# 1 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/temp-humd.ino"

# 3 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/temp-humd.ino" 2
# 4 "/home/pablo/Documentos/Pruebas/temp-humd-monitor-arduino-mqtt/src/temp-humd.ino" 2


void setup(){
    Serial.begin(9600);
    while(!Serial){;}
}


void loop(){

}
