#include <iostream>

enum DzienTygodnia {
    PONIEDZIALEK=1, WTOREK, SRODA, CZWARTEK, PIATEK, SOBOTA, NIEDZIELA
};

enum TypSamochodu {
    NOWY            = 1,            // 00000001
    USZKODZONY      = 2,            // 00000010
    BENZYNOWY       = 4,            // 00000100
    DIESEL          = 8,            // 00001000
    ELEKTRYCZNY     = 16,           // 00010000
    GAZ             = 32            // 00100000

    //                              // 00010101
};

struct Samochod {
    std::string marka;
    std::string model;
    int rocznik;
    int typ;
};

int main(){
    std::string dzien_tyg;
    dzien_tyg = "wtorek";

    int dzien_tyg2;
    dzien_tyg2 = 6; // sobota

    DzienTygodnia dzien_tyg3;
    dzien_tyg3 = SRODA;

    std::cout << PIATEK << "\n";

    Samochod s1;
    s1.typ = NOWY | ELEKTRYCZNY;

    if (s1.typ & NOWY){
        std::cout << "Nowy samochód\n";
    }

    if (s1.typ & USZKODZONY){
        std::cout << "Zapraszamy do blacharza 1\n";
    }

    if (s1.typ & BENZYNOWY){
        std::cout << "Zapraszam na stację benzynową\n";
    }

    if (s1.typ & GAZ){
        std::cout << "Zakaz wjazdu do garażu\n";
    }

    if (s1.typ & ELEKTRYCZNY){
        std::cout << "Gratulujemy dbania o środowisko.\n";
    }

    if ((s1.typ & BENZYNOWY) && (s1.typ & ELEKTRYCZNY)){
        std::cout << "Aha, hybryda!\n";
    }

    if ((s1.typ & ELEKTRYCZNY) && !(s1.typ & BENZYNOWY)){
        std::cout << "Czyżby Tesla?\n";
    }

    std::cout << "WYPADEK!\n";

    s1.typ |= USZKODZONY;

    if (s1.typ & USZKODZONY){
        std::cout << "Zapraszamy do blacharza 2\n";
    }

}

