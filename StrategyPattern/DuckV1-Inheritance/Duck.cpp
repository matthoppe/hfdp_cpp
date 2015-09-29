#ifndef DUCK_H
#include "Duck.h"
#endif

#include <iostream>

Duck::Duck(void) {
  std::cout << "Default: Duck Lives..." << std::endl;
}

Duck::~Duck(void) {
  std::cout << "Default: Duck Dies..." << std::endl;
}

void Duck::fly(void){
  std::cout << "Default: I can Fly..." << std::endl;
}

void Duck::quack(void){
  std::cout << "Default: I can Quack..." << std::endl;
}

void Duck::swim(void){
  std::cout << "Default: I can Swim..." << std::endl;
}

void Duck::display(void){
  std::cout << "Default: A Duck on Display..." << std::endl;
}
