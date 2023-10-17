#include<iostream> 
using namespace std;

void main() {
    int a = 0;



    for (int i = 0; i < 3; ++i) {
        a += i;
    }

    //int i = 0;
    //while (i <= 3) {
    //    a += i;
    //    ++i;
    //}

    //int i = 3;
    //do {
    //    a += i;
    //    --i;
    //} while (i > 3);

    //int i = 3;
    //while (i > 3) {
    //    a += i;
    //    --i;
    //}

    //for (int i = 0; i < 3; ++i) {
    //    for (int j = 1; j <= 3; ++j) {
    //        a += i * j;
    //    }
    //}

    //for (int i = 0; i < 3; ++i) {
    //    if (i == 1) {
    //        break;
    //    }

    //    a += i;
    //}

    //for (int i = 0; i < 3; ++i) {
    //    if (i == 1) {
    //        continue;
    //    }

    //    a += i;
    //}



    cout << a << endl;
}
