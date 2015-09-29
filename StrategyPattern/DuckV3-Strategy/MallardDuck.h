#ifndef MALLARDUCK_H
#define MALLARDUCK_H

#ifndef DUCK_H
#include "Duck.h"
#endif

class MallardDuck : virtual public Duck{
  public:
    MallardDuck(void);
    ~MallardDuck(void);

    // @Override
    void display();
  private:
};

#endif
