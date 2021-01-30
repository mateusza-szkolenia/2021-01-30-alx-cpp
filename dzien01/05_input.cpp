#include <iostream>

int main() {
    int a, b;
    std::cout << "Podaj liczbe: ";
    std::cin >> a;
    std::cout << "Podales: " << a << '\n';
    std::cin >> a >> b;
    std::cout << a + b << '\n';
    return 0;
}