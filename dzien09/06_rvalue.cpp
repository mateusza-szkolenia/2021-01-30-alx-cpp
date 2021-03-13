#include <iostream>
#include <vector>

void co_to(const int& x) {
    std::cout << "referencja na int\n";
}

void co_to(int&& x) {
    std::cout << "rvalue reference na int\n";
}

int main() {
    int x = 10;
    co_to(x);
    co_to(5);
    // std::vector<int> v = std::vector<int>{3, 4, 5}; //tu mamy rvalue
    return 0;
}
