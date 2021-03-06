#include <iostream>

int main(){
    int s = 0;
    int ile = 0;
    int i, j;

    for(i = 5; i < 55; i++){
        for(j = 7; j < 77; j++){
            s += i*j;
            ile++;
        }
    }

    std::cout << "suma wynosi: " << s << "\n";
    std::cout << "ile: " << ile << "\n";

}
