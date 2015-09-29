#ifndef REDHEADDUCK_H
#include "RedHeadDuck.h"
#endif

#include <iostream>

RedHeadDuck::RedHeadDuck(void) {
  std::cout << "A RedHeadDuck Lives ... :| " << std::endl;
}

RedHeadDuck::~RedHeadDuck(void) {
  std::cout << "A RedHeadDuck Dies ... ;) " << std::endl;
}

void RedHeadDuck::display(void){
  std::cout << "I'm a RedHeadDuck." << std::endl;
}
