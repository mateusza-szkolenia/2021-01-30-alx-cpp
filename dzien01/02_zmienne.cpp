#include <iostream>

int main() {
    int maslo = 10; // int - liczby calkowite
    std::cout << maslo << '\n';
    std::cout << 2 * maslo << '\n';
    maslo = 123;
    std::cout << 2 * maslo << '\n';

    short int si;
    long int li;
    long long int lli;

    unsigned int u = 1u;


    double d = 3.1415; // double - liczby rzeczywiste
    std::cout << d + 5.0 << '\n';

    float f = 2.71f; // float - liczby rzeczywiste
    std::cout << f + 5.0f << '\n';

    std::cout << maslo + d << '\n';
    maslo = d;
    std::cout << maslo << '\n';


    std::cout << "int: " << sizeof(int) << '\n';
    std::cout << "short int: " << sizeof(short int) << '\n';
    std::cout << "long int: " << sizeof(long int) << '\n';
    std::cout << "long long int: " << sizeof(long long int) << '\n';

    char c = 'F';
    std::cout << "Press " << c << " to pay respects.\n";
    return 0;
}
