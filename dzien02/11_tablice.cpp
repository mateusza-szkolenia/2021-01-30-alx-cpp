#include <iostream>

int main() {
    const int ROZMIAR_TABLICY = 10;
    int licz[ROZMIAR_TABLICY];

    for (int i = 0; i < ROZMIAR_TABLICY; i += 1) {
        licz[i] = 10 * i;
    }

    int cyfra = 1;
    licz[cyfra] += 1;

    for (int i = 0; i < ROZMIAR_TABLICY; i += 1) {
        std::cout << i << ": " << licz[i] << '\n';
    }

    int idx;
    std::cin >> idx;

    std::cout << licz[idx] << '\n';

    return 0;
}