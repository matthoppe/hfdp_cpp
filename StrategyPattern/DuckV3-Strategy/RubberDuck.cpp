#ifndef RUBBERDUCK_H
#include "RubberDuck.h"
#endif

#include <iostream>

RubberDuck::RubberDuck(void) {
  std::cout << "A RubberDuck Lives ... :| " << std::endl;
}

RubberDuck::~RubberDuck(void) {
  std::cout << "A RubberDuck Dies ... Quack Quack " << std::endl;
}

void RubberDuck::display(void){
  std::cout << "I'm a RubberDuck." << std::endl;
}
