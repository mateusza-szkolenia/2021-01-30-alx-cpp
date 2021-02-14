#include <iostream>

int gcd(const int a, const int b){
    if (a==0) return b;
    if (b==0) return a;
    if (a==b) return a;
    return (a > b) ? gcd(a%b, b) : gcd(b%a, a);
}

struct Ulamek
{
    int licznik;
    int mianownik;
    void wypisz() const
    {
        std::cout << licznik << "/" << mianownik << "\n";
    }
    Ulamek mnoz(const Ulamek &u2) const
    {
        Ulamek wynik;
        wynik.licznik = licznik * u2.licznik;
        wynik.mianownik = mianownik * u2.mianownik;
        wynik.skroc_sie();
        return wynik;
    }

    Ulamek dziel(const Ulamek &u2) const
    {
        Ulamek wynik;
        wynik.licznik = licznik * u2.mianownik;
        wynik.mianownik = mianownik * u2.licznik;
        wynik.skroc_sie();
        return wynik;
    }

    Ulamek dodaj(const Ulamek &u2) const
    {
        Ulamek wynik;
        wynik.licznik = licznik * u2.mianownik + u2.licznik * mianownik;
        wynik.mianownik = mianownik * u2.mianownik;
        wynik.skroc_sie();
        return wynik;
    }

    Ulamek odejmij(const Ulamek &u2) const
    {
        Ulamek wynik;
        wynik.licznik = licznik * u2.mianownik - u2.licznik * mianownik;
        wynik.mianownik = mianownik * u2.mianownik;
        wynik.skroc_sie();
        return wynik;
    }

    void skroc_sie(){
        if (mianownik<0){
            licznik = -licznik;
            mianownik = -mianownik;
        }
        int x = gcd(std::abs(licznik), mianownik);
        licznik /= x;
        mianownik /= x;
    }

};

void napiszUlamek(const Ulamek &u){
    std::cout << "Ulamek wynosi: ";
    u.wypisz();
}

int main()
{
    Ulamek u1, u2, u3, u4, u5, u6;

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
    u5 = u1.odejmij(u2);
    u6 = u1.dziel(u2);

    napiszUlamek(u1);
    napiszUlamek(u2);

    std::cout << "Iloczyn: ";
    u3.wypisz();

    std::cout << "Suma: ";
    u4.wypisz();

    std::cout << "Różnica: ";
    u5.wypisz();

    std::cout << "Iloraz: ";
    u6.wypisz();

}
