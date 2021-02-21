CPP=g++

all: z02

Osoba.o: zadanie_02/Osoba.hpp zadanie_02/Osoba.cpp
	$(CPP) -c zadanie_02/Osoba.cpp

zadanie_02.o: zadanie_02.cpp zadanie_02/Osoba.hpp
	$(CPP) -c zadanie_02.cpp

z02: Osoba.o zadanie_02.o
	$(CPP) -o z02 zadanie_02.o Osoba.o
