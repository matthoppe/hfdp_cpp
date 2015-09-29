#ifndef DUCK_H
#define DUCK_H

class Duck{
  public:
    Duck(void);
    virtual ~Duck(void);

    // Member Functions moved to Pure Virutal in Class Flyable and Quackable
    //void fly(void);
    //void quack(void);
    void swim(void);
    virtual void display(void);

    void setCanQuack(bool rep);
    bool getCanQuack(void);

    void setCanFly(bool rep);
    bool getCanFly(void);

  private:
    bool canQuack;
    bool canFly;
};
#endif
