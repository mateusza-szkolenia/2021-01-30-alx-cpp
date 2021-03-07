#include "Wykresy.hpp"

Slupek::Slupek(const double wartosc, const std::string etykieta, const std::string kolor):
    wartosc(wartosc),
    etykieta(etykieta),
    kolor(kolor)
{

}

void Wykres::dodaj_slupek(const Slupek &slupek){
    if (this->slupki.empty()){
        this->maks_wartosc = slupek.wartosc;
        this->min_wartosc = slupek.wartosc;
    }
    if (slupek.wartosc > this->maks_wartosc){
        this->maks_wartosc = slupek.wartosc;
    }
    if (slupek.wartosc < this->min_wartosc){
        this->min_wartosc = slupek.wartosc;
    }

    this->slupki.push_back(slupek);
}
