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
        void zmien_rozmiar(int n)
        {
            int * temp = new int[n];
            for (int i = 0; i < (n < rozmiar ? n : rozmiar); i++)
                temp[i] = dane[i];
            delete [] dane;
            dane = temp;
            if (n > rozmiar)
                for (int i = rozmiar; i < n; i++)
                    dane[i] = 0;
            rozmiar = n;
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
    tab.zmien_rozmiar(10);
    tab.wyswietl();
}
