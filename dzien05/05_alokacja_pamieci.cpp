#include <iostream>

class Osoba {
    public:
        Osoba(std::string imie){
            std::cout << "Nowa osoba: " << imie << "\n";
            this->imie = imie;
        }
        ~Osoba(){
            std::cout << "Osoba " << this->imie << " mówi: DO WIDZENIA\n";
        }
        std::string imie;
        int wiek;
        double waga;
        double wzrost;
};


int funkcja1(int x, int y){
    float x1 = x+2*y;
    std::cout << "x1 leży pod adresem: " << &x1 << "\n";
    x1 = 999999;
    return x1;
}

int funkcja2(int x, int y){
    int xxx111;
    std::cout << "w xxx111 zastałem wartość: " << xxx111 << " (adres:" << &xxx111 << ")\n";
    return 7*x + y;
}

int main(){
    Osoba o1{"Karol"};
    int a, b, c;
    
    funkcja1(5, 10);
    funkcja2(100, 8);
    funkcja1(15, 60);
    funkcja1(25, 80);

    std::cout << "Wskaźnik na osobę: " << &o1 << "\n";
    std::cout << "Wskaźniki na zmienne: " << &a << " " << &b << " " << &c << "\n";

    Osoba *po1;

    po1 = new Osoba{"Mietek"};
    po1->waga = 100;
    std::cout << "Wskaźnik na osobę: " << po1 << "\n";
    std::cout << "waga Mietka: " << po1->waga << "\n";
    delete po1;
    // delete NIE ZERUJE PAMIĘCI
    // delete NIE MODYFIKUJE POINTERA
    // to w praktyce raczej zadziała
    // ale nie wolno tak robić, bo tę pamięć już oddaliśmy:
    std::cout << "Wskaźnik na osobę: " << po1 << "\n";
    std::cout << "waga Mietka: " << po1->waga << "\n";



    int *tab = new int[100];

    delete [] tab;

}
