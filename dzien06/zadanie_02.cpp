#include <iostream>
#include "zadanie_02/Osoba.hpp"

int main(){
    Osoba o1{"Kazik", 80, 1.8};

    o1.opisz();

    std::cout << Osoba::policzBMI(90, 1.9) << "\n";
    std::cout << Osoba::klasyfikacja_bmi(33.3) << "\n";
}
