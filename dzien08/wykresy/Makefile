all: test1

test1: test1.cpp Wykresy.o lib/SVG.o

lib/SVG.o: lib/SVG.cpp lib/SVG.hpp

Wykresy.o: Wykresy.cpp Wykresy.hpp

clean:
	rm -rf test1 *.o

run: test1
	./test1
