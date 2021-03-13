#include <iostream>
#include <vector>
#include <exception>

// praca domowa: zrobić własny wyjątek dziedziczący z std::exception, uzupelnic metodę what() i rzucić nim w jakimś miejscu

int operacja_ktora_moze_sie_wywalic(int x) {
    if (x == 3) {
        throw 42;
    }
    if (x == 2) {
        throw "zepsulo sie :<";
    }
    return 2 * x;
}

int main() {
    int x;
    std::cin >> x;
    try {
        std::cout << operacja_ktora_moze_sie_wywalic(x) << '\n';
        std::vector<int> v;
        v.at(2) = 10;
    }
    catch (int x) {
        std::cout << "Oberwalem intem o wartosci " << x << '\n';
    }
    catch (const char* c) {
        std::cout << "UPS: " << c << '\n';
    }
    catch (std::exception& e) {
        std::cout << "wyjatek z stdlib " << e.what() << "\n";
    }
    catch (...) {
        std::cout << "nieznany wyjatek\n";
        throw; //ten sam wyjatek leci dalej
    }
    std::cout << "Program dalej dziala!\n";
    return 0;
}