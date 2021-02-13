#include <iostream>
#include <cstdlib>
#include <ctime>

int k6(){
    return std::rand() % 6 + 1;
    // zwraca 1, 2, 3, 4, 5 lub 6
}

int main(){
    const int ILE_RZUTOW = 100;
    const int MAKSYMALNY_WYNIK = 6;

    int licznik[MAKSYMALNY_WYNIK+1];
    // tablica ma 7 komórek:
    // [0] (nieużywana)
    // [1] rzut = 1
    // itd...
    // [6] rzut = 6

    std::srand(std::time(nullptr));

    for (int i=1; i<=MAKSYMALNY_WYNIK; i++){
        licznik[i] = 0;
    }

    for (int i=0; i<ILE_RZUTOW; i++){
        int wynik = k6();
        licznik[wynik]++;
        //std::cout << k6() << "\n";
    }

    for (int i=1; i<=MAKSYMALNY_WYNIK; i++){
        std::cout << i << ": " << licznik[i] << "\n";
    }

    return 0;
}