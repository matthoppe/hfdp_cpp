#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

class QuackBehavior{
  public:
    QuackBehavior(void);
    virtual ~QuackBehavior(void);
    virtual void quack(void) const = 0;
  private:
};

#endif
