#include <iostream>
using namespace std;

class Father {
public:
	Father() {
		cout << "Father()" << endl;
	}

	~Father() {
		cout << "~Father()" << endl;
	}
};

class Son : public Father {
public:
	Son() {
		cout << "Son()" << endl;
	}

	~Son() {
		cout << "~Son()" << endl;
	}
};

//class Son{
//public:
//	Father s;
//
//	Son() {
//		cout << "Son()" << endl;
//	}
//
//	~Son() {
//		cout << "~Son()" << endl;
//	}
//};

void test() {
	//Father f;
	Son s;
}

void main() {
	test();
}
