#include <list>
#include <iostream>

int main() {
    std::list<int> v{10, 20, 30, 40, 50};
    std::list<int>::iterator poczatek = v.begin(); //begin() zwraca iterator na pierwszy element
    std::list<int>::iterator koniec = v.end(); //end() zwraca iterator na miejsce ZA ostatnim elementem
    // for (unsigned i = 0; i < v.size(); i++) {
    //     std::cout << v[i] << ' ';
    // }
    // std::cout << '\n';

    for (std::list<int>::iterator it = v.begin(); it != v.end(); it++) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';

    for (std::list<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';

    //praca domowa: wqykorzystać własny Vector w foreach
    for (int x : v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    return 0;
}