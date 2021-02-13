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

    for(int i = 0; i < ILE; i += 1){
        std::cin >> liczby[i];
    }

    for(int i=0; i < ILE; i += 1){
        suma += liczby[i];
    }

    std::cout << "Suma: " << suma << "\n";

    return 0;
}