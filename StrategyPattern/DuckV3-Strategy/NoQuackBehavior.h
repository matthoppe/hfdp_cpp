#ifndef NOQUACKBEHAVIOR_H
#define NOQUACKBEHAVIOR_H

#ifndef QUACKBEHAVIOR_H
#include "QuackBehavior.h"
#endif 

class NoQuackBehavior : virtual public QuackBehavior {
  public:
    NoQuackBehavior(void);
    ~NoQuackBehavior(void);
    virtual void quack(void) const;
  private:
};

#endif
