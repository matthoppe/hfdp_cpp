CC=g++

%.o : %.cpp
	$(CC) -Wall -Weffc++ -c $(CFLAGS) $(CPPFLAGS) $< -o $@

default: clean mainProg doxy

.PHONY: doxy doxyclean clean

doxy: doxyclean
	doxygen .doxyconfig

doxyclean:
	-rm -rf doxy

mainProg: main.o RubberDuck.o RedHeadDuck.o MallardDuck.o Duck.o
	$(CC) $^ -o $@

clean: doxyclean
	-rm *.o mainProg;

all: clean mainProg
