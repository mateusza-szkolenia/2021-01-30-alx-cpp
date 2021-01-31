#include <iostream>

int main() {
    int i = 0;
    while (i < 10) {
        i += 1;
 
        if (i == 2)
            continue; //przechodzi do następnej iteracji (wraca do sprawdzenia warunku)

        std::cout << i << '\n';
        
        if (i == 7)
            break; //konczy pętlę
    }
    std::cout << "koniec\n";
    return 0;
}