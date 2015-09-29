#ifndef YESQUACKBEHAVIOR_H
#include "YesQuackBehavior.h"
#endif

#include <iostream>

YesQuackBehavior::YesQuackBehavior(void){
}

YesQuackBehavior::~YesQuackBehavior(void){
}

void YesQuackBehavior::quack(void) const{
  std::cout << " Here a quack, There a quack ... " << std::endl;
}
