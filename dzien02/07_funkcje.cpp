#include <iostream>

// zwracany_typ nazwa(typ_argumentu nazwa_argumentu, ...) {
//     // kod
// }

void hello() {
    std::cout << "Hello\n";
}

int dej_5() {
    // std::cout << "daje 5\n";
    return 5;
}

int nastepnik(int argument) {
    return argument + 1;
}

int dodaj(int a, int b) {
    return a + b;
}

//zwraca wartosc bezwzgledna z argumentu
int bezwzgl(int x) {
    // if (x >= 0) {
    //     return x;
    // }
    // else {
    //     return -x;
    // }

    // if (x < 0) {
    //     return -x;
    // }
    // return x;

    // war ? wartosc_jesli_prawda : wartosc_jesli_falsz
    return x < 0 ? -x : x;
}


int max(int a, int b) {
    // return a > b ? a : b;
    std::cout << "intowy max\n";
    if (a > b)
        return a;
    return b;
}

float max(float a, float b) {
    std::cout << "floatowy max\n";
    return a > b ? a : b;
}

int max(int a, int b, int c) {
    return max(max(a, b), c);
}

void trojkat(int n = 5, char c = '#') {
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < n - i - 1; j += 1) {
            std::cout << ' ';
        }
        
        for (int j = 0; j < 2 * i + 1; j += 1) {
            std::cout << c;
        }
        std::cout << '\n';
    }
}

bool czy_podzielna(int n, int k) {
    return n % k == 0;
}

int main() {
    // hello();
    // std::cout << "hej\n";
    // hello();
    // std::cout << dej_5() + 10 << '\n';
    // int x = dej_5() + dej_5(); // 10
    // std::cout << nastepnik(nastepnik(dej_5())) << '\n';
    // std::cout << dodaj(100, 50) << '\n';
    // std::cout << bezwzgl(7) << '\n';
    // std::cout << bezwzgl(-5) << '\n';

    std::cout << max(5, 7) << '\n';
    std::cout << max(5.8f, 7.2f) << '\n';
    // std::cout << max(5.8f, 7) << '\n';

    std::cout << max(4, 7, 2) << '\n';
    trojkat(5, '$');
    trojkat(5, '+');
    trojkat(5, 'F');
    trojkat(4);
    trojkat();

    if (czy_podzielna(10, 5)) {
        std::cout << "OK\n";
    }
    return 0;
}