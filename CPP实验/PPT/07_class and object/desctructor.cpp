#include <iostream>
using namespace std;

class Student {
public:
	int id;

	Student() {
		id = 0;
		//id = int(0);
		cout << "Student()" << endl;
	}

	~Student() {
		cout << "~Student()" << endl;
	}
};

class Teacher {
public:
	int* age;

	Teacher() {
		age = new int(0);
		cout << "Teacher()" << endl;
	}

	~Teacher() {
		//delete age;
		cout << "~Teacher()" << endl;
	}
};

int* test1() {
	Student s = Student();
	return &s.id;
}

int* test2() {
	Teacher t = Teacher();
	return t.age;
}

void test3() {
	Teacher t = Teacher();
}

void main() {
	Student s = Student();

	//int* id = test1();
	//int* age = test2();
	//cout << *id << endl;
	//cout << *age << endl;

	//while (1) {
	//	test3();
	//}
}
