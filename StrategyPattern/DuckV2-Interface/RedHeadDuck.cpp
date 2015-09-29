#ifndef REDHEADDUCK_H
#include "RedHeadDuck.h"
#endif

#include <iostream>

RedHeadDuck::RedHeadDuck(void) {
  std::cout << "A RedHeadDuck Lives ... :| " << std::endl;

  setCanFly( true );
  setCanQuack( true );
}

RedHeadDuck::~RedHeadDuck(void) {
  std::cout << "A RedHeadDuck Dies ... ;) " << std::endl;
}

void RedHeadDuck::display(void){
  std::cout << "I'm a RedHeadDuck." << std::endl;
}

void RedHeadDuck::fly(void) const{
  std::cout << " A RedHeadDuck flies ... " << std::endl;
}

void RedHeadDuck::quack(void) const{
  std::cout << " A RedHeadDuck quacks ... " << std::endl;
}
