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
    ne = new ElementListy(wartosc);
    this->licznik++;
    if (this->pierwszy == nullptr && this->ostatni == nullptr){
        this->pierwszy = ne;
        this->ostatni = ne;
        ne->poprzedni = nullptr;
        ne->nastepny = nullptr;
    }
    else {
        this->ostatni->nastepny = ne;
        ne->poprzedni = this->ostatni;
        this->ostatni = ne;
    }

}

ElementListy::ElementListy(double wartosc):
    wartosc(wartosc)
{
}

void ElementListy::pokaz() const {
    std::cout << "* " << this->wartosc << "    " << this << "    <" << this->poprzedni << ":" << this->nastepny << ">\n";
}