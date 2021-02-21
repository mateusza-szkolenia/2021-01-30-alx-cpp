#include <iostream>
#include "zadanie_02/Osoba.hpp"

int main(){
    Osoba o1{"Kazik", 80, 1.8};
    std::cout << "OK\n";
    std::cout << o1.bmi() << "\n";
}
