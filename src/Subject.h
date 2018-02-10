#ifndef SUBJECT_H
#define SUBJECT_H
class Observer;

class Subject
{
public:
  Subject();
  void registerObserver(Observer *);
  void unregisterObserver();

protected:
  void _notifyObserver();
  Observer *mObserver;
};
#endif