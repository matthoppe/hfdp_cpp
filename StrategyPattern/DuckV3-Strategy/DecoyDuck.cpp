#ifndef DECOYDUCK_H
#include "DecoyDuck.h"
#endif

#include <iostream>

DecoyDuck::DecoyDuck(void) {
  std::cout << "A DecoyDuck Lives ... " << std::endl;
  setCanQuack( true );
}

DecoyDuck::~DecoyDuck(void) {
  std::cout << "A DecoyDuck Dies ... " << std::endl;
}

void DecoyDuck::display(void){
  std::cout << "I'm a DecoyDuck." << std::endl;
}

void DecoyDuck::quack(void) const{
  std::cout << " DecoyDuck fake attractive quack ... " << std::endl;
}
