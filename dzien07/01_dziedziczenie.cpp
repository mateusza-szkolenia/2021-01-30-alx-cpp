#include <iostream>

class Kwadrat {
    double a;
    public:
        Kwadrat(const double a) : a(a){
        }
        double pole() const {
            return this->a * this->a;
        }
        double get_a() const {
            return this->a;
        }
};

class Kwadracik : public Kwadrat {
    public:
    Kwadracik(const double a): Kwadrat(a){
    }
};

class Prostokat : public Kwadrat {
    double b;
    public:
        Prostokat(const double a, const double b) : Kwadrat(a), b(b){

        }
        double pole() const {
            return this->get_a() * this->b;
        }
        double get_b() const {
            return this->b;
        }
};

int main(){
    Kwadrat k1;
    Kwadracik k2{17};

    Prostokat p1{3,7};

    std::cout << "Kwadrat o boku " << k1.get_a() << " ma pole " << k1.pole() << "\n";
    std::cout << "Kwadrat o boku " << k2.get_a() << " ma pole " << k2.pole() << "\n";
    std::cout << "Pole prostokata: " << p1.pole() << "\n";

}

