#include <iostream>
using namespace std;

class Student {
public:
	int id;

	Student() : id(0) {
		cout << "Student() : id(0)" << endl;
	}

	~Student() {
		cout << "~Student()" << endl;
	}

	Student(int _id) : id(_id) {
		cout << "Student(int _id) : id(_id)" << endl;
	}

	Student(const Student& s) : id(s.id) {
		cout << "Student(const Student& s) : id(s.id)" << endl;
	}

	Student& operator = (const Student& s) {
		id = s.id;
		cout << "operator = (const Student& s)" << endl;

		return *this;
	}
};

class Teacher1 {
public:
	Student s;

	Teacher1(Student& _s) {
		s = _s;
		cout << "Teacher1(Student& _s)" << endl;
	}

	~Teacher1() {
		cout << "~Teacher1()" << endl;
	}
};

class Teacher2 {
public:
	Student s;

	Teacher2(Student& _s) : s(_s) {
		cout << "Teacher2(Student& _s): s(_s)" << endl;
	}

	~Teacher2() {
		cout << "~Teacher2()" << endl;
	}
};

void test() {
	Student s;

	Teacher1 t1(s);
	//Teacher2 t2(s);
}

void main() {
	test();
}
