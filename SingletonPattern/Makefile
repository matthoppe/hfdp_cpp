CC=g++
CPPFLAGS=-fPIC -pie -std=c++98
%.o : %.cpp
	$(CC) -Wall -Weffc++ -c $(CFLAGS) $(CPPFLAGS) $< -o $@

mainProg: Singleton.o main.o
	$(CC) $^ -lpthread -o $@ 

clean:
	rm *.o mainProg

all: clean mainProg
