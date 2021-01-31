#include <iostream>
#include <cstdlib>
#include <ctime>

//losujemy liczbę z przedzialu 1-1000000
//kazemy uzytkownikowi zgadywac do skutku
// jesli uzytkownik trafi to konczymy program
// jesli nie do dostaje komunikat za duzo/malo i zgaduje dalej

int main() {
    std::srand(std::time(nullptr));
    int losowa = std::rand() % 1000000 + 1;

    // int zgadnieta = -1;
    // while (zgadnieta != losowa) {
    //     std::cout << "Zgaduj: ";
    //     std::cin >> zgadnieta;
    // }

    int zgadnieta;
    do {
        std::cout << "Zgaduj: ";
        std::cin >> zgadnieta;
        if (zgadnieta < losowa) {
            std::cout << "Za malo!\n";
        }
        else if (zgadnieta > losowa) {
            std::cout << "Za duzo!\n";
        }
    } while (zgadnieta != losowa);

    // while (true) {
    //     int zgadnieta;
    //     std::cout << "Zgaduj: ";
    //     std::cin >> zgadnieta;
    //     if (zgadnieta == losowa)
    //         break;
    // }

    std::cout << "Brawo!\n";

    return 0;
}