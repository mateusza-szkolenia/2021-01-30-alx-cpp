#include <iostream>
#include <cstdlib>
#include <ctime>

int k6(){
    return std::rand() % 6;
}

int main(){
    std::srand(std::time(nullptr));

    std::cout << k6() << "\n";

    return 0;
}