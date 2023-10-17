#include <iostream>
using namespace std;

class Animal {
public:
	int age;

	Animal() : age(18) {}

	void shout() {
		cout << "Shout: " << age << endl;
	}
};

class Cat : public Animal {
public:
	char color;

	Cat() : color('y') {}

	void shout() {
		cout << "Meow: " << age << color << endl;
	}
};

void main() {
	Animal a;
	Cat c;

	c.shout();
	c.Animal::shout();

	Animal ap = c;
	//Cat cp = a;

	//Animal* ap = &c;
	//Cat* cp = &a;

	//Animal& ap = c;
	//Cat& cp = a;

	ap.shout();
}