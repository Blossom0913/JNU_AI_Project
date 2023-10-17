#include <iostream>
using namespace std;

class Animal {
public:
	void shout() {
		cout << "Shout" << endl;
	}

	//virtual void shout() {
	//	cout << "Shout" << endl;
	//}
};

class Cat : public Animal {
public:
	void shout() {
		cout << "Meow" << endl;
	}
};

class Dog : public Animal {
public:
	void shout() {
		cout << "Woof" << endl;
	}
};

void test(Animal* a) {
	a->shout();
}

void test(Animal& a) {
	a.shout();
}

void main() {
	Cat c;
	Dog d;

	test(&c);
	test(&d);

	//test(c);
	//test(d);
}