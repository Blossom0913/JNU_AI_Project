#include <iostream>
using namespace std;

//template<typename T>
template<class T>
void my_swap(T& a, T& b) {
	T t = a;
	a = b;
	b = t;
}

void main() {
	int a = 10;
	int b = 20;

	//my_swap(a, b);
	my_swap<int>(a, b);
	cout << a << endl;
	cout << b << endl;
}
