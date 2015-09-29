CC=g++

%.o : %.cpp
	$(CC) -Wall -Weffc++ -c $(CFLAGS) $(CPPFLAGS) $< -o $@

mainProg: Flyable.o Quackable.o Duck.o MallardDuck.o RedHeadDuck.o RubberDuck.o main.o
	$(CC) -o mainProg main.o RubberDuck.o RedHeadDuck.o MallardDuck.o Duck.o Flyable.o Quackable.o

clean:
	rm *.o mainProg

all: clean mainProg
