#include <iostream>

int main()
{

    // przesunięcie bitowe o 3 w lewo
    // efektywnie równoznaczne z pomnożeniem przez 8 (2*2*2)
    std::cout << (30 << 3) << "\n";

    // przesunięcie bitowe w prawo
    // efektywnie równoznaczne z dzieleniem całk. przez 4 (2*2)
    std::cout << (900 >> 2) << "\n";

    // a:   1 1 0 0 1 1 0 0    (204)
    // b:   0 1 1 1 1 0 0 1    (121)
    int a = 204;
    int b = 121;

    // &    0 1 0 0 1 0 0 0    (72)
    std::cout << (a&b) << "\n";

    // |    1 1 1 1 1 1 0 1    (253)
    std::cout << (a|b) << "\n";

    // ^    1 0 1 1 0 1 0 1    (181)
    std::cout << (a^b) << "\n";

}
