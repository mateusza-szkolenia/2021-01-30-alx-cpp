//przyjmujemy liczbę n
// wypisujemy na ekran trojkat o wysokosci n zlozony ze znakow #

// przykladowo, dla n = 3:
// #
// ##
// ###
// ##
// #

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j <= i; j += 1) {
            std::cout << '#';
        }
        std::cout << '\n';
    }
    
    for (int i = 0; i < n - 1; i += 1) {
        for (int j = n - i - 1; j > 0; j -= 1) {
            std::cout << '#';
        }
        std::cout << '\n';
    }
    return 0;
}