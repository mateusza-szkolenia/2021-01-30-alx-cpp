// przyjmij liczbe n
// przyjmij n liczb całkowitych
// wypisz największą spośród nich

#include <iostream>

int main() {

    int n;
    std::cin >> n;
    int najwieksza;
    std::cin >> najwieksza;
    n -= 1;
    while (n > 0) {
        int k;
        std::cin >> k;
        if (k > najwieksza) {
            najwieksza = k;
        }
        n -= 1;
    }

    std::cout << "Najwieksza = " << najwieksza << '\n';
    return 0;
}

// 4
// 15 20 5 7
// najwieksza: 20

// 3
// -1 -2 -3