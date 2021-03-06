#include <iostream>

class Ocena {
    int ocena;
    std::string przedmiot;
    public:
        explicit Ocena(int o, std::string przedmiot = "") : ocena(o), przedmiot(przedmiot) {
            std::cout << "Nowa OCENA! " << o << "z przedmiotu " << przedmiot << "\n";
        }
        void wypisz(){
            std::cout << "Ocena: " << przedmiot << "=" << ocena << "\n";
        }
};

int main(){
    int x;
    Ocena o1{5, "matematyka"};
    Ocena o2{7}; 

    std::cin >> x;
    Ocena o3 = x;
    o3.wypisz();
}