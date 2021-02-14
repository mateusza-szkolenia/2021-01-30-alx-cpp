#include <iostream>

struct Ulamek
{
    int licznik;
    int mianownik;
};

void wypisz(Ulamek u){
    std::cout << u.licznik << "/" << u.mianownik << "\n";
}

int main()
{
    Ulamek u1;
    Ulamek u2;

    u1.licznik = 1;
    u1.mianownik = 3;

    u2.licznik = 1;
    u2.mianownik = 4;

    wypisz(u1);
    wypisz(u2);

}
