#include <iostream>

int main() {

    // int i = 1;
    // while (i <= 100) {
    //     std::cout << i << '\n';
    //     i += 1;
    // }

    // zamiast podzielnych przez 3 wypisujemy Fizz
    // zamiast podzielnych przez 5 wypisujemy Buzz
    // jesli podzielne prze oba to FizzBuzz
    for (int i = 1; i <= 100; i += 1) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0) {
            std::cout << "Fizz\n";
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz\n";
        }
        else {
            std::cout << i << '\n';
        }

    }

    // int j = 100;
    // {
    //     int j = 200;
    //     std::cout << j << '\n';
    // }

    // std::cout << j << '\n';

    return 0;
}