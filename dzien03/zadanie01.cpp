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
    int wieksze=0, mniejsze=0;
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

    for(int i=0; i < ILE; i++){
        if (liczby[i] > srednia) wieksze++;
        if (liczby[i] < srednia) mniejsze++;
    }


    std::cout << "Suma: " << suma << "\n";
    std::cout << "Średnia: " << srednia << "\n";
    std::cout << "Maksimum: " << maks << "\n";
    std::cout << "Minimum: " << mini << "\n";
    std::cout << "Powyżej średniej: " << wieksze << "\n";
    std::cout << "Poniżej średniej: " << mniejsze << "\n";

    for(int i=0; i < ILE; i++){
        std::cout << liczby[i]
            << " "
            << (liczby[i] > srednia ? "wieksza od śr" : (liczby[i] < srednia ? "mniejsza od śr" : "==="))
            << "\n";
    }

    return 0;
}