#ifndef MALLARDUCK_H
#define MALLARDUCK_H

#ifndef DUCK_H
#include "Duck.h"
#endif

#ifndef FLYABLE_H
#include "Flyable.h"
#endif

#ifndef QUACKABLE_H
#include "Quackable.h"
#endif

class MallardDuck : virtual public Duck, virtual public Flyable, virtual public Quackable {
  public:
    MallardDuck(void);
    ~MallardDuck(void);

    // @Override
    void display();

    // Implementations
    virtual void fly(void) const;
    virtual void quack(void) const; 
  private:
};

#endif
