#include <iostream>

int main() {
    //przyjmij liczbę i wypisz czy jest mniejsza od zera, równa 0 czy większa od 0
    int x;
    std::cin >> x;
    if (x > 0) {
        std::cout << "wieksze od 0\n";
    }
    else if (x < 0) {
        std::cout << "mniejsze od 0\n";
    }
    else {
        std::cout << "rowne 0\n";
    }
    return 0;
}