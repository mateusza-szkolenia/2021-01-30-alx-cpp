#include <iostream>

template <typename T>
T trzy_razy(T x){
    return x + x + x;
}

int main(){

    std::cout << trzy_razy(7) << "\n";
    std::cout << trzy_razy(99.9) << "\n";
    std::string zw{"kot"};
    std::cout << trzy_razy(zw) << "\n";
    std::cout << trzy_razy<std::string>("pies") << "\n";
    std::cout << trzy_razy((std::string)"mysz") << "\n";
    std::cout << trzy_razy(static_cast<std::string>("chomik")) << "\n";
}
