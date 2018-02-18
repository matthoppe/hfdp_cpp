CC=g++

%.o : %.cpp
	$(CC) -Wall -Weffc++ -c $(CFLAGS) $(CPPFLAGS) $< -o $@

default: clean mainProg doxy

.PHONY: doxy doxyclean clean

doxy: doxyclean
	doxygen .doxyconfig

doxyclean:
	-rm -rf doxy

mainProg: FlyBehavior.o NoFlyBehavior.o QuackBehavior.o NoQuackBehavior.o Duck.o MallardDuck.o RedHeadDuck.o RubberDuck.o main.o
	$(CC) $^ -o $@ 

clean: doxyclean
	-rm *.o mainProg;

all: clean mainProg
