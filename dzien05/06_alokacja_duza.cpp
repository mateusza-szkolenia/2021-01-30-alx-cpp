#include <iostream>

struct Punkt {      // 8 bajtów
    int x;  // 4 bajty
    int y;  // 4 bajty
};

int main(){
    Punkt *pp1;
    Punkt *pp2;

    pp1 = new Punkt[100];
    pp2 = new Punkt[10000000000]; // 80GB - może się nie udać

    std::cout << "Wskaźnik pp1: " << pp1 << "\n";
    std::cout << "Wskaźnik pp2: " << pp2 << "\n";

}
