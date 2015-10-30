#include <iostream>
#include <pthread.h>
#include <assert.h>
#include <cstdio>
#include <cstdlib>

#include "Singleton.h"

#define NUM_THREADS 15

void *thread(void *args) 
{
  //int arg_int = *( reinterpret_cast< int * > (args) );
  char *buffer = new char[150];

  //std::cout << arg_int << " | " << Singleton::self() << "::" << Singleton::self()->getAnswerToTheUniverse() << std::endl;
  //std::cout << Singleton::self() << ":: Answer " << Singleton::self()->getAnswerToTheUniverse() << std::endl;
  sprintf( buffer, "Singleton Addr [%#08x] --> Result [%d]", Singleton::self(), Singleton::self()->getAnswerToTheUniverse() ); 

  return buffer;
}

int main(int argc, char* argv[])
{
  //std::cout << Singleton::self() << "::" << Singleton::self()->getAnswerToTheUniverse() << std::endl;
  pthread_t threads[NUM_THREADS];
  int thread_args[NUM_THREADS];

  for( int index=0; index < NUM_THREADS; ++index )
  {
      thread_args[index] = index;
      std::cout << "Creating Thread[" << index << "]" << std::endl;
      int result_code = pthread_create(&threads[index], NULL, thread, (void *) &thread_args[index]);
      assert (0 == result_code);
  }

  for ( int index=0; index < NUM_THREADS; ++index )
  {
      char *exit_string=0;
      int result_code = pthread_join( threads[index], ( (void **) &exit_string) );
      std::cout << "Finished Thread[" << index << "]" << ( exit_string ? exit_string : "" )  << std::endl;
      delete exit_string;
      assert(0 == result_code);
  }  

  return 0;
}
