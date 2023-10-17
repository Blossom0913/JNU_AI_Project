#include <iostream>
using namespace std;

void swap(int x, int y) {
    int t = x;
    x = y;
    y = t;

    cout << "In swap():  (x, y) = (" << x << ", " << y << ")" << endl;
}

void swap(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
    cout << "In swap():  (x, y) = (" << *x << ", " << *y << ")" << endl;
}

void swap(int c[]) {
    int t = c[0];
    c[0] = c[1];
    c[1] = t;

    cout << "In swap():  (c[0], c[1]) = (" << c[0] << ", " << c[1] << ")" << endl;
    cout << "In swap():  size(c) = " << sizeof(c) << endl;
}

void main()
{
    int a = 1, b = 2;
    int c[] = { 1, 2 };

    int x = a, y = b;
    int t = x;
    x = y;
    y = t;
    cout << "Out swap(): (x, y) = (" << x << ", " << y << ")" << endl;
    cout << "Out swap(): (a, b) = (" << a << ", " << b << ")" << endl;

    //int* x = &a, * y = &b;
    //int t = *x;
    //*x = *y;
    //*y = t;
    //cout << "Out swap(): (x, y) = (" << *x << ", " << *y << ")" << endl;
    //cout << "Out swap(): (a, b) = (" << a << ", " << b << ")" << endl;

    //swap(a, b);
    //cout << "Out swap(): (a, b) = (" << a << ", " << b << ")" << endl;

    //swap(&a, &b);
    //cout << "Out swap(): (a, b) = (" << a << ", " << b << ")" << endl;

    //swap(c);
    //cout << "Out swap(): (c[0], c[1]) = (" << c[0] << ", " << c[1] << ")" << endl;
    //cout << "Out swap(): size(c) = " << sizeof(c) << endl;
    //int* d = c;
}
