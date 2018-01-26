#include "Subject.h"

void Subject::registerObserver(Observer *observer){
    this->mObserver = observer;
}

void Subject::unregisterObserver(){
    this->mObserver = nullptr;
}

void Subject::_notifyObserver(){
    if(this->mObserver)
    this->mObserver->onReceivedDataFromSubject();
}
