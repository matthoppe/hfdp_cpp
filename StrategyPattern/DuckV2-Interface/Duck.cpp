#ifndef DUCK_H
#include "Duck.h"
#endif 

#include <iostream>

Duck::Duck(void) :
  canQuack( false ),
  canFly( false ) {
  std::cout << "Default: Duck Lives..." << std::endl;
}

Duck::~Duck(void) {
  std::cout << "Default: Duck Dies..." << std::endl;
}

void Duck::swim(void){
  std::cout << "Default: I can Swim..." << std::endl;
}

void Duck::display(void){
  std::cout << "Default: A Duck on Display..." << std::endl;
}

void Duck::setCanQuack(bool rep){
  canQuack = rep;
}

bool Duck::getCanQuack(void){
  return canQuack;
}

void Duck::setCanFly(bool rep){
  canFly = rep;
}

bool Duck::getCanFly(void){
  return canFly;
}
