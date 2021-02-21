#include <iostream>

class Abc {
    public:
        int a;
        int b;
        static int f1(int x, int y){
            return 4*x + y;
        }
};

int main(){

    std::cout << Abc::f1(10, 20) << "\n";

}