#ifndef MALLARDUCK_H
#include "MallardDuck.h"
#endif

#include <iostream>

MallardDuck::MallardDuck(void)  {
  std::cout << "A MallardDuck Lives ... :) " << std::endl;
}

MallardDuck::~MallardDuck(void){
  std::cout << "A MallardDuck Dies ... :( " << std::endl;
}

void MallardDuck::display(void){
  std::cout << "I'm a MallardDuck." << std::endl;
}
