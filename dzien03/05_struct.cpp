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

    Osoba osoby[5];
    for(int i=0; i<5; i++){
        osoby[i].imie = "Jan";
        osoby[i].nazwisko = "XXX";
        osoby[i].waga = 70 + i;
        osoby[i].wzrost = 1.75 + i/100.0;
    }

    wypisz_osobe(osoby[3]);

    return 0;
}