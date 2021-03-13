#include <iostream>
#include <string>

template<int N>
int fun() {
    return N;
}

template<>
int fun<3>() {
    std::cout << "szablon dla 3\n";
    return 3;
}

// fib(n) = fib(n - 1) + fib(n - 2)
template<int N>
int fib() {
    return fib<N - 1>() + fib<N - 2>();
}

template<>
int fib<0>() {
    return 0;
}

template<>
int fib<1>() {
    return 1;
}

int fib_rek(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib_rek(n - 1) + fib_rek(n - 2);
}

template<typename T, T x>
T dej_x()
{
    return x;
}

template<typename T, typename U = T>
void wypisz()
{
    T x{};
    U y{};
    std::cout << x << '\n' << y << '\n';
}

int main() {
    // std::cout << fun<5>() << '\n';
    // std::cout << fun<3>() << '\n';

    std::cout << dej_x<int, 10>() << '\n';
// #ifdef SZABLON
//     std::cout << fib<42>() << '\n';
// #else
//     std::cout << fib_rek(42) << '\n';
// #endif

    wypisz<std::string, int>();
    return 0;
}