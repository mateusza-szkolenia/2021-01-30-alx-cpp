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
    std::cout << "------------------\n";
}

void Lista::append(double wartosc){
    ElementListy *ne;
    ne = new ElementListy(wartosc);
    this->licznik++;
    if (this->pierwszy == nullptr && this->ostatni == nullptr){
        this->pierwszy = ne;
        this->ostatni = ne;
        ne->poprzedni = nullptr;
        ne->nastepny = nullptr;
    }

}

ElementListy::ElementListy(double wartosc):
    wartosc(wartosc)
{
}
