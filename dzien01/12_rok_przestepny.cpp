//sprawdz czy podany rok jest rokiem przestępnym

#include <iostream>

int main() {
    int rok;
    std::cin >> rok;
    if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) {
        std::cout << "Rok " << rok << " jest przestepny.\n";
    }
    else {
        std::cout << "Rok " << rok << " nie jest przestepny.\n";
    }
    return 0;
}