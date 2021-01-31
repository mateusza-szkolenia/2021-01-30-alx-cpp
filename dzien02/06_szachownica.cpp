// dla podanego n wypisz szachownicę rozmiaru n x n
// złożoną ze znaków '0' i '1'
// dla n = 8
// 01010101
// 10101010
// 01010101
// 10101010
// 01010101
// 10101010
// 01010101
// 10101010

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int wiersz = 0; wiersz < n; wiersz += 1) {
        for (int i = 0; i < n; i += 1) {
            std::cout << (wiersz + i) % 2;
            
            // if ((wiersz + i) % 2 == 0) {
            //     std::cout << 'X';
            // }
            // else {
            //     std::cout << 'O';
            // }


        }
        std::cout << '\n';
    }
    return 0;
}