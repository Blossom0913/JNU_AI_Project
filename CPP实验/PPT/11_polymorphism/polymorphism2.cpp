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
	//void shout() {
	//	cout << "Meow" << endl;
	//}
};

class Dog : public Animal {
public:
	void shout() {
		cout << "Woof" << endl;
	}
};

//cl /d1 reportSingleClassLayout[class] file_name
void main() {
	Animal a;
	cout << sizeof(a) << endl;
}