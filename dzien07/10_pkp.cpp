#include <iostream>

int main(){

    char *buf = (char*)"ground";

    int *pa = (int *)(void *)buf;
    int a;

    a = *pa;

    std::cout << a << "\n";
    std::cout << *(int*)(void*)"ground" << "\n";

/*
    int n = 1970238055;

    std::cout << std::hex << n << "\n";

    std::cout << 127 << "\n";

    std::cout << std::dec;
    std::cout << (char)0x75 << "\n";
    std::cout << (char)0x6f << "\n";
    std::cout << (char)0x72 << "\n";
    std::cout << (char)0x67 << "\n";
*/

}