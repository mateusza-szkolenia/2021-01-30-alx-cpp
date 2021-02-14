#include <iostream>

struct Ulamek
{
    int licznik;
    int mianownik;
    void wypisz()
    {
        std::cout << licznik << "/" << mianownik << "\n";
    }
};

Ulamek mnoz(const Ulamek &u1, const Ulamek &u2)
{
    Ulamek wynik;
    wynik.licznik = u1.licznik * u2.licznik;
    wynik.mianownik = u1.mianownik * u2.mianownik;
    return wynik;
}

Ulamek dodaj(const Ulamek &u1, const Ulamek &u2)
{
    Ulamek wynik;
    wynik.licznik = u1.licznik * u2.mianownik + u2.licznik * u1.mianownik;
    wynik.mianownik = u1.mianownik * u2.mianownik;
    return wynik;
}

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

    u3 = mnoz(u1, u2);
    u4 = dodaj(u1, u2);

    u1.wypisz();
    u2.wypisz();
    u3.wypisz();
    u4.wypisz();

}
