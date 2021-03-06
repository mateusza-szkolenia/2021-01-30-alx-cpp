#include <iostream>
#include <cmath>

class Punkt {
    double x;
    double y;

    public:
        Punkt(const double x, const double y) : x(x), y(y){

        }
        static double odleglosc(const Punkt &p1, const Punkt &p2){
            return std::sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) );
        }
};

class Osada : public Punkt {
    int populacja;
    public:
        Osada(const double x, const double y, const int populacja):
            Punkt(x, y),
            populacja(populacja)
        {}
};

int main(){
    Punkt p1{4, 20};
    Punkt p2{2, 10};
    Osada o1{0.5, 0.5, 500};
    Osada o2{40, 1, 600};

    std::cout << Punkt::odleglosc(o2, o1) << "\n";

}

