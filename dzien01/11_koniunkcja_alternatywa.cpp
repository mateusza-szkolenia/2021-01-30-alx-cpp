#include <iostream>

int main() {
    //AND
    std::cout << "koniunkcja:\n";
    std::cout << (true && true) << '\n';
    std::cout << (true && false) << '\n';
    std::cout << (false && true) << '\n';
    std::cout << (false && false) << '\n';

    //OR
    std::cout << "alternatywa:\n";
    std::cout << (true || true) << '\n';
    std::cout << (true || false) << '\n';
    std::cout << (false || true) << '\n';
    std::cout << (false || false) << '\n';

    //NOT
    std::cout << "negacja:\n";
    std::cout << (!true) << '\n';
    std::cout << (!false) << '\n';
    return 0;
}