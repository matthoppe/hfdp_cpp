#ifndef FLYABLE_H
#define FLYABLE_H

class Flyable{
  public:
    Flyable(void);    
    virtual ~Flyable(){};
    virtual void fly(void) const = 0;
  private:
};

#endif
