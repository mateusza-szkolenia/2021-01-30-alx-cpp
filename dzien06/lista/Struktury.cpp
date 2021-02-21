#include <iostream>

#include "Struktury.hpp"

Lista::Lista():
    licznik(0),
    pierwszy(nullptr),
    ostatni(nullptr)
{
}

void Lista::pokaz() const {
    std::cout << "--[ LISTA ("<< licznik <<") ]--\n";
    std::cout << "<" << this->pierwszy << " .. " << this->ostatni << ">\n";

    ElementListy *biezacy = this->pierwszy;
    while(biezacy != nullptr){
        biezacy->pokaz();
        biezacy = biezacy->nastepny;
    }

    std::cout << "------------------\n";
}

void Lista::append(double wartosc){
    ElementListy *ne;
    ne = new ElementListy(wartosc, this->ostatni, nullptr);
    if (licznik == 0){
        this->pierwszy = ne;
    }
    else {
        this->ostatni->nastepny = ne;
    }
    this->ostatni = ne;
    this->licznik++;
}

void Lista::prepend(double wartosc){
    ElementListy *ne;
    ne = new ElementListy(wartosc, nullptr, this->pierwszy);
    if (licznik == 0){
        this->ostatni = ne;
    }
    else {
        this->pierwszy->poprzedni = ne;
    }
    this->pierwszy = ne;
    this->licznik++;
}

ElementListy::ElementListy(double wartosc, ElementListy *p, ElementListy *n):
    wartosc(wartosc),
    poprzedni(p),
    nastepny(n)
{
}

void ElementListy::pokaz() const {
    std::cout << "* " << this->wartosc << "    " << this << "    <" << this->poprzedni << ":" << this->nastepny << ">\n";
}