#include <iostream>

/*
Zadanie: stworzyć szablon funkcji przeliczającej temperaturę z C na F
*/

template <typename T>
T c2f(T temp_c){
    return temp_c * 1.8 + 32;
}

int main(){
    std::cout << c2f(20) << "\n";
    std::cout << c2f(36.6) << "\n";
}
