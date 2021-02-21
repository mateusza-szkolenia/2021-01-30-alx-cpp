#include <iostream>

/*
    Tak w STARYM C robiło się stałe
*/

#define IMIE "Mateusz"
#define WIEK 35

#define A       (4 + 5)
#define B       (10 + 10)

int main(){
    std::cout << "Moje imie: " << IMIE << "\n";
    std::cout << "Moj wiek:" << WIEK << "\n";

    int c;

    std::cout << "A wynosi " << A << "\n";
    std::cout << "B wynosi " << B << "\n";

    std::cout << "A * B wynosi " << A * B << "\n";

}
