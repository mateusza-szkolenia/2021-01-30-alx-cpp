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

class Prostokat {
    double a;
    double b;
    public:
        Prostokat(const double a, const double b) : a(a), b(b){

        }
        double pole() const {
            return this->a * this->b;
        }
        double get_a() const {
            return this->a;
        }
        double get_b() const {
            return this->b;
        }
};

int main(){
    Kwadrat k1{5};
    Prostokat p1{3,7};

    std::cout << "Kwadrat o boku " << k1.get_a() << " ma pole " << k1.pole() << "\n";
    std::cout << "Pole prostokata: " << p1.pole() << "\n";

}

