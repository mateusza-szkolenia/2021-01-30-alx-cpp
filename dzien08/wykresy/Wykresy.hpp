#include <string>
#include <vector>

#ifndef WYKRESY_HPP
#define WYKRESY_HPP

struct Slupek;

struct Wykres {
    std::vector<Slupek> slupki;
    void dodaj_slupek(const Slupek &);
    double maks_wartosc;
    double min_wartosc;
};

struct Slupek {
    double wartosc;
    std::string etykieta;
    std::string kolor;
    Slupek(const double, const std::string, const std::string);

};

#endif