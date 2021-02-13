#include <iostream>

void zwieksz(int k){
    std::cout << "Przed zwiekszeniem: " << k << "\n";
    k += 40;
    std::cout << "Po zwiekszeniu: " << k << "\n";
}

int main(){

    int x = 100;
    std::cout << "x wynosi " << x << "\n";

    // zrobić coś, żeby zwiększyć x o 40
    zwieksz(x);

    std::cout << "x wynosi teraz: " << x << "\n";

    return 0;
}