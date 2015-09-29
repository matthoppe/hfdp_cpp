#ifndef YESFLYBEHAVIOR_H
#define YESFLYBEHAVIOR_H

#ifndef FLYBEHAVIOR_H
#include "FlyBehavior.h"
#endif

class YesFlyBehavior : virtual public FlyBehavior{
  public:
    YesFlyBehavior(void);    
    ~YesFlyBehavior(void);    
    virtual void fly(void) const;
  private:
};

#endif
