#include <iostream>
#include <vector> //uporzadkowany, szybki dostep do dowolnego elementu, wstawianie szybkie tylko na koniec
#include <list> // uporządkowany, szybkie wstawianie w dowolnym miejscu, dostęp do elementu w czasie liniowym
#include <deque> //uporzadkowany, szybki dostep do dowolnego elementu, wstawianie szybkie tylko na koniec i początek
#include <set> // uporządkowany rosnąco, dodanie/usuniecie/znalezienie elementu w O(logn), elementy muszą być porównywalne za pomocą operator<
#include <unordered_set> // nieuporządkowany, dodanie/usuniecie/znalezienie elementu w O(1), elementy muszą być haszowalne (hash()) i mieć operator==
//multiset i unordered_multiset przechowują każdą kopię a nie tylko unikalne
#include <map> // przechowuje pary <klucz, wartosc>, uporządkowane rosnąco względem klucza, wartości można modyfikować, dodanie/usuniecie/znalezienie elementu w O(logn), klucze muszą być porównywalne za pomocą operator<
#include <unordered_map> //nieuporządkowane, dostęp w O(1), klucze muszą być haszowalne
//multimap i unordered_multimap analogicznie do setów

#include <utility> // zawiera m.in. std::pair
// template<typename T, typename U>
// struct pair {
//     T first;
//     U second;
// };

#include <algorithm> //różne algorytmy, często szablonowe. Przykładowo std::sort, std::max, std::accumulate

#include <string>

int main() {
    std::vector<int> v(10, 100);

    for (int x : v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    std::fill(v.begin(), v.begin()+ 3, 3);

    for (int x : v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    return 0;
}