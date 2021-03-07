#ifndef __STRUKTURY_HPP__
#define __STRUKTURY_HPP__


class ElementListy {
    public:
        double wartosc;
        ElementListy *nastepny;
        ElementListy *poprzedni;

        ElementListy(double, ElementListy *poprzedni=nullptr, ElementListy *nastepny=nullptr);
        void pokaz() const;
};

class Lista {
    private:
        int licznik;
        ElementListy *pierwszy;
        ElementListy *ostatni;
    public:
        Lista();
        void pokaz() const;
        void append(double);
        void prepend(double);
};

#endif
