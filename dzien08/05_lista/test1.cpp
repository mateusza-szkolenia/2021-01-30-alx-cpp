#include <iostream>
#include "Struktury.hpp"

int main(){

    Lista<std::string> l1;

    l1.pokaz();
    l1.append("kot");
    l1.append("pies");
    l1.append("mysz");
    l1.append("szczur");
    l1.prepend("lew");
    l1.pokaz();
}
