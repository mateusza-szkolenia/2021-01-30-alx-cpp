#include <iostream>
#include <string>

// Vector<int> v;
// v.rozmiar();
// v.dodaj(5); //dodaje 5 na koniec listy
// v.daj(int n); //zwraca n-ty element z listy

//praca domowa: zmodyfikowac Vector tak, aby dodawanie elementów było w amortyzowanym czasie O(1)

template<typename T>
class Vector {
public:
    Vector() : _rozmiar{0}, _zawartosc{nullptr} {
    }

    Vector(const Vector& v) = delete;
    void operator=(const Vector& v) = delete;

    ~Vector() {
        delete[] _zawartosc;
    }

    unsigned rozmiar() const {
        return _rozmiar;
    }

    void dodaj(const T& x) {
        if (_rozmiar > 0) {
            T* tmp = new T[_rozmiar + 1];
            for (unsigned i = 0; i < _rozmiar; i++) {
                tmp[i] = _zawartosc[i];
            }
            delete[] _zawartosc;
            _zawartosc = tmp;
        }
        else { //_rozmiar == 0
            _zawartosc = new T[_rozmiar + 1];
        }
        _zawartosc[_rozmiar++] = x;
    }

    // tu this jest typu const T* const
    const T& daj(unsigned n) const {
        return _zawartosc[n];
    }

    //tu this jest typu T* const
    T& daj(unsigned n) {
        return _zawartosc[n];
    }

    const T& operator[](unsigned n) const {
        return _zawartosc[n];
    }

    T& operator[](unsigned n) {
        return _zawartosc[n];
    }

private:
    unsigned _rozmiar;
    T* _zawartosc;
};

template<typename T>
void wypisz(const Vector<T>& v) {
    for (int i = 0; i < v.rozmiar(); i++) {
        std::cout << v[i] << '\n';
    }
}

int main() {
    Vector<int> v;
    v.dodaj(10);
    v.dodaj(20);
    v.dodaj(30);
    v.daj(1) = 123;
    v[2] = 456;
    wypisz(v);

    Vector<std::string> v2;
    v2.dodaj("ala");
    v2.dodaj("ma");
    v2.dodaj("kota");
    wypisz(v2);
    return 0;
}
