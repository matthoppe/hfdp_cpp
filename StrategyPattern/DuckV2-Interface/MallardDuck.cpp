#ifndef MALLARDUCK_H
#include "MallardDuck.h"
#endif

#include <iostream>

MallardDuck::MallardDuck(void){
  std::cout << "A MallardDuck Lives ... :) " << std::endl;
 
  setCanFly( true ); 
  setCanQuack( true );
}

MallardDuck::~MallardDuck(void){
  std::cout << "A MallardDuck Dies ... :( " << std::endl;
}

void MallardDuck::display(void){
  std::cout << "I'm a MallardDuck." << std::endl;
}

void MallardDuck::fly(void) const{
  std::cout << " A MallardDuck Flies ... " << std::endl;
}

void MallardDuck::quack(void) const{
  std::cout << " A MallardDuck Quack ... " << std::endl;
}
