#include "Wykresy.hpp"

Slupek::Slupek(const double wartosc, const std::string etykieta, const std::string kolor):
    wartosc(wartosc),
    etykieta(etykieta),
    kolor(kolor)
{

}

void Wykres::dodaj_slupek(const Slupek &slupek){
    this->slupki.push_back(slupek);
}
