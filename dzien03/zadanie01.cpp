#include <iostream>

/*
    uruchomienie z danymi z pliku:

    ./a.out < z01-test.txt
*/

int main()
{
    const int ILE = 10;
    int liczby[ILE];

    int suma = 0;
    double srednia;

    for(int i = 0; i < ILE; i += 1){
        std::cin >> liczby[i];
    }

    for(int i=0; i < ILE; i += 1){
        suma += liczby[i];
    }

    srednia = 1.0 * suma / ILE;

    std::cout << "Suma: " << suma << "\n";
    std::cout << "Średnia: " << srednia << "\n";

    return 0;
}