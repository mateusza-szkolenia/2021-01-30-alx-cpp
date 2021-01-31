//napisz funkcję, która sprawdzi czy jej argument jest liczbą pierwszą

#include <iostream>

bool czy_pierwsza(int x) {
    if (x < 2)
        return false;
    
    for (int i = 2; i <= x / 2; i += 1) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << (czy_pierwsza(1) == false) << '\n';
    std::cout << (czy_pierwsza(2) == true) << '\n';
    std::cout << (czy_pierwsza(6) == false) << '\n';
    std::cout << (czy_pierwsza(7) == true) << '\n';
    std::cout << (czy_pierwsza(25) == false) << '\n';
    std::cout << (czy_pierwsza(121) == false) << '\n';
    std::cout << (czy_pierwsza(1000000007) == true) << '\n';
    return 0;
}