// pobieramy 3 liczby i sprawdzamy czy z odcinków takiej długości da się zbudować trójkąt

#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a + b >= c && a + c >= b && b + c >= a) {
        std::cout << "OK\n";
    }
    else {
        std::cout << "Nie da się :<\n";
    }
    return 0;
}
