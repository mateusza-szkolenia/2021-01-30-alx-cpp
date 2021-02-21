#include <iostream>

int main(){

    int m;

    std::cout << "Podaj numer miesiąca: ";
    std::cin >> m;

    switch (m){
        case 1:
            std::cout << "Styczeń\n";
            break;
        case 2:
            std::cout << "Luty\n";
            break;
        case 3:
            std::cout << "Marzec\n";
            break;
        case 4:
            std::cout << "Kwiecień\n";
            break;
        case 5:
            std::cout << "Maj\n";
            break;
        default:
            std::cout << "...\n";
    }

}