#include <iostream>
#include "Osoba.hpp"

Osoba::Osoba(std::string imie, double waga, double wzrost){
    this->imie = imie;
    this->waga = waga;
    this->wzrost = wzrost;
    std::cout << "Hej, nazywam sie " << imie << "\n";
}
