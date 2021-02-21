#include <iostream>

#include "Struktury.hpp"

Lista::Lista():
    licznik(0)
{
}

void Lista::pokaz(){
    std::cout << "--[ LISTA ("<< licznik <<") ]--\n";
    std::cout << "------------------\n";
}
