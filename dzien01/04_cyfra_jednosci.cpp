#include <iostream>

//wypisz cyfrę jedności z liczby zapisanej w zmiennej

int main() {
    int a = 458678;
    std::cout << "Cyfra jednosci: " << a % 10 << '\n';
    std::cout << "Cyfra dziesiatek: " << a % 100 / 10 << '\n';
    std::cout << "Cyfra dziesiatek: " << a / 10 % 10 << '\n';
    return 0;
}

