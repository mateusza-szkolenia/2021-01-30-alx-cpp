// wypisz ile cyfr ma podana liczba

#include <iostream>

int main() {
    int liczba;
    std::cin >> liczba;
    int cyfry = 0;
    while (liczba != 0) {
        // std::cout << liczba << '\n';
        liczba /= 10; // liczba = liczba / 10;
        cyfry += 1;
    }

    if (cyfry == 0)
        cyfry = 1;

    std::cout << cyfry << '\n';
    return 0;
}
