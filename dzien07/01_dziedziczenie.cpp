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

int main(){
    Kwadrat k1{x};

    std::cout << "Kwadrat o boku " << k1.get_a() << " ma pole " << k1.pole() << "\n";

}
