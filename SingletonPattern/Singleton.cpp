#include "Singleton.h"

Singleton *Singleton::self(){
  static Singleton instance;
  return &instance;  
}
