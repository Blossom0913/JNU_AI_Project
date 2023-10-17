#include <iostream>
using namespace std;

class Person {
public:
	int id;
	int age;

	Person() : id(0), age(18) {}

	//void operator<<(ostream& cout) {
	//	cout << id << "," << age;
	//}
};

//void operator<<(ostream& cout, const Person& p) {
//	cout << p.id << "," << p.age;
//}

//ostream& operator<<(ostream& cout, const Person& p) {
//	cout << p.id << "," << p.age;
//	return cout;
//}

void main() {
	Person p;
	cout << p.id << "," << p.age << endl;
	cout << p;

	//p.operator<<(cout);
	//p << cout;

	//operator<<(cout, p);
	//cout << p;

	//Person p1;
	//operator<<(operator<<(cout, p), p1);
	//cout << p << p1;
	////cout << p << p1 << endl;
}
