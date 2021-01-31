#include <iostream>

int main() {

    // int i = 1;
    // while (i <= 100) {
    //     std::cout << i << '\n';
    //     i += 1;
    // }

    // zamiast podzielnych przez 3 wypisujemy Fizz
    // zamiast podzielnych przez 5 wypisujemy Buzz
    // zamiast podzielnych przez 7 wypisujemy Bong
    
    for (int i = 1; i <= 110; i += 1) {
        bool czy_wypisac_liczbe = true;
        if (i % 3 == 0) {
            std::cout << "Fizz";
            czy_wypisac_liczbe = false;
        }

        if (i % 5 == 0) {
            std::cout << "Buzz";
            czy_wypisac_liczbe = false;
        }

        if (i % 7 == 0) {
            std::cout << "Bong";
            czy_wypisac_liczbe = false;
        }

        if (czy_wypisac_liczbe) {
            std::cout << i;
        }

        std::cout << '\n';

    }

    return 0;
}