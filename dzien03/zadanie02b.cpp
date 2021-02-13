#include <iostream>
#include <cstdlib>
#include <ctime>

void narysuj_wykres(int wartosc, int szer, int maks){
    int dlugosc = wartosc * szer / maks;
    for(int i=0; i<dlugosc; i++){
        std::cout << "█";
    }
}

int k6(){
    return std::rand() % 6 + 1;
    // zwraca 1, 2, 3, 4, 5 lub 6
}

int nk6(int n){
    int wynik = 0;
    for(int i=0; i<n; i++){
        wynik += k6();
    }
    return wynik;
}

int main(){
    const int ILE_RZUTOW = 10000000;
    const int ILE_KOSTEK = 5;
    const int MAKSYMALNY_WYNIK = ILE_KOSTEK * 6;

    int licznik[MAKSYMALNY_WYNIK+1];

    std::srand(std::time(nullptr));

    for (int i=1; i<=MAKSYMALNY_WYNIK; i++){
        licznik[i] = 0;
    }

    for (int i=0; i<ILE_RZUTOW; i++){
        int wynik = nk6(ILE_KOSTEK);
        licznik[wynik]++;
    }

    int maks = 0;
    for (int i=ILE_KOSTEK; i<=MAKSYMALNY_WYNIK; i++){
        if (licznik[i] > maks) maks = licznik[i];
    }

    for (int i=ILE_KOSTEK; i<=MAKSYMALNY_WYNIK; i++){
        std::cout << i << ": ";
        narysuj_wykres(licznik[i], 60, maks);
        std::cout << " " << licznik[i] << "\n";
    }

    return 0;
}