#ifndef QUACKABLE_H
#define QUACKABLE_H

class Quackable{
  public:
    Quackable(void);
    virtual ~Quackable(void){};
    virtual void quack(void) const = 0;
  private:
};

#endif
