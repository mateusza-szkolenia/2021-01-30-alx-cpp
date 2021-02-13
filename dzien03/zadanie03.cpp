#include <iostream>

// int* zmienna     typ: int*  nazwa: zmienna
// int *zmienna     *zmienna jako całość jest typu int

void unormuj(int *zmienna) {
    if (*zmienna < 0) *zmienna = -1;
    if (*zmienna > 0) *zmienna = 1;
}

int main(){
    int x = 4;
    int y = -7;
    int z = 0;

    unormuj(&x);
    unormuj(&y);
    unormuj(&z);

    std::cout << x << " " << y << " " << z << "\n";
    
    return 0;
}
