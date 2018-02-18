#ifndef DUCK_H
#include "Duck.h"
#endif

#ifndef MALLARDUCK_H
#include "MallardDuck.h"
#endif

#ifndef REDHEADDUCK_H
#include "RedHeadDuck.h"
#endif

#ifndef RUBBERDUCK_H
#include "RubberDuck.h"
#endif

#ifndef FLYABLE_H
#include "Flyable.h"
#endif

#ifndef QUACKABLE_H
#include "Quackable.h"
#endif

#include <iostream>
#include <algorithm>
#include <vector>

void makeDuckDo( Duck *singleDuck )
{
  std::cout << std::endl;

  if( singleDuck->getCanFly() ) {
    Flyable *flyingDuck =  dynamic_cast<Flyable*> ( singleDuck );
    flyingDuck->fly();
  }
  if( singleDuck->getCanQuack() ){
    Quackable *quackableDuck = dynamic_cast<Quackable*> (singleDuck); 
    quackableDuck->quack();
  }

  singleDuck->swim();
  singleDuck->display();
  std::cout << std::endl;
}

void makeDuckDie( Duck *singleDuck )
{
  delete singleDuck;
  singleDuck = 0;
}

int main( int argc, char **argv )
{
  std::cout << "Example of Inheritance Issue: " << std::endl;

  std::vector< Duck* > barrel;
  
  barrel.push_back( new Duck() );
  barrel.push_back( new MallardDuck() );
  barrel.push_back( new RedHeadDuck() );
  barrel.push_back( new RubberDuck() );

  for_each( barrel.begin(), barrel.end(), makeDuckDo );
  std::cout << " !It's hunting season! " << std::endl; 
  for_each( barrel.begin(), barrel.end(), makeDuckDie );

  return 0;
}
