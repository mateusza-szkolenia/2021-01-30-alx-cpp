#include <iostream>

// Uruchamiać z przekierowaniem do pliku:
// ./a.out > plik.pnm

int main()
{
    int w=64, h=64;

    std::cout << "P3\n";
    std::cout << w << " " << h << " " << 255 << "\n";
    for (int y=0; y<h; y++){
        for(int x=0; x<w; x++){
            int r, g, b;
            r = 20; g = 80; b = 10;
            if (y > w/3){
                r = 250; g = 250; b = 10;
            }
            std::cout << r << " " << g << " " << b << "\n";
        }
    }

}