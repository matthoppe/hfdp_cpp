#ifndef YESQUACKBEHAVIOR_H
#define YESQUACKBEHAVIOR_H

#ifndef QUACKBEHAVIOR_H
#include "QuackBehavior.h"
#endif 

class YesQuackBehavior : virtual public QuackBehavior {
  public:
    YesQuackBehavior(void);
    ~YesQuackBehavior(void);
    virtual void quack(void) const;
  private:
};

#endif
