#include <iostream>

int main(){

    int m;

    std::cout << "Podaj numer miesiąca: ";
    std::cin >> m;

    std::cout << "Przed tobą jeszcze następujące miesiące: \n";

    switch (m){
        case 1:
            std::cout << "Styczeń\n";
        case 2:
            std::cout << "Luty\n";
        case 3:
            std::cout << "Marzec\n";
        case 4:
            std::cout << "Kwiecień\n";
        case 5:
            std::cout << "Maj\n";
        default:
            std::cout << "...\n";
    }

}