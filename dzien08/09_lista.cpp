#include <list>
#include <iostream>

bool porownaj_dlugosc(const std::string &a, const std::string &b){
    return a.size() < b.size();
}

bool porownaj_od_2_litery(const std::string &a, const std::string &b){
    return a.substr(1) < b.substr(1);
}

int main(){
    std::list<std::string> x;

    x.push_back("W pustyni i w puszczy");
    x.push_back("Krzyżacy");
    x.push_back("Ogniem i mieczem");
    x.push_back("Abecadło");
    x.push_back("ZZZ");

    x.sort(porownaj_od_2_litery);

    x.sort([](std::string &a, std::string &b) { return a.substr(2) < b.substr(2); });

    //std::cout << porownaj_dlugosc("Alaxxxxxxxxxxxxxxxxxxxxx", "Alicja") << "\n";

    while (! x.empty()){
        std::cout << x.front() << "\n";
        x.pop_front();
    }

}
