#include <iostream>

// celowo nie inicjuję PRNG

struct Punkt {
    double x;
    double y;
};

int main(){
    const int N = 100;
    int licznik_cwiartki[4] = {0, 0, 0, 0};

    Punkt punkty[N];

    for (int i=0; i<N; i++){
        punkty[i].x = std::rand() % 201 - 100;
        punkty[i].y = std::rand() % 201 - 100;
    }

    for (int i=0; i<N; i++){
        std::cout << i << ": " << punkty[i].x << ", " << punkty[i].y << "\n";
    }

    return 0;
}
