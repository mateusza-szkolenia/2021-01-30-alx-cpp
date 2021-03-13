#include <iostream>
#include <vector> //uporzadkowany, szybki dostep do dowolnego elementu, wstawianie szybkie tylko na koniec
#include <list> // uporządkowany, szybkie wstawianie w dowolnym miejscu, dostęp do elementu w czasie liniowym
#include <deque> //uporzadkowany, szybki dostep do dowolnego elementu, wstawianie szybkie tylko na koniec i początek

#include <set> // "uporządkowany", dodanie/usuniecie/znalezienie elementu w O(logn), elementy muszą być porównywalne za pomocą operator<

struct punkt {
    // punkt() : x{}, y{} {}
    int x;
    int y;

    bool operator<(const punkt& other) const {
        return x < other.x ? true : x == other.x ? y < other.y : false;
    }
};

int main() {
    std::set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.erase(5);
    std::cout << s.size() << '\n';
    for (int x : s) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    auto it = s.find(35); //iterator na element jeśli jest w zbiorze, end() w przeciwnym przypadku
    if (it == s.end())
        std::cout << "elementu nie znaleziono\n";

    std::set<punkt> zbior_punktow{punkt{3, 5}};
    return 0;
}