#include <iostream>
using namespace std;

class Student {
public:
	int id;
	mutable int age;
	const int hands;	//Cannot modify this variable
	//const int hands = 2;

	Student() : hands(2) {
		id = 1;
		age = 100;
	}

	//No modification in the function
	void modify1() const {
		id = 100;
		age = 18;
	}

	void modify2() {
		id = 100;
		age = 18;
	}
};

void main() {
	int a = 1;

	const int b = 1;
	b = 2;

	const int* c = &a;
	*c = 2;
	c = &b;

	int* const d = &a;
	d = &b;
	*d = 2;

	const int* const e = &a;

	const int& f = a;
	f = 2;



	const Student s;
	s.id = 100;
	s.age = 18;

	s.modify1();
	s.modify2();
}
