#include <iostream>

int main(){
    int liczby[7];
    int *plicz;
    int liczba;

    for(int i=0; i<7; i++){
        liczby[i] = 1000 + i;
        // *(liczby + i) = 5000 + i;
        // *(i + liczby) = 6000 + i;
        // i[liczby] = 7000 + i;
    }

    plicz = liczby;
    plicz += 2;
    liczba = *plicz;

    std::cout << sizeof(int) << "\n";
    std::cout << liczby << "\n";
    std::cout << plicz << "\n";
    std::cout << liczba << "\n";
}
