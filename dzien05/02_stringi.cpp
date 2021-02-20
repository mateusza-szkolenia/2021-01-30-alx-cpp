#include <iostream>
#include <string>

int main(){

    int8_t a2; // halo -128 .. 0 .. 127
    char a[100]; // bufor

    int a3 = 72;

    a2 = 72;
    a2 = 'X'; // przypisanie znaku X, czyli realnie kodu ASCII znaku X, czyli 88
    a2 = 'A' + 5; // piąta litera po A czyli F, czyli kod 70

    std::string imie = "Ala";
    std::string zwierze = "koty";
    std::string zdanie;
    int n = 102;
    std::string ile = std::to_string(n);

    // null terminated strings
    //  65 108  97   0
    // [A] [l] [a] nul

    // konwersja typu char na int, spowoduje wyświetlenie kodu (liczby) a nie znaku ASCII
    std::cout << (int)a2 << "\n";

    std::cout << imie << "\n";
    std::cout << imie.size() << "\n";
    

    zdanie = imie + " ma " + ile + " " + zwierze;

    std::cout << zdanie << ":" << zdanie.size() << "\n";

    std::cout << zdanie.at(4) << "\n";
    std::cout << zdanie[2] << "\n";

    zdanie[8+4] = 'a';

    std::cout << zdanie << "\n";

    std::string fragment_zdania;

    fragment_zdania = zdanie.substr(7, 3);

    std::cout << fragment_zdania << "\n";

    std::cout <<sizeof(char16_t) << "\n";
    std::cout <<sizeof(wchar_t) << "\n";
    
}
