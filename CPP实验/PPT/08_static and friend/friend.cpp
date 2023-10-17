#include <iostream>
using namespace std;

class Teacher;
class Student {
private:
	int age;
	//friend void good_friend(Student& s);
	//friend class Teacher;
public:
	int id;

	Student() : age(18), id(0) {}
	void ask(Teacher& t);
};

class Teacher {
	int age;
	//friend void Student::ask(Teacher& t);
public:
	int id;

	Teacher() : age(18), id(0) {}

	void ask(Student& s) {
		cout << s.id << endl;
		cout << s.age << endl;
	}
};

void Student::ask(Teacher& t) {
	cout << t.id << endl;
	cout << t.age << endl;
}

void good_friend(Student& s) {
	cout << s.id << endl;
	cout << s.age << endl;
}

void main() {
	Student s;
	Teacher t;

	good_friend(s);
	t.ask(s);
	s.ask(t);
}
