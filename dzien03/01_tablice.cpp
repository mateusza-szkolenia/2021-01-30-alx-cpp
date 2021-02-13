#include <iostream>

int main(){
    int liczby[7];

    liczby[3] = 300;
    liczby[4] = 400;

    for(int i=0; i<10; i++){
        std::cout << "[" << i <<"]: " << liczby[i] << "\n";
    }

    return 0;
}