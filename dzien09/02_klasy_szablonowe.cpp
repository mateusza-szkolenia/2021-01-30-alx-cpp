#include <iostream>
#include <string>

// class Pudelko {
// public:
//     void ustaw(int x);
//     int daj() const;
// private:
//     int x;
// };

// void Pudelko::ustaw(int x) {
//     this->x = x;
// }

// int Pudelko::daj() const {
//     return x;
// }

template<typename T>
class Pudelko {
public:
    void ustaw(const T& x);

    const T daj() const {
        return x;
    }
private:
    T x;
};

template<typename T>
void Pudelko<T>::ustaw(const T& x) {
    this->x = x;
}

int main() {
    Pudelko<int> p;
    Pudelko<std::string> p2;
    p.ustaw(5);
    p2.ustaw("ala ma kota");
    std::cout << p.daj() << '\n';
    std::cout << p2.daj() << '\n';
    return 0;
}
