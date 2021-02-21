class Tablica {
    public:
        Tablica(int rozmiar=0);
        Tablica(const Tablica &t);
        Tablica& operator= (const Tablica &t);
        Tablica operator+ (Tablica &t);
        ~Tablica();
        void ustaw(int pozycja, int wartosc);
        int daj(int pozycja);

        void wyswietl();
        void zmien_rozmiar(int n);

        void wypelnij_zakres(int poz_od, int poz_do, int wartosc);
        void wypelnij(int wartosc);

        void rozszerz(Tablica &t);

    private:
        int rozmiar;
        int *dane;
        bool czy_poprawna_pozycja(int pozycja);

};
