#include <iostream>

int main() {
    //AND
    std::cout << "koniunkcja:\n";
    std::cout << (true && true) << '\n';    // true
    std::cout << (true && false) << '\n';   // false
    std::cout << (false && true) << '\n';   // false
    std::cout << (false && false) << '\n';  // false

    //OR
    std::cout << "alternatywa:\n";
    std::cout << (true || true) << '\n';    // true
    std::cout << (true || false) << '\n';   // true
    std::cout << (false || true) << '\n';   // true
    std::cout << (false || false) << '\n';  // false

    //NOT
    std::cout << "negacja:\n";
    std::cout << (!true) << '\n';           // false
    std::cout << (!false) << '\n';          // true
    return 0;
}