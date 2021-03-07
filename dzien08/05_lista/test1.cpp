#include <iostream>
#include "Struktury.hpp"

int main(){

    Lista l1;

    l1.pokaz();
    l1.append(56.7);
    l1.append(156.7);
    l1.append(256.7);
    l1.append(356.7);
    l1.prepend(999.999);
    l1.pokaz();
}
