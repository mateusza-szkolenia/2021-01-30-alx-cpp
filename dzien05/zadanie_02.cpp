#include <iostream>

class Tablica {
    public:
        Tablica(int rozmiar){
            this->rozmiar = rozmiar;
            this->dane = new int[rozmiar];
            for (int i=0; i<rozmiar; i++){
                this->dane[i] = 0;
            }
        }

        ~Tablica(){
            delete [] this->dane;
        }
        void ustaw(int pozycja, int wartosc){
            if (czy_poprawna_pozycja(pozycja)){
                this->dane[pozycja] = wartosc;
            }
        }
        int daj(int pozycja){
            return czy_poprawna_pozycja(pozycja) ? this->dane[pozycja] : -1;
        }
    private:
        int rozmiar;
        int *dane;
        bool czy_poprawna_pozycja(int pozycja){
            return pozycja >= 0 && pozycja < rozmiar;
        }
};

void akcja(){
    Tablica tab{20};

    tab.ustaw(-1000000000, 100); // zostanie zignorowane
    tab.ustaw(5, 17);
    tab.ustaw(60000000, 100); // też zignorowane

    for(int i=-3; i<30; i++){
        std::cout << i << ": " << tab.daj(i) << "; ";
    }
    std::cout << "\n";
}

int main(){
    for(int j=0; j<30000; j++){
        akcja();
    }
}

// można zobaczyć czy nie ma wycieków narzędziem valgrind
//
// sudo apt install valgrind
// valgrind ./a.out
