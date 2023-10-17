#include <iostream>
using namespace std;

class Person {
public:
	int* age;

	Person(int _age) : age(new int(_age)) {}
	//~Person() {
	//	delete age;
	//}

	//Person& operator=(Person& p) {
	//	age = new int(*p.age);
	//	return *this;
	//}

	//Person& operator=(Person& p) {
	//	if (age != NULL) {
	//		delete age;
	//	}

	//	age = new int(*p.age);
	//	return *this;
	//}
};

void test() {
	Person p1(18);
	Person p2(28);

	p2 = p1;
	//Person p2 = p1;

	//Person p3(38);
	//p3 = p2 = p1;
	//cout << *p3.age << *p2.age << *p1.age << endl;
}

void main() {
	while (1) {
		test();
	}
}
