
#include <iostream>
#include <fstream>

int main(){

    std::ifstream plik;
    plik.open("dane.txt");

    std::string linia;

    while(!plik.eof()){
        std::getline(plik, linia);
        std::cout << linia << linia.find(':') << "\n";
        std::cout << linia.substr(0, 7) << "\n";
    }
}
