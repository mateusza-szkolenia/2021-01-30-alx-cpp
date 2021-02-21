CPP=g++

all: z02 test_tablica

z02: Osoba.o zadanie_02.o
	$(CPP) -o z02 zadanie_02.o Osoba.o

Osoba.o: zadanie_02/Osoba.hpp zadanie_02/Osoba.cpp
	$(CPP) -c zadanie_02/Osoba.cpp

zadanie_02.o: zadanie_02.cpp zadanie_02/Osoba.hpp
	$(CPP) -c zadanie_02.cpp

test: z02
	./z02

Tablica.o: Tablica.cpp Tablica.hpp
	$(CPP) -c Tablica.cpp

test_tablica: test_tablica.cpp Tablica.o
	$(CPP) -o test_tablica Tablica.o test_tablica.cpp 