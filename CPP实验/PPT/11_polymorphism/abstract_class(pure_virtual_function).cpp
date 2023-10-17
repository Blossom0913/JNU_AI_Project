#include <iostream>
using namespace std;

class Animal {
public:
	virtual void shout() = 0;
};

class Cat : public Animal {
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

void main() {
	Animal a;
	Cat c;

	//Dog d;
	//Animal* a = &d;
	//a->shout();
}