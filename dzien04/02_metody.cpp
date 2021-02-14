#include <iostream>

int gcd(const int a, const int b){
    if (a==0) return b;
    if (b==0) return a;
    if (a==b) return a;
    return (a > b) ? gcd(a-b, b) : gcd(b-a, a);
}

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
        wynik.skroc_sie();
        return wynik;
    }

    Ulamek dodaj(const Ulamek &u2)
    {
        Ulamek wynik;
        wynik.licznik = licznik * u2.mianownik + u2.licznik * mianownik;
        wynik.mianownik = mianownik * u2.mianownik;
        wynik.skroc_sie();
        return wynik;
    }

    void skroc_sie(){
        int x = gcd(licznik, mianownik);
        licznik /= x;
        mianownik /= x;
    }

};

int main()
{
    Ulamek u1;
    Ulamek u2;
    Ulamek u3;
    Ulamek u4;

    u1.licznik = 1;
    u1.mianownik = 8;

    u2.licznik = 3;
    u2.mianownik = 8;

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
