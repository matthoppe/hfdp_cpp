#ifndef DUCK_H
#define DUCK_H

class FlyBehavior;
class QuackBehavior;

class Duck{
  public:
    Duck(void);
    virtual ~Duck(void);

    // Member Functions moved to Pure Virutal in Class Flyable and Quackable
    void fly(void);
    void quack(void);
    void swim(void);
    virtual void display(void);

    void setFlyBehavior(FlyBehavior *beh);
    void setQuackBehavior(QuackBehavior *beh);

  private:
    FlyBehavior *flyImpl;
    QuackBehavior *quackImpl;
};
#endif
