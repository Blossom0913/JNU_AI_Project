#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	char gender;
	int age;
	string major;
};

class Teacher {
public:
	string name;
	char gender;
	int age;
	string title;
};

class Programmer {
public:
	string name;
	char gender;
	int age;
	int hair;
};



//class Person {
//public:
//	string name;
//	char gender;
//	int age;
//};
//
//class Student : public Person {
//public:
//	string major;
//};
//
//class Teacher : public Person {
//public:
//	string title;
//};
//
//class Programmer : public Person {
//public:
//	int hair;
//};

void main() {
	Student s;
	s.major = "CS";
	Teacher t;
	t.title = "Prof.";
	Programmer p;
	p.hair = 0;

	cout << s.major << endl;
	cout << t.title << endl;
	cout << p.hair << endl;
}
