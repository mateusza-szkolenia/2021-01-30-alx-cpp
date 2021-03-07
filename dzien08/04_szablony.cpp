#include <iostream>

template <typename T>
T n_razy(T x, int n){
    std::cout << "Jade z szablonu: " << x << "\n";
    T wynik = x;
    for (int i=0; i < n-1; i++){
        std::cout << ".";
        wynik += x;
    }
    return wynik;
}

template <>
int n_razy(int x, int n){
    std::cout << "Mnożę inty" << x * n << "\n";
    return x * n;
}

int main(){
    std::cout << n_razy(7, 4) << "\n";
    std::cout << n_razy(99.9, 10) << "\n";
    std::string zw{"kot"};
    std::cout << n_razy(zw, 9) << "\n";
    std::cout << n_razy<std::string>("pies", 2) << "\n";
    std::cout << n_razy((std::string)"mysz", 12) << "\n";
    std::cout << n_razy(static_cast<std::string>("chomik"), 2) << "\n";
}
