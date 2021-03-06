#include "SVG.hpp"

int main(){
    SVGImage img{500, 300};

/*
    Rect r{10, 20, 300, 200, "blue", "yellow"};
    Elipse e{50, 50, 300, 200, "orange", "white"};

    img.addElement(r);
    img.addElement(e);
*/
    img.save_to_file("obrazek.svg");

}