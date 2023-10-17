#include <iostream>
using namespace std;

int fun1() {
    int a = 10;
    int b = a;

    return b;
}

int* fun2() {
    int a = 10;
    int* p = &a;

    return p;
}

int* fun3() {
    int a = int(10);
    int* p = &a;
    return p;
}

int* fun4() {
    int* p = new int(10);

    return p;
}

void main()
{
    int a = int(1);
    int* p1 = new int(1);
    int* p2 = new int[3];

    delete p1;
    delete[] p2;





    //int a = fun1();
    //int* p1 = fun2();
    //int* p2 = fun3();
    //int* p3 = fun4();

    //cout << a << endl;
    //cout << *p1 << endl;
    //cout << *p2 << endl;
    //cout << *p3 << endl;
}
