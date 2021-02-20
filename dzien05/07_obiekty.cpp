#include <iostream>

class Punkt {
    public:
        int x;
        int y;
        double waga;

        Punkt(int x=0, int y=0, double waga=0.0){
            this->x = x;
            this->y = y;
            this->waga = waga;
        }
        void wypisz(){
            std::cout << "Punkt(" << x << ", " << y << ", " << waga << ")\n";
        }
};


int main(){
    Punkt p1{10, 20, 4.5};
    Punkt p2;

    p1.x = 600;
    p2 = p1;
    p1.x = 9;

    p1.wypisz();
    p2.wypisz();
}