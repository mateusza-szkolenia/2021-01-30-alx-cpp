#include <iostream>

int gcd(const int a, const int b){
    if (a==0) return b;
    if (b==0) return a;
    if (a==b) return a;
    return (a > b) ? gcd(a%b, b) : gcd(b%a, a);
}

class Ulamek
{
private:
    int licznik;
    int mianownik;

public:
    Ulamek() : Ulamek(0, 1){
    }

    Ulamek(int licznik, int mianownik){
        // std::cout << "Hej! Jestem nowym Ulamkiem! " << this << " L=" << licznik << " M=" << mianownik << "\n";
        this->mianownik = mianownik;
        this->licznik = licznik;
        this->skroc_sie();
    }

    void wypisz() const
    {
        std::cout << licznik << "/" << mianownik << "\n";
    }

    Ulamek operator* (const Ulamek &u2) const
    {
        return Ulamek {
            licznik * u2.licznik,
            mianownik * u2.mianownik
        };
    }

    Ulamek operator/ (const Ulamek &u2) const
    {
        return Ulamek {
            licznik * u2.mianownik,
            mianownik * u2.licznik
        };
    }

    Ulamek operator+ (const Ulamek &u2) const
    {
        return Ulamek {
            licznik * u2.mianownik + u2.licznik * mianownik,
            mianownik * u2.mianownik
        };
    }

    Ulamek operator- (const Ulamek &u2) const
    {
        return Ulamek {
            licznik * u2.mianownik - u2.licznik * mianownik,
            mianownik * u2.mianownik
        };
    }

    void skroc_sie(){
        if (mianownik<0){
            licznik = -licznik;
            mianownik = -mianownik;
        }
        int x = gcd(std::abs(licznik), mianownik);
        licznik /= x;
        mianownik /= x;
    }

    int get_licznik(){
        return this->licznik;
    }
};


int main(){
    Ulamek u1{10, 40};

    //u1.licznik = 34;
    std::cout << u1.get_licznik() << "\n";

    u1.wypisz();

}