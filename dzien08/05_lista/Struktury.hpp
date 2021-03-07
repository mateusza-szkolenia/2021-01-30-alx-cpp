#include <iostream>

template <typename T>
class ElementListy {
    public:
        T wartosc;
        ElementListy<T> *nastepny;
        ElementListy<T> *poprzedni;

        ElementListy<T>(T, ElementListy<T> *poprzedni=nullptr, ElementListy<T> *nastepny=nullptr);
        void pokaz() const;
};

template <typename T>
class Lista {
    private:
        int licznik;
        ElementListy<T> *pierwszy;
        ElementListy<T> *ostatni;
    public:
        Lista();
        void pokaz() const;
        void append(T);
        void prepend(T);
};

template <typename T>
Lista<T>::Lista():
    licznik(0),
    pierwszy(nullptr),
    ostatni(nullptr)
{
}

template <typename T>
void Lista<T>::pokaz() const {
    std::cout << "--[ LISTA ("<< licznik <<") ]--\n";
    std::cout << "<" << this->pierwszy << " .. " << this->ostatni << ">\n";

    ElementListy<T> *biezacy = this->pierwszy;
    while(biezacy != nullptr){
        biezacy->pokaz();
        biezacy = biezacy->nastepny;
    }

    std::cout << "------------------\n";
}

template <typename T>
void Lista<T>::append(T wartosc){
    ElementListy<T> *ne;
    ne = new ElementListy<T>(wartosc, this->ostatni, nullptr);
    if (licznik == 0){
        this->pierwszy = ne;
    }
    else {
        this->ostatni->nastepny = ne;
    }
    this->ostatni = ne;
    this->licznik++;
}

template <typename T>
void Lista<T>::prepend(T wartosc){
    ElementListy<T> *ne;
    ne = new ElementListy<T>(wartosc, nullptr, this->pierwszy);
    if (licznik == 0){
        this->ostatni = ne;
    }
    else {
        this->pierwszy->poprzedni = ne;
    }
    this->pierwszy = ne;
    this->licznik++;
}

template <typename T>
ElementListy<T>::ElementListy(T wartosc, ElementListy<T> *p, ElementListy<T> *n):
    wartosc(wartosc),
    poprzedni(p),
    nastepny(n)
{
}

template <typename T>
void ElementListy<T>::pokaz() const {
    std::cout << "* " << this->wartosc << "    " << this << "    <" << this->poprzedni << ":" << this->nastepny << ">\n";
}
