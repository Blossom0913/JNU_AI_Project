#include <iostream>
using namespace std;

void fun1(int x) {
    x = 2;
}

void fun2(int* x) {
    *x = 2;
}

void fun3(int& x) {
    x = 2;
}

void main()
{
    int a = 1;
    //fun1(a);
    //fun2(a);
    //fun3(a);
    //int& b;

    cout << a << endl;
}
