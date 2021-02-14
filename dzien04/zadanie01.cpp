#include <iostream>

struct Ulamek
{
    int licznik;
    int mianownik;
};


int main()
{
    Ulamek u1;
    Ulamek u2;

    u1.licznik = 1;
    u1.mianownik = 3;

    u2.licznik = 1;
    u2.mianownik = 4;

    std::cout << u1.licznik << "/" << u1.mianownik << "\n";

}
