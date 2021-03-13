#include <iostream>

//M x N * N x K = M x K

template<typename T, unsigned M, unsigned N>
class Macierz {
public:
    void operator+=(const Macierz& other);

    template<unsigned K>
    Macierz<T, M, K> operator*(const Macierz<T, N, K>& other) const;
};

template<typename T, unsigned M, unsigned N>
template<unsigned K>
Macierz<T, M, K> Macierz<T, M, N>::operator*(const Macierz<T, N, K>& other) const {

}

int main() {
    Macierz<int, 3, 4> m1, m3;
    Macierz<int, 4, 5> m2;
    m1 += m3;
    auto x = m1 * m2;
}
