#include <iostream>

int main(){

    int m;
    int q;

    std::cout << "Podaj numer miesiąca: ";
    std::cin >> m;

    switch (m){
        case 1:
        case 2:
        case 3:
            q = 1;
            break;
        case 4:
        case 5:
        case 6:
            q = 2;
            break;
        case 7:
        case 8:
        case 9:
            q = 3;
            break;
        case 10:
        case 11:
        case 12:
            q = 4;
            break;
        default:
            q = -1;
    }

    std::cout << "Kwartał: " << q << "\n";

}