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

        void wyswietl(){
            for(int i=0; i<this->rozmiar; i++){
                std::cout << (i?", ":"") << "[" << i << ": " << this->dane[i] << "]";
            }
            std::cout << "\n";
        }
        void zmien_rozmiar(int n){
            int *nowedane = new int[n];
            for (int i=0; i<n; i++){
                nowedane[i] = czy_poprawna_pozycja(i) ? this->dane[i] : 0;
            }
            delete [] this->dane;
            this->dane = nowedane;
            this->rozmiar = n;
        }

    private:
        int rozmiar;
        int *dane;
        bool czy_poprawna_pozycja(int pozycja){
            return pozycja >= 0 && pozycja < rozmiar;
        }
};

int main(){
    Tablica tab{20};

    tab.ustaw(3, 1999);

    tab.zmien_rozmiar(4);

    tab.wyswietl();
}
