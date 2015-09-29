#ifndef DUCK_H
#define DUCK_H

class Duck{
  public:
    Duck(void);
    virtual ~Duck(void);

    void fly(void);
    void quack(void);
    void swim(void);
    virtual void display(void);
  private:
};
#endif
