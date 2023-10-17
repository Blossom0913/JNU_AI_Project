#include<iostream> 
using namespace std;

void main() {
    int a[5] = { 0 };
    int b(5);

    cout << a << endl;
    cout << a[0] << endl;
    cout << b << endl;
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << endl;
    }

    cout << "array size:         " << sizeof(a) << endl;
    cout << "array element size: " << sizeof(a[0]) << endl;
    cout << "number of elements: " << sizeof(a)/sizeof(a[0]) << endl;

    cout << a[5] << endl;
    cout << *(a + 5) << endl;



    //int a[6] = { 1, 2, 3, 4, 5, 6 };
    //int b[3][2] = { 1, 2, 3, 4, 5, 6 };

    //for (int i = 0; i < 3; ++i) {
    //    for (int j = 0; j < 2; ++j) {
    //        cout << a[i * 2 + j];
    //    }
    //}
    //cout << endl;

    //for (int i = 0; i < 3; ++i) {
    //    for (int j = 0; j < 2; ++j) {
    //        cout << b[i][j];
    //    }
    //}
    //cout << endl;
}
