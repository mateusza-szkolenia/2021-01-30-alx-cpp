#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    std::vector<std::string> v;

    for (int i=0; i<10; i++){
        v.push_back("liczba " + std::to_string(i*17 + i*i*i * 13));
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
    std::cout << "Użycie iteratora:\n";
    for (std::vector<std::string>::iterator it=v.begin(); it != v.end(); it++ ){
        std::cout << *it << "\n";
    }

    std::cout << "Użycie iteratora:\n";
    for (auto it=v.rbegin(); it != v.rend(); it++){
        std::cout << *it << "\n";
    }

    std::string liczba;
    for (auto i=0; i<v.size(); i++){
        if(v[i].size() > 10){
            liczba = v[i];
            break;
        }
    }
    std::cout << "Pierwsza wieksza od 1000: " << liczba << "\n";

    auto result = std::find_if(v.begin(), v.end(), [](std::string x){return x.size() > 10;} );

    if (result==v.end()){
        std::cout << "null\n";
    }
    else {
        std::cout << "Za pomocą find_if: " << *result << "\n";
    }
}