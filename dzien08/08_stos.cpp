#include <stack>
#include <iostream>

int main(){
    std::stack<std::string> stos;
    // LIFO: Last In First Out

    stos.push("W pustyni i w puszczy");
    stos.push("Krzyżacy");
    stos.push("Ogniem i mieczem");

    while (! stos.empty()){
        std::cout << stos.top() << "\n";
        stos.pop();
    }

}
