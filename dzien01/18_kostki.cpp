//rzucamy 2 6-sciennymi kostkami i wypisyjemy co wypadło ALE
// jeśli wypadnie dublet to oszukujemy i zmieniamy wynik jednej z kostek przed wypisaniem
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int a = std::rand() % 6 + 1;
    int b = std::rand() % 6 + 1;
    // while (a == b) {
    //     std::cout << "Wałujemy.\n";
    //     b = std::rand() % 6 + 1;
    // }
    if (a == b) {
        // b = b % 6 + 1;
        b = 7 - b;
    }

    std::cout << a << ' ' << b << '\n';
    return 0;
}