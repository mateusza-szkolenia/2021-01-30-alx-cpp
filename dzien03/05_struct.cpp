#include <iostream>

struct Osoba {
    std::string imie;
    std::string nazwisko;
    double waga;
    double wzrost;
};

void wypisz_osobe(Osoba osoba){
    std::cout << osoba.imie << " " << osoba.nazwisko << ": "
        << osoba.waga << " " << osoba.wzrost << "\n";
}

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

    wypisz_osobe(o1);
    wypisz_osobe(o2);

    return 0;
}