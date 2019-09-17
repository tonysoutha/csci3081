EXEFILE = ducks
CXXFLAGS = -c -Wall
SOURCES = $(wildcard *.cc)
OBJECTS=$(SOURCES:.cc=.o)

ducks: duck.o mallard_duck.o decoy_duck.o rubber_duck.o quack_behavior.o mute_quack.o quack_quack.o squeak_quack.o main.o
	g++ $^ -o $@

%.o: %.cc
	g++ $(CXXFLAGS) $^ -o $@

clean:
	rm *.o $(EXEFILE)

.PHONY: clean
