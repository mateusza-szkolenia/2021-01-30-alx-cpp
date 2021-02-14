#include <iostream>

struct Ulamek
{
    int licznik;
    int mianownik;
    void wypisz()
    {
        std::cout << licznik << "/" << mianownik << "\n";
    }
    Ulamek mnoz(const Ulamek &u2)
    {
        Ulamek wynik;
        wynik.licznik = licznik * u2.licznik;
        wynik.mianownik = mianownik * u2.mianownik;
        return wynik;
    }

    Ulamek dodaj(const Ulamek &u2)
    {
        Ulamek wynik;
        wynik.licznik = licznik * u2.mianownik + u2.licznik * mianownik;
        wynik.mianownik = mianownik * u2.mianownik;
        return wynik;
    }

};

int main()
{
    Ulamek u1;
    Ulamek u2;
    Ulamek u3;
    Ulamek u4;

    u1.licznik = 2;
    u1.mianownik = 3;

    u2.licznik = 3;
    u2.mianownik = 4;

    // Było tak:
    /*
    u3 = mnoz(u1, u2);
    u4 = dodaj(u1, u2);
    */

    // Teraz jest jak:
    u3 = u1.mnoz(u2);
    u4 = u1.dodaj(u2);

    u1.wypisz();
    u2.wypisz();
    u3.wypisz();
    u4.wypisz();

}
