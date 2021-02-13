#include <iostream>

int main(){
    int liczba = 100;
    int *pliczba;

    pliczba = &liczba;

    std::cout << pliczba << "\n";

    return 0;
}