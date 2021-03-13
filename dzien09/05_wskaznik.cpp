#include <iostream>

//klasa szablonowa Wskaznik<T>, która zachowuje się jak zwyczajny wskaznik, ale usuwa wskazywany obiekt w destruktorze
// POD WARUNKIEM, że jest ostatnim wskaźnikiem pokazującym na niego.
template<typename T>
class Wskaznik {
public:
    Wskaznik();
    Wskaznik(const Wskaznik& inny);
    Wskaznik(T* inny_wsk);
    Wskaznik(T wartosc);
    ~Wskaznik();

    void operator=(const Wskaznik& inny);
    void operator=(T* inny_wsk);

    T& operator*();
private:
    void zwieksz_licznik();
    void zmniejsz_licznik();

    unsigned* licznik;
    T* ptr;
};

template<typename T>
Wskaznik<T>::Wskaznik() : licznik{nullptr}, ptr{nullptr} {
}

template<typename T>
Wskaznik<T>::Wskaznik(const Wskaznik& inny) : licznik{inny.licznik}, ptr{inny.ptr} {
    zwieksz_licznik();
}

template<typename T>
Wskaznik<T>::Wskaznik(T* inny_wsk) : licznik{new unsigned{1}}, ptr{inny_wsk} {
}

//copy and swap idiom
template<typename T>
Wskaznik<T>::Wskaznik(T wartosc) : licznik{new unsigned{1}}, ptr{new T{std::move(wartosc)}} {
}

//move semantics

// {
//     Wskaznik<int> w, w2;
//     int x = 9;
//     w = x;
//     w2 = 10;
// }

template<typename T>
Wskaznik<T>::~Wskaznik() {
    std::cout << "DESTRUKTOR WSKAZNIKA\n";
    zmniejsz_licznik();
}

template<typename T>
void Wskaznik<T>::operator=(const Wskaznik& inny) {
    if (this == &inny)
        return;
    zmniejsz_licznik();
    licznik = inny.licznik;
    ptr = inny.ptr;
    zwieksz_licznik();
}

// {
//     Wskaznik<int> a, b;
//     a = b;
// }

template<typename T>
void Wskaznik<T>::operator=(T* inny_wsk) {
    zmniejsz_licznik();
    ptr = inny_wsk;
    licznik = ptr == nullptr ? nullptr : new unsigned{0};
    zwieksz_licznik();
}

template<typename T>
T& Wskaznik<T>::operator*() {
    return *ptr;
}

template<typename T>
void Wskaznik<T>::zwieksz_licznik() {
    if (licznik != nullptr)
        *licznik += 1;
}

template<typename T>
void Wskaznik<T>::zmniejsz_licznik() {
    if (licznik != nullptr && --(*licznik) == 0) {
        std::cout << "ZWALNIAM PAMIEC\n";
        delete licznik;
        delete ptr;
    }
}


int main() {
    Wskaznik<int> p{234};
    std::cout << *p << '\n';
    p = new int{123};
    std::cout << *p << '\n';
    {
        Wskaznik<int> q = p;
        *q = 33;
    }

    std::cout << *p << '\n';
}
