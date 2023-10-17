#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	char gender;

	void show1() {
		cout << "(" << name << ", " << age << ", " << gender << ")" << endl;
	}
	void show2();
};

void Student::show2() {
	cout << "(" << name << ", " << age << ", " << gender << ")" << endl;
}

void main() {
	Student s1;
	s1.name = "Xueyuan Gong";
	s1.age = 18;
	s1.gender = 'M';

	s1.show1();
	s1.show2();
}
