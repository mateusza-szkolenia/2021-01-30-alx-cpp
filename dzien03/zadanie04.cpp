#include <iostream>

double bmi(double waga, double wzrost){
    // Na podstawie wzoru z Wikipedii:
    // https://pl.wikipedia.org/wiki/Wska%C5%BAnik_masy_cia%C5%82a

    return waga/(wzrost * wzrost);

    /* Podnoszenie do kwadratu nie ma bezpośredniego zapisu jako operator w C/C++
       2^8 -- tak często piszą informatycy, ale nie oznacza to potęgowania w C/C++
       2**8 -- notacja z języka Python, też nie działa w C/C++
    */
}

struct Osoba {
    std::string imie;
    std::string nazwisko;
    double waga;
    double wzrost;
};


double bmi_osoby(Osoba osoba){
    return bmi(osoba.waga, osoba.wzrost);
}

void wypisz_osobe(Osoba osoba){
    std::cout << osoba.imie << " " << osoba.nazwisko << ": "
        << osoba.waga << " " << osoba.wzrost << " "
        << bmi_osoby(osoba) << "\n";
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

    std::cout << bmi(65, 1.79) << "\n";

    return 0;
}
