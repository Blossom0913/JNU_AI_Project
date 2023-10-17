#include <iostream>
using namespace std;

class Person {
public:
	int age;

	Person() : age(18) {}

	Person& operator++() {
		++age;
		return *this;
	}

	//Person operator++() {
	//	++age;
	//	return *this;
	//}

	//Person& operator++(int) {
	//	Person temp = *this;
	//	++age;
	//	return temp;
	//}

	//Person operator++(int) {
	//	Person temp = *this;
	//	++age;
	//	return temp;
	//}

	//const Person operator++(int) {
	//	Person temp = *this;
	//	++age;
	//	return temp;
	//}
};

ostream& operator<<(ostream& cout, const Person& p) {
	cout << p.age;
	return cout;
}

void main() {
	int a = 18;
	Person p;

	cout << ++a << endl;
	cout << a << endl;
	cout << ++(++a) << endl;
	cout << a << endl;

	//cout << ++p << endl;
	//cout << p << endl;
	//cout << ++(++p) << endl;
	//cout << p << endl;




	//cout << a++ << endl;
	//cout << a << endl;
	//cout << (a++)++ << endl;
	//cout << a << endl;

	//cout << p++ << endl;
	//cout << p << endl;
	//cout << (p++)++ << endl;
	//cout << p << endl;
}
