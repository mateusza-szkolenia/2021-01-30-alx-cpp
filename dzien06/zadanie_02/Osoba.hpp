#include <string>

class Osoba {
    public:
        Osoba(std::string, double, double);
    private:
        std::string imie;
        std::string nazwisko;
        double waga;    // w kg
        double wzrost;  // w metrach
};

