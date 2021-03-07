#include "SVG.hpp"

int main(){
    SVGImage img{500, 300};


    SVGRect r{10, 20, 300, 200, "blue", "yellow"};

    SVGEllipse e{50, 50, 300, 200, "orange", "white"};

    img.add_element(SVGLine{0, 0, 500, 300, "red"});

    img.add_element(r);

    for(int i=0; i<10; i++){
        img.add_element(SVGRect{20+i*10, 30+i*10, 400, 100, "yellow", "red"});
    }

    img.add_element(e);
    img.add_element(SVGLine{0, 0, 500, 300, "red"});
    img.add_element(SVGText{250, 280, "Jaka piękna obsługa SVG", "#000000"});

    img.save_to_file("obrazek.svg");

}
