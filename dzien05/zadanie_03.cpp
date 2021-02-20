#include <iostream>

class Tablica {
    public:
        Tablica(int rozmiar=0){
            this->rozmiar = rozmiar;
            this->dane = new int[rozmiar];
            this->wypelnij(0);
        }

        // konstruktor kopiujący
        Tablica(const Tablica &t){
            this->rozmiar = t.rozmiar;
            this->dane = new int[rozmiar];
            for(int i=0; i<this->rozmiar; i++){
                this->dane[i] = t.dane[i];
            }
        }

        // kopiujący operator przypisania
        
        Tablica& operator= (const Tablica &t){
            // zabezpieczenie przed sytuacja t = t;
            
            if (this->dane == t.dane){
                return *this;
            }
            delete [] this->dane;
            this->rozmiar = t.rozmiar;
            this->dane = new int[this->rozmiar];
            for(int i=0; i<this->rozmiar; i++){
                this->dane[i] = t.dane[i];
            }
            return *this;
        }

        Tablica operator+ (Tablica &t){
            Tablica nt;
            nt.rozszerz(*this);
            nt.rozszerz(t);
            return nt;
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
            std::cout << "Tablica " << this->dane << ": ";
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

        void rozszerz(Tablica &t){
            int stary_rozmiar = this->rozmiar;
            // zwiększ this->rozmiar o t.rozmiar
            // przepisz elementy z t do this
            this->zmien_rozmiar(this->rozmiar + t.rozmiar);
            // this->dane [60 61 62 63] r=4
            // t.dane-> [78 79 80]
            for (int i=0; i<t.rozmiar; i++){
                this->ustaw(stary_rozmiar+i, t.daj(i));
            }
        }

    private:
        int rozmiar;
        int *dane;
        bool czy_poprawna_pozycja(int pozycja){
            return (pozycja >= 0) && (pozycja < rozmiar);
        }
};

int main(){
    Tablica tab{3};
    tab.wypelnij(10);

    Tablica tab2{5};
    tab2.wypelnij(5);
    
    //tab.rozszerz(tab2);
    //tab.wyswietl();

    Tablica tab3 = tab + tab2;
    tab3.wyswietl();

    // chciałbym aby to tworzyło tablicę łaczącą pierwszą z drugą
    // 10 10 10 10 ... 10 5 5 5 5 5 
    //Tablica tab3 = tab + tab2;

}
