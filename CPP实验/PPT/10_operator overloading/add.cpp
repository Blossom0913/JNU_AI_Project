#include <iostream>
using namespace std;

class Person {
public:
	int age;

	Person() : age(18) {}

	Person add(const Person& p) {
		Person temp;
		temp.age = this->age + p.age;
		return temp;
	}

	Person operator+(const Person& p) {
		Person temp;
		temp.age = age + p.age;
		return temp;
	}
};

//Person operator+(const Person& p1, const Person& p2) {
//	Person temp;
//	temp.age = p1.age + p2.age;
//	return temp;
//}

void main() {
	int a = 1, b = 1;
	int c = a + b;

	Person p1, p2;
	Person p3 = p1.add(p2);
	//Person p4 = p1.operator+(p2);
	//Person p4 = operator+(p1, p2);
	//Person p4 = p1 + p2;

	cout << p3.age << endl;
	cout << p4.age << endl;

	system("pause");
}
