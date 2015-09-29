#ifndef SQUEAKQUACKBEHAVIOR_H
#define SQUEAKQUACKBEHAVIOR_H

#ifndef QUACKBEHAVIOR_H
#include "QuackBehavior.h"
#endif 

class Squeak : virtual public QuackBehavior {
  public:
    Squeak(void);
    ~Squeak(void);
    virtual void quack(void) const;
  private:
};

#endif
