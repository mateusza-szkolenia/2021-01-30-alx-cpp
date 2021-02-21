#include <iostream>
#include "Osoba.hpp"

Osoba::Osoba(std::string imie, double waga, double wzrost){
    this->imie = imie;
    this->waga = waga;
    this->wzrost = wzrost;
    #ifdef DEBUG
    std::cout << "Hej, nazywam sie " << imie << "\n";
    #endif
}

double Osoba::bmi() const {
    return policzBMI(this->waga, this->wzrost);
}

double Osoba::policzBMI(double waga, double wzrost) {
    return waga/wzrost/wzrost;
}

std::string Osoba::klasyfikacja_bmi(double bmi){
    if (bmi < 16.0) return "wygłodzenie";
    if (bmi < 17.0) return "wychudzenie";
    if (bmi < 18.5) return "niedowaga";
    if (bmi < 25.0) return "OK";
    if (bmi < 30.0) return "nadwaga";
    return "otyłość";
}

void Osoba::opisz() const {
    std::cout << "Osoba: " << imie << " "
        << waga << " kg, "
        << wzrost << " m "
        << "BMI=" << bmi() << " "
        << klasyfikacja_bmi(bmi()) << "\n";
}

Osoba Osoba::generuj(){
    std::string imie = "Anonim #";
    double waga = 50.0 + (std::rand() % 500)/10.0;
    double wzrost = 1.4 + (std::rand() % 60)/100.0;

    Osoba o{imie, waga, wzrost};

    return o;
}
