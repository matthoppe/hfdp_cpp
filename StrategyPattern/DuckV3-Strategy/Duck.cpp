#ifndef DUCK_H
#include "Duck.h"
#endif 

#ifndef NOFLYBEHAVIOR_H
#include "NoFlyBehavior.h"
#endif

#ifndef NOQUACKBEHAVIOR_H
#include "NoQuackBehavior.h"
#endif


#include <iostream>

Duck::Duck(void) :
  flyImpl( new NoFlyBehavior() ),
  quackImpl( new NoQuackBehavior() )
{
  std::cout << "Default: Duck Lives..." << std::endl;
}

Duck::~Duck(void) {
  std::cout << "Default: Duck Dies..." << std::endl;

  if( flyImpl ){
    delete flyImpl;
    flyImpl = 0;
  }
  if( quackImpl ){
    delete quackImpl;
    quackImpl = 0;
  }
}

void Duck::swim(void){
  std::cout << "Default: I can Swim..." << std::endl;
}

void Duck::display(void){
  std::cout << "Default: A Duck on Display..." << std::endl;
}

void Duck::fly(void){
  flyImpl->fly();
}

void Duck::quack(void){
  quackImpl->quack();
}

void Duck::setFlyBehavior(FlyBehavior *beh){
  if( beh ){
    if( flyImpl ){
      delete flyImpl;
      flyImpl = 0;
    }

    flyImpl = beh;
  }
}

void Duck::setQuackBehavior(QuackBehavior *beh){
  if( beh ){
    if( quackImpl ){
      delete quackImpl;
      quackImpl = 0;
    }  

    quackImpl = beh;
  }
}
