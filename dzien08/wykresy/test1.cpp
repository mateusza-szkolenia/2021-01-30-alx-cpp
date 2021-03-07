#include <iostream>
#include "Wykresy.hpp"
#include "lib/SVG.hpp"

void zapisz_wykres_jako_SVG(const Wykres &, const std::string nazwa_pliku, const int szer, const int wys);

int main(){
    Wykres w;
    auto s1 = Slupek{60.5, "A", "red"};

    w.dodaj_slupek(s1);
    w.dodaj_slupek(Slupek{40, "B", "blue"});
    w.dodaj_slupek(Slupek{57.7, "C", "green"});
    w.dodaj_slupek(Slupek{57.7, "C", "green"});
    w.dodaj_slupek(Slupek{37.7, "C", "#ff9900"});
    w.dodaj_slupek(Slupek{27.7, "C", "#ffff33"});
    w.dodaj_slupek(Slupek{17.7, "C", "#dd3399"});

    zapisz_wykres_jako_SVG(w, "wykres1.svg", 800, 600);

}

void zapisz_wykres_jako_SVG(const Wykres &wykres, const std::string nazwa_pliku, const int szer, const int wys){

    SVGImage svg{szer, wys};

    int margines = 50;
    double szer_calk = szer - 2 * margines;
    double szer_pola = szer_calk / wykres.slupki.size();
    double szer_slupka = szer_pola * 0.8;
    double wys_pola = wys - 2 * margines;

    for (auto i=0; i<wykres.slupki.size(); i++){
        svg.add_element(SVGRect{
            static_cast<int>(margines + i*szer_pola + szer_pola/2.0 - szer_slupka/2.0),
            static_cast<int>(margines + (1-(wykres.slupki[i].wartosc / wykres.maks_wartosc)) * wys_pola),
            static_cast<int>(szer_slupka),
            static_cast<int>(wykres.slupki[i].wartosc / wykres.maks_wartosc * wys_pola),
            "black",
            wykres.slupki[i].kolor
        });

        svg.add_element(SVGText{
            static_cast<int>(margines + i*szer_pola + szer_pola/2.0 - szer_slupka/2.0),
            static_cast<int>(margines + (1-(wykres.slupki[i].wartosc / wykres.maks_wartosc)) * wys_pola),
            std::to_string(wykres.slupki[i].wartosc),
            "black"
        });

        svg.add_element(SVGText{
            static_cast<int>(margines + i*szer_pola + szer_pola/2.0 - szer_slupka/2.0),
            static_cast<int>(margines + wys_pola * 1.03),
            wykres.slupki[i].etykieta,
            "black"
        });


    }

    svg.save_to_file(nazwa_pliku);
}
