#include <iostream>

class Xyz {
    static int licznik;

    public:
        Xyz(){
            Xyz::licznik++;
            std::cout << "Jestem Xyz nr " << Xyz::licznik << "\n";
        }

};

int Xyz::licznik = 100;

int main(){
    Xyz x1;
    Xyz x2;


}