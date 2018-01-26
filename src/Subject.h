#ifndef SUBJECT_H
#define SUBJECT_H
class Observer;
template <typename T>
class Subject
{
  public:
    Subject();
    void registerObserver(Observer *);
    void unregisterObserver();
    virtual T getValue() const = 0;

  protected:
    void _notifyObserver();
    Observer *mObserver;
    virtual void setValue(const T val) = 0;
};
#endif