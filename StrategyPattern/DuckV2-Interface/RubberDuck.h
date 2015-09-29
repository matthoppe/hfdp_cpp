#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#ifndef DUCK_H
#include "Duck.h"
#endif

#ifndef QUACKABLE_H
#include "Quackable.h"
#endif

class RubberDuck : virtual public Duck, virtual public Quackable {
  public:
    RubberDuck(void);
    ~RubberDuck(void);

    // @Override
    void display(void);

    // Implementation
    virtual void quack(void) const;
  private:  
};

#endif
