#include <iostream>

// Vector<int> v;
// v.rozmiar();
// v.dodaj(5); //dodaje 5 na koniec listy
// v.daj(int n); //zwraca n-ty element z listy

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

    T& daj(unsigned n) {
        return _zawartosc[n];
    }

private:
    unsigned _rozmiar;
    T* _zawartosc;
};

int main() {
    Vector<int> v;
    v.dodaj(10);
    v.dodaj(20);
    v.dodaj(30);
    for (int i = 0; i < v.rozmiar(); i++) {
        std::cout << v.daj(i) << '\n';
    }
    return 0;
}
