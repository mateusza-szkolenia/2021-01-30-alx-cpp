#include <iostream>

void zwieksz(int *pk){
    std::cout << "Przed zwiekszeniem: " << pk << " " << *pk << "\n";
    *pk += 40;
    std::cout << "Po zwiekszeniu: " << pk << " " << *pk << "\n";
}

int main(){

    int x = 100;
    std::cout << "x wynosi " << x << "\n";

    // zrobić coś, żeby zwiększyć x o 40
    zwieksz(&x);

    std::cout << "x wynosi teraz: " << x << "\n";

    return 0;
}