#include <iostream>
#include <cmath>
#include <ctime>

class Punkt {
    public:
        double x;
        double y;
        std::string nazwa;
        Punkt(const double x = 0.0, const double y = 0.0) : x(x), y(y){
            this->nazwa = "P" + std::to_string(std::rand());
        }
        static double odleglosc(const Punkt &p1, const Punkt &p2){
            return std::sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) );
        }
        virtual void opis(){
            std::cout << "Punkt(" << this->x << ", " << this->y << ") " << nazwa << "\n";
        }
};

class Osada : public Punkt {
    private:
        std::string n2;
        int populacja;
    public:
        Osada(const double x, const double y, const int populacja):
            Punkt(x, y),
            populacja(populacja)
        {
            this->n2 = "OOO" + std::to_string(std::rand());
        }
        void opis() override {
            std::cout << "Osada(" << this->x << ", " << this->y << ", " << this->populacja << " " << nazwa << "\n";
        }
};

class Sklep : public Punkt {
    int klienci;
    public:
        Sklep(const Punkt &p):
            Punkt(p),
            klienci(0)
        {}
        Sklep(const double x, const double y):
            Punkt(x, y),
            klienci(0)
        {}
        int get_klienci() const {
            return this->klienci;
        }
        void set_klienci(const int k){
            this->klienci = k;
        }
        void opis() override {
            std::cout << "Sklep(" << this->x << ", " << this->y << ") klienci = " << this->klienci << " " << nazwa << "\n";
        }
};

Punkt losowe_wspolrzedne(){
    double x, y;
    x = (std::rand() % 10000) / 100.0;
    y = (std::rand() % 10000) / 100.0;
    Punkt wynik{x, y};
    return wynik;
}

void przenies_losowo(Punkt& p){
    p.x = (std::rand() % 10000) / 100.0;
    p.y = (std::rand() % 10000) / 100.0;
}

void opisz_punkt(Punkt& p){
    std::cout << "opisuje punkt: ";
    p.opis();
}

void opisz_punkt2(Punkt &p){
    std::cout << "To coś znajduje się w punkcie: ";
    static_cast<Punkt>(p).opis();
}

void opisz_punkt3(Punkt &p){
    // chcialbym, zeby ta funkcja po prostu pisala, czy dana rzecz jest Osada czy Sklepem

    std::cout << "Co to jest? " << &p << "\n";
    if (dynamic_cast<Osada *>(&p) != nullptr){
        std::cout << "Osada";
    }
    else if (dynamic_cast<Sklep *>(&p) != nullptr){
        std::cout << "Sklep";
    }
    else if (dynamic_cast<Punkt *>(&p) != nullptr){
        std::cout << "Punkt";
    }
    std::cout << "\n";
/*
    std::cout << "Zmienia to w Osade: ";
    Osada *po1;
    po1 = (Osada *)&p; // konwersja na siłę

    Osada o1 = *po1;
    o1.opis();

    long *pa;
    plong = po1;
    std::cout << "Liczba long: " << *pa << "\n";
*/

}

int main(){
    std::srand(std::time(nullptr));

    Punkt p1{4, 20};
    Punkt p2{2, 10};
    Osada o1{0.5, 0.5, 500};
    Osada o2{40, 1, 600};
    Sklep s1{0, 0};

    Punkt p3 = losowe_wspolrzedne();
    Punkt py[100];

    py[5] = losowe_wspolrzedne();
    przenies_losowo(py[6]);
    przenies_losowo(o1);
    przenies_losowo(s1);

    std::cout << Punkt::odleglosc(py[6], s1) << "\n";
    p3.opis();
    o1.opis();
    s1.opis();

    opisz_punkt(p3);
    opisz_punkt(o1);
    opisz_punkt(s1);

    opisz_punkt2(p3);
    opisz_punkt2(o1);
    opisz_punkt2(s1);

    opisz_punkt3(p3);
    opisz_punkt3(o1);
    opisz_punkt3(s1);

    std::cout << s1.get_klienci() << "\n";
    std::cout << "std::time(nullptr) == " << std::time(nullptr) << "\n";
}

