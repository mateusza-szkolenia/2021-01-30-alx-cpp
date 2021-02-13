#include <iostream>
#include <cstdlib> //rand(), srand()
#include <ctime> //time()

int main() {
    // std::cout << std::time(nullptr) << '\n';
    std::srand(std::time(nullptr));
    //std::srand(123);
    //std::cout << std::time(nullptr) << '\n';
    std::cout << std::rand() << '\n';
    std::cout << std::rand() << '\n';
    std::cout << std::rand() << '\n';

    std::cout << std::rand() % 6 + 1 << '\n';
    return 0;
}
