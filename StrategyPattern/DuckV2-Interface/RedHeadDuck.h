#ifndef REDHEADDUCK_H
#define REDHEADDUCK_H

#ifndef DUCK_H
#include "Duck.h"
#endif

#ifndef FLYABLE_H
#include "Flyable.h"
#endif

#ifndef QUACKABLE_H
#include "Quackable.h"
#endif

class RedHeadDuck : virtual public Duck, virtual public Flyable, virtual public Quackable {
  public:
    RedHeadDuck(void);
    ~RedHeadDuck(void);

    // @Override
    void display();

    // Implementations
    virtual void fly(void) const;
    virtual void quack(void) const;
  private:  
};

#endif
