#ifndef DECOYDUCK_H
#define DECOYDUCK_H

#ifndef DUCK_H
#include "Duck.h"
#endif

#ifndef QUACKABLE_H
#include "Quackable.h"
#endif

class DecoyDuck : virtual public Duck, virtual public Quackable {
  public:
    DecoyDuck(void);
    ~DecoyDuck(void);

    // @Override
    void display(void);

    // Implementation
    virtual void quack(void) const;
  private:  
};

#endif
