#ifndef NOFLYBEHAVIOR_H
#define NOFLYBEHAVIOR_H

#ifndef FLYBEHAVIOR_H
#include "FlyBehavior.h"
#endif

class NoFlyBehavior : virtual public FlyBehavior{
  public:
    NoFlyBehavior(void);    
    ~NoFlyBehavior(void);    
    virtual void fly(void) const;
  private:
};

#endif
