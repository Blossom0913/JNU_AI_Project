#include <iostream>
using namespace std;

class Student {
public:
	int id;

	Student() {
		id = 0;
		cout << "Student()" << endl;
	}

	Student(int _id) {
		id = _id;
		cout << "Student(int _id)" << endl;
	}

	Student(const Student& s) {
		id = s.id;
		cout << "Student(const Student & s)" << endl;
	}
};

void fun1(Student s) {
}

Student fun2() {
	Student s = Student(1);
	return s;
}

void main() {
	Student s1;
	Student s2 = Student();
	Student s3 = {};
	cout << s1.id << endl;
	cout << s2.id << endl;
	cout << s3.id << endl << endl;

	//Student s11();	//Declare a function
	//cout << typeid(s11).name() << endl;
	//cout << typeid(s1).name() << endl;

	//Student s4(1);
	//Student s5 = Student(1);
	//Student s6 = { 1 };
	//cout << s4.id << endl;
	//cout << s5.id << endl;
	//cout << s6.id << endl << endl;

	//Student s7(s1);
	//Student s8 = Student(s1);
	//Student s9 = { s1 };
	//Student s10 = s1;	//Student s10 = Student(s1);
	//cout << s7.id << endl;
	//cout << s8.id << endl;
	//cout << s9.id << endl;
	//cout << s10.id << endl << endl;

	//Student(s1);	//Student s1;
	//fun1(Student(s1));

	//fun1(s1);
	//Student s12 = fun2();
}
