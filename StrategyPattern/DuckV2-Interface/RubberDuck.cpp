#ifndef RUBBERDUCK_H
#include "RubberDuck.h"
#endif

#include <iostream>

RubberDuck::RubberDuck(void) {
  std::cout << "A RubberDuck Lives ... :| " << std::endl;
  setCanQuack( true );
}

RubberDuck::~RubberDuck(void) {
  std::cout << "A RubberDuck Dies ... Quack Quack " << std::endl;
}

void RubberDuck::display(void){
  std::cout << "I'm a RubberDuck." << std::endl;
}

void RubberDuck::quack(void) const{
  std::cout << " RubberDuck fake quack ... " << std::endl;
}
