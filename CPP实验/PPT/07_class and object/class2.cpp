#include <iostream>
using namespace std;

class Student {
public:
	int id;

	Student() {
		id = 1;
	}
};

class Teacher {
public:
	int* id;

	Teacher() {
		id = new int(2);
	}
};

void main() {
	Student s1;
	Student* s2 = &s1;
	Student* s3 = new Student();
	Student& s4 = s1;

	Student s5[3] = { Student(), Student(), Student() };
	Student* s6[3] = { new Student(), new Student(), new Student() };

	Teacher* t3 = new Teacher();
}
