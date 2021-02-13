#include <iostream>

/*
    uruchomienie z danymi z pliku:
    ./a.out < z01-test.txt

    zapisanie wyniku do pliku:
    ./a.out > z01-wynik.txt

    oba na raz:
    ./a.out < z01-test.txt > z01-wynik.txt 
*/

int main()
{
    const int ILE = 10;
    int liczby[ILE];

    int suma;
    int maks, mini;
    double srednia;

    for(int i = 0; i < ILE; i += 1){
        std::cin >> liczby[i];
    }

    // obowiązkowe inicjowanie zmiennych
    suma = 0;
    maks = liczby[0];
    mini = liczby[0];

    for(int i=0; i < ILE; i += 1){
        suma += liczby[i];
        if (liczby[i] > maks){
            maks = liczby[i];
        }
        if (liczby[i] < mini){
            mini = liczby[i];
        }
    }

    srednia = 1.0 * suma / ILE;

    std::cout << "Suma: " << suma << "\n";
    std::cout << "Średnia: " << srednia << "\n";
    std::cout << "Maksimum: " << maks << "\n";
    std::cout << "Minimum: " << mini << "\n";

    return 0;
}