#include <iostream>

template <typename T>
T mniejsza(T a, T b){
    if (a < b) return a;
    return b;
}

int main(){
    std::cout << mniejsza(40L, 50L) << "\n";
    std::cout << mniejsza(99, 30) << "\n";
    std::cout << mniejsza(5, 5) << "\n";

    std::cout << mniejsza(40.4, 50.5) << "\n";
    std::cout << mniejsza(99.9, 30.01) << "\n";
    std::cout << mniejsza<float>(5.7, 5.7) << "\n";

    std::cout << mniejsza((std::string)"zxc", (std::string)"abc") << "\n";
   // std::cout << mniejsza("zxc", "abc") << "\n"; // nie zrobi tego co moglibyśmy chcieć
    std::cout << mniejsza<std::string>("zxc", "abc") << "\n";

}