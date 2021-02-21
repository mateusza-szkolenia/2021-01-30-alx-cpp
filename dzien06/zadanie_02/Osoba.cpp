#include <iostream>
#include "Osoba.hpp"

Osoba::Osoba(std::string imie, double waga, double wzrost){
    this->imie = imie;
    this->waga = waga;
    this->wzrost = wzrost;
    std::cout << "Hej, nazywam sie " << imie << "\n";
}

double Osoba::bmi() const {
    return policzBMI(this->waga, this->wzrost);
}

double Osoba::policzBMI(double waga, double wzrost) {
    return waga/wzrost/wzrost;
}
