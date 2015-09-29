#ifndef NOQUACKBEHAVIOR_H
#include "NoQuackBehavior.h"
#endif

#include <iostream>

NoQuackBehavior::NoQuackBehavior(void){
}

NoQuackBehavior::~NoQuackBehavior(void){
}

void NoQuackBehavior::quack(void) const{
  std::cout << " This does not quack ... " << std::endl;
}
