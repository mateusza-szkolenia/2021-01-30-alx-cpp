//wypisz informację, czy podana liczba jest liczbą parzystą

#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if (x % 2 == 0) {
        std::cout << "Liczba " << x << " jest parzysta.\n";
    }
    else {
        std::cout << "Liczba " << x << " jest nieparzysta.\n";
    }
    return 0;
}