#ifndef __STRUKTURY_HPP__
#define __STRUKTURY_HPP__


class ElementListy {


};

class Lista {
    private:
        int licznik;
        ElementListy *pierwszy;
        ElementListy *ostatni;
    public:
        Lista();
        void pokaz();

};

#endif
