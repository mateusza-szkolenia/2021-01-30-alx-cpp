#include <iostream>

#include "Struktury.hpp"

Lista::Lista():
    licznik(0),
    pierwszy(nullptr),
    ostatni(nullptr)
{
}

void Lista::pokaz(){
    std::cout << "--[ LISTA ("<< licznik <<") ]--\n";
    std::cout << "<" << this->pierwszy << " .. " << this->ostatni << ">\n";
    std::cout << "------------------\n";
}
