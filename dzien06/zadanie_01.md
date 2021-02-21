# Zadanie

Stworzyć klasę `Osoba` przechowującą `imie`, `wage`, `wzrost` osoby.

Klasa ma posiadać metodę obliczającą `BMI` osoby oraz metodę wyświetlającą osobę (imie, wagę, wzrost, BMI, słowny opis zdrowia).

Klasa ma posiadać statyczną metodę `std::string klasyfikacja_bmi(double bmi)`, opisującą słownie stan zdrowia na podstawie `BMI`.

[BMI w Wikipedii](https://pl.wikipedia.org/wiki/Wska%C5%BAnik_masy_cia%C5%82a)

Klasa ma posiadać statyczną metodę służącą go generowania losowych osób.

```
Osoba o1{"Karol", 70, 1.79};

Osoba o2 = Osoba::wygeneruj();

o1.opisz();
o2.opisz();

```
