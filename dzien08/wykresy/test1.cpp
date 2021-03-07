#include <iostream>
#include "Wykresy.hpp"

int main(){
    Wykres w;
    auto s1 = Slupek{60.5, "A", "red"};


    w.dodaj_slupek(s1);
    w.dodaj_slupek(Slupek{40, "B", "blue"});
    w.dodaj_slupek(Slupek{57.7, "C", "green"});

}
