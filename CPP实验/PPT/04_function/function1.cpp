#include<iostream> 
using namespace std;

//No input. No output
void fun1() {
    cout << "Hello!" << endl;
}

//Have input. No output
void fun2(int a) {
    cout << "a = " << a << endl;
}

//No input. Have output
char fun3() {
    return 'X';
}

//Have input. Have output
float fun4(float a) {
    return a * a;
}

void main() {
    fun1();

    fun2(2);

    char c = fun3();
    cout << c << endl;

    float f = fun4(2.0);
    cout << "f = " << f << endl;
}