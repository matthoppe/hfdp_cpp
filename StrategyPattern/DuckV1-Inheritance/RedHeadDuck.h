#ifndef REDHEADDUCK_H
#define REDHEADDUCK_H

#ifndef DUCK_H
#include "Duck.h"
#endif

class RedHeadDuck : virtual public Duck {
  public:
    RedHeadDuck(void);
    ~RedHeadDuck(void);

    // @Override
    void display();
  private:  
};

#endif
