CC=g++

%.o : %.cpp
	$(CC) -Wall -Weffc++ -c $(CFLAGS) $(CPPFLAGS) $< -o $@

mainProg: FlyBehavior.o NoFlyBehavior.o QuackBehavior.o NoQuackBehavior.o Duck.o MallardDuck.o RedHeadDuck.o RubberDuck.o main.o
	$(CC) $^ -o $@ 

clean:
	rm *.o mainProg

all: clean mainProg
