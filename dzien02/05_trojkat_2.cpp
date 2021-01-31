//przyjmujemy liczbę n
// wypisujemy na ekran trojkat o wysokosci n zlozony ze znakow #

// przykladowo, dla n = 3:
//   #
//  ###
// #####


// OO#
// O###
// #####

// OOO#
// OO###
// O#####
// #######

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < n - i - 1; j += 1) {
            std::cout << ' ';
        }
        
        for (int j = 0; j < 2 * i + 1; j += 1) {
            std::cout << '#';
        }
        std::cout << '\n';
    }
    return 0;
}

// i: 2i + 1 #

// n = 4
// 0: 3
// 1: 2
// 2: 1
// 3: 0
// i: n - i - 1