#include <iostream>

struct Osoba {
    std::string imie;
    std::string nazwisko;
    double waga;
    double wzrost;
};

int main(){
    Osoba o1;
    Osoba o2;

    o1.imie = "Jan";
    o1.nazwisko = "Kowalski";
    o1.waga = 80;
    o1.wzrost = 1.8;

    o2.imie = "Barbara";
    o2.nazwisko = "Kowalska";
    o2.waga = 60;
    o2.wzrost = 1.6;

    std::cout << o1.imie << ": " << o1.waga << " " << o1.wzrost << "\n";
    std::cout << o2.imie << ": " << o2.waga << " " << o2.wzrost << "\n";

    return 0;
}