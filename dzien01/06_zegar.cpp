//przyjmij 3 liczby, oznaczające liczbę godzin (0-23) i liczbę minut (0-59) wyświetlaną na zegarze elektronicznym, oraz liczbę minut
// wypisz godzinę, która będzie wyświetlana na zegarze po uplynieciu zadanej liczby minut.
// 12 5 10 -> 12 15
// 23 59 1 -> 0 0
// 15 20 2578 -> ?

#include <iostream>

int main() {
    int godz, min, m;
    std::cin >> godz >> min >> m;

    min += m; //to samo co min = min + m;
    godz += min / 60;
    godz %= 24; // to samo co godz = godz % 24;
    min %= 60; // to samo co min = min % 60;
    
    std::cout << godz << ' ' << min << '\n';
    return 0;
}