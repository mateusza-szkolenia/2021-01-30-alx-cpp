#include <iostream>
#include <cstdlib>
#include <ctime>

int k6(){
    return std::rand() % 6 + 1;
}

int main(){
    const int ILE_RZUTOW = 100;
    std::srand(std::time(nullptr));

    for (int i=0; i<ILE_RZUTOW; i++){
        std::cout << k6() << "\n";
    }

    return 0;
}