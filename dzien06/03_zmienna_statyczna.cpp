#include <iostream>

// zmienna globalna - można ją zmieniać z dowolnego miejsca w programie
int licznik = 0;

void powitanie(std::string imie){
    std::cout << "Witaj, " << imie << " (" << licznik << ")\n";
    licznik++;
}

int main(){
    powitanie("Karol");
    powitanie("Michal");
    powitanie("Piotr");

    std::cout << "n wynosi: " << licznik << "\n";
}