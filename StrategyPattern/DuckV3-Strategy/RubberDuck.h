#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#ifndef DUCK_H
#include "Duck.h"
#endif

class RubberDuck : virtual public Duck{
  public:
    RubberDuck(void);
    ~RubberDuck(void);

    // @Override
    void display(void);
  private:  
};

#endif
