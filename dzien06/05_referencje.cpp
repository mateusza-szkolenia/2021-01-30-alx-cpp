#include <iostream>

void powitanie(std::string imie, int &licznik){
    std::cout << "Witaj, " << imie << " (" << licznik << ")\n";
    licznik++;
}

int main(){
    int licznik_m=0, licznik_k=0;

    powitanie("Karol", licznik_m);
    powitanie("Michal", licznik_m);
    powitanie("Piotr", licznik_m);
    powitanie("Anna", licznik_k);
    powitanie("Mateusz", licznik_m);

    std::cout << "M=" << licznik_m << " K=" << licznik_k << "\n";

}
