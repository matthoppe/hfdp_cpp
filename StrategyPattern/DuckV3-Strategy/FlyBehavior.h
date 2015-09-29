#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

class FlyBehavior{
  public:
    FlyBehavior(void);    
    virtual ~FlyBehavior(void);    
    virtual void fly(void) const = 0;
  private:
};

#endif
