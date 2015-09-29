#ifndef NOFLYBEHAVIOR_H
#include "NoFlyBehavior.h"
#endif

#include <iostream>

NoFlyBehavior::NoFlyBehavior(void){
}
NoFlyBehavior::~NoFlyBehavior(void){
}

void NoFlyBehavior::fly(void) const{
  std::cout << " This is apart of the no-fly club " << std::endl;
}
