#include <iostream>
#include <cstdlib>
#include <ctime>

struct Punkt {
    double x;
    double y;
};

Punkt losowy_punkt(){
    Punkt p;
    p.x = (std::rand() % 100)/100.0;
    p.y = (std::rand() % 100)/100.0;
    return p;
}

int main(){
    std::srand(std::time(nullptr));
    Punkt p1;
    p1 = losowy_punkt();

    std::cout << p1. x << ", " << p1.y << "\n";
}
