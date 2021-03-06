#include <iostream>

int main(){

    int a,b,c,d;

    a=10;
    b=20;
    c=30;
    d=40;

    std::cout << a + b + c + d << "\n";

    int* pa, pb, pc, pd;        // nie oznacza tego, co mogłoby się wydawać
    int *pa2, pb2, pc2, pd2;    // dokładnie to samo, tylko widać co jest wsk a co nie
    int *pa3;
    int pb3, pc3, pd3;

    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;

}