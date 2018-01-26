#include "Observer.h"
#include "Subject.h"

void Observer::attachSubject(Subject<T> * subject) {
    subject->registerObserver(this);
}