#include <iostream>

// celowo nie inicjuję PRNG

struct Punkt {
    double x;
    double y;
};

void inicjuj_punkt(Punkt *p){
    p->x = std::rand() % 401 - 200;
    p->y = std::rand() % 401 - 200;
}

int main(){
    const int N = 100;
    int licznik_cwiartki[4] = {0, 0, 0, 0};
    int licznik_osi[2] = {0, 0};

    Punkt punkty[N];

    for (int i=0; i<N; i++){
        inicjuj_punkt(&punkty[i]);
    }

    for (int i=0; i<N; i++){
        if (punkty[i].x > 0 && punkty[i].y > 0) licznik_cwiartki[0]++; // I ćwiartka
        if (punkty[i].x < 0 && punkty[i].y > 0) licznik_cwiartki[1]++; // II ćwiartka
        if (punkty[i].x < 0 && punkty[i].y < 0) licznik_cwiartki[2]++; // III ćwiartka
        if (punkty[i].x > 0 && punkty[i].y < 0) licznik_cwiartki[3]++; // IV ćwiartka

        if (punkty[i].y == 0 ) licznik_osi[0]++; // oś X
        if (punkty[i].x == 0 ) licznik_osi[1]++; // oś Y
    }

    for (int i=0; i<N; i++){
        std::cout << i << ": " << punkty[i].x << ", " << punkty[i].y << "\n";
    }

    for (int i=0; i<4; i++){
        std::cout << "ćwiartka " << (i + 1) << ": " << licznik_cwiartki[i] << "\n";
    }
    std::cout << "oś X: " << licznik_osi[0] << "\n";
    std::cout << "oś Y: " << licznik_osi[1] << "\n";

    return 0;
}
