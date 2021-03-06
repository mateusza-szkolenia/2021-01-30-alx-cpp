#include <iostream>
#include <cmath>
#include <ctime>

class Punkt {
    public:
        double x;
        double y;
        Punkt(const double x = 0.0, const double y = 0.0) : x(x), y(y){

        }
        static double odleglosc(const Punkt &p1, const Punkt &p2){
            return std::sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) );
        }
        virtual void opis(){
            std::cout << "Punkt(" << this->x << ", " << this->y << ")\n";
        }
};

class Osada : public Punkt {
    public:
        int populacja;
        Osada(const Punkt &p):
            Punkt(p),
            populacja(0)
        {}
        Osada(const double x=0.0, const double y=0.0, const int populacja=0):
            Punkt(x, y),
            populacja(populacja)
        {}
        void opis(){
            std::cout << "Osada(" << this->x << ", " << this->y << ", " << this->populacja << ")\n";
        }
};

class Sklep : public Punkt {
    public:
        int klienci;
        Sklep(const Punkt &p):
            Punkt(p),
            klienci(0)
        {}
        Sklep(const double x=0.0, const double y=0.0):
            Punkt(x, y),
            klienci(0)
        {}
        void opis(){
            std::cout << "Sklep(" << this->x << ", " << this->y << ") klienci = " << this->klienci << "\n";
        }
};

Punkt losowe_wspolrzedne(){
    double x, y;
    x = (std::rand() % 10000) / 100.0;
    y = (std::rand() % 10000) / 100.0;
    Punkt wynik{x, y};
    return wynik;
}

int main(){
    std::srand(std::time(nullptr));

    const int ile_o = 100;
    const int ile_s = 10;

    Sklep sklepy[ile_s];
    Osada osady[ile_o];

    for (int i=0; i < ile_o; i++){
        osady[i] = losowe_wspolrzedne();
        osady[i].populacja = std::rand() % 100;
    }

    for (int i=0; i < ile_s; i++){
        sklepy[i] = losowe_wspolrzedne();
    }

    for (int i=0; i < ile_o; i++){
        osady[i].opis();
        double najmniejsza_odl = -1;
        int nr_sklepu = 0;
        for (int j=0; j < ile_s; j++){
            double odl = Punkt::odleglosc(osady[i], sklepy[j]);
            if (najmniejsza_odl < 0 || odl < najmniejsza_odl){
                najmniejsza_odl = odl;
                nr_sklepu = j;
            }
            std::cout << "Sklep nr " << j << " odleglosc= " << odl << "\n";
        }
        std::cout << "And the winner is: " << nr_sklepu << "(" << najmniejsza_odl << ")\n";
        sklepy[nr_sklepu].klienci += osady[i].populacja;
    }

    for (int i=0; i < ile_s; i++){
        sklepy[i].opis();
    }

}