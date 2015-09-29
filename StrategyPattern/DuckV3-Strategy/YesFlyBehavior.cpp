#ifndef YESFLYBEHAVIOR_H
#include "YesFlyBehavior.h"
#endif

#include <iostream>

YesFlyBehavior::YesFlyBehavior(void){
}
YesFlyBehavior::~YesFlyBehavior(void){
}

void YesFlyBehavior::fly(void) const{
  std::cout << " This is apart of the can-fly club " << std::endl;
}
