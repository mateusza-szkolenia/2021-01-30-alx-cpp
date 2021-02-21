#include <iostream>

int main(){
    #ifdef DEBUG
    std::cout << "Uruchomienie programu\n";
    #endif

    int suma = 0;
    for(int i=1; i<8; i++){
        #ifdef DEBUG
        std::cout << "Suma dotychczas: " << suma << "   dodaje " << i << " do kwadratu\n";
        #endif
        suma += i * i;
    }
    std::cout << "Suma: " << suma << "\n";
    #ifdef DEBUG
    std::cout << "Koniec\n";
    #endif

}