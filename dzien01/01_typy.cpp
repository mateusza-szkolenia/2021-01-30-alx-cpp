#include <iostream>

// komentarze są ignorowane przez kompilator

/*
komentarz
komentarz
komentarz
komentarz
*/

int main() {
    std::cout << "Napis\n";
    std::cout << 234 << "\n"; // 234 jest liczbą całkowitą
    std::cout << 3.14 << "\n"; // 3.14 jest liczbą rzeczywistą
    std::cout << 'z' << '\n'; // 'z' jest znakiem

    std::cout << 2 + 2 * 2 << '\n';
    std::cout << (2 + 2) * 2 << '\n';
    return 0;
}