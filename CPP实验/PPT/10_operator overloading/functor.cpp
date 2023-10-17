#include <iostream>
using namespace std;

int adder(int a, int b) {
	return a + b;
}

//class Adder {
//public:
//	int operator()(int a, int b) {
//		return a + b;
//	}
//};

void main() {
	//Adder adder;

	cout << adder(2, 3) << endl;
}
