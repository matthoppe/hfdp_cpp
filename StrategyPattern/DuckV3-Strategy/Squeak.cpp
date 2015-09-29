#ifndef SQUEAKQUACKBEHAVIOR_H
#include "Squeak.h"
#endif

#include <iostream>

Squeak::Squeak(void){
}

Squeak::~Squeak(void){
}

void Squeak::quack(void) const{
  std::cout << " This does a squeak squeak squeak ... " << std::endl;
}
