#include <vector>
#include <iostream>

int main(){
    std::vector<std::string> v;

    for (int i=0; i<10; i++){
        v.push_back("liczba " + std::to_string(i*2));
    }

    std::cout << v.size() << "\n";
    std::cout << v.capacity() << "\n";
    v.shrink_to_fit();
    std::cout << v.capacity() << "\n";

    std::string napis = v.back();
    v.back() = "kot";
    v[v.size()-1] = "pies";
    
    std::cout << napis << "\n";

    for (int i=0; i<v.size(); i++){
        std::cout << v[i] << "\n";
    }

}