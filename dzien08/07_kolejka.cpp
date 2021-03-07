#include <queue>
#include <iostream>

int main(){
    std::queue<std::string> kolejka;
    // FIFO: First In - First Out

    kolejka.push("Ala");
    kolejka.push("Ola");
    kolejka.push("Ela");

    while (! kolejka.empty()){
        std::cout << kolejka.front() << "\n";
        kolejka.pop();
    }

}
