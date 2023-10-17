#include <iostream>
using namespace std;

class Animal {
public:
	Animal() {
		cout << "Animal()" << endl;
	}

	~Animal() {
		cout << "~Animal()" << endl;
	}

	//virtual ~Animal() {
	//	cout << "~Animal()" << endl;
	//}
	//virtual ~Animal() = 0;

	virtual void shout() = 0;
};

//Animal::~Animal() {
//	cout << "Animal::~Animal()" << endl;
//}

class Cat : public Animal {
public:
	int* age;

	Cat() : age(new int(18)) {
		cout << "Cat()" << endl;
	}

	~Cat() {
		delete age;
		cout << "~Cat()" << endl;
	}

	void shout() {
		cout << "Meow: " << *age << endl;
	}
};

void test() {
	Animal* a = new Cat();
	a->shout();
	delete a;
}

void main() {
	test();
}