#include "Observer.h"
#include "Subject.h"

template <typename T>
void Observer::attachSubject(Subject<T> * subject) {
    subject->registerObserver(this);
}