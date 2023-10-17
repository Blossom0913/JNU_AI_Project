#include<iostream> 
using namespace std;

int iteration(int a) {
    int sum;

    for (sum = 1; a > 0; --a) {
        sum *= a;
    }

    return sum;
}

int recursion(int a) {
    if (a == 1) {
        return 1;
    }

    return a * recursion(a - 1);
}

int add(int a, int b) {
    return a + b;
}

float add(float a, float b = 3.3f) {
    return a + b;
}

void main() {
    cout << iteration(5) << endl;
    cout << recursion(5) << endl;

    cout << add(1, 2) << endl;
    cout << add(1.1f, 2.2f) << endl;
    //cout << add(1.1, 2.2) << endl;
    cout << add(1.1f) << endl;
}