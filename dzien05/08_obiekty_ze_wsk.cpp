#include <iostream>

class Tablica {
    public:
        Tablica(int rozmiar){
            this->rozmiar = rozmiar;
            this->dane = new int[rozmiar];
            this->wypelnij(0);
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
            
            for (int i=0; i<(n < this->rozmiar ? n : this->rozmiar); i++){
                nowedane[i] = czy_poprawna_pozycja(i) ? this->dane[i] : 0;
            }
            delete [] this->dane;
            this->dane = nowedane;
            
            if (n > this->rozmiar){
                this->wypelnij_zakres(this->rozmiar, n, 0);
            }
            this->rozmiar = n;
        }

        void wypelnij_zakres(int poz_od, int poz_do, int wartosc){
            for(int i=poz_od; i<poz_do; i++){
                this->dane[i] = wartosc;
            }
        }

        void wypelnij(int wartosc){
            wypelnij_zakres(0, this->rozmiar, wartosc);
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

    tab.wypelnij(777);
    tab.wypelnij_zakres(3, 7, 1999);

    tab.zmien_rozmiar(24);

    tab.wyswietl();
}
