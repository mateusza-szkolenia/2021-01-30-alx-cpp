#include <iostream>
#include <fstream>

int main(){

    std::ofstream plik;

    plik.open("nauka01.svg");
    plik << "<svg width='800' height='600' xmlns='http://www.w3.org/2000/svg'>\n";
    int p = 100;
    for (int i=0; i<10; i++){

        plik << "<rect height='260' width='300' y='" << p << "' x='" << p << "' stroke='rgb(0,0,0)' fill='rgb(255, "<< (p % 256)<<", 255)' stroke-width='2' />\n";
        p += 10*i;
    }
    plik << "</svg>\n";
    plik.close();
}
