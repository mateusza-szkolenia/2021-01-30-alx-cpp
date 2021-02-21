#include <iostream>

void powitanie(std::string imie){
    // zmienna statyczna
    static int licznik = 0;
    std::cout << "Witaj, " << imie << " (" << licznik << ")\n";
    licznik++;
}

int main(){
    powitanie("Karol");
    powitanie("Michal");
    powitanie("Piotr");

    // z main() nie mam dostępu do tej zmiennej
    //std::cout << "n wynosi: " << licznik << "\n";
}
