#include <iostream>
using namespace std;

class Student {
public:
	int id;

	Student(int id) {
		id = id;
		//this->id = id;
	}

	Student(const Student& s) {
		id = s.id;
		cout << "Student(const Student& s)" << endl;
	}

	Student& id_plus1(Student& s) {
		id += s.id;
		return *this;
	}

	Student* id_plus2(Student& s) {
		id += s.id;
		return this;
	}

	Student id_plus3(Student& s) {
		id += s.id;
		return *this;
	}
};

void main() {
	Student s1(18);
	cout << s1.id << endl;

	Student s2(18);
	s2.id_plus1(s1).id_plus1(s1);
	//s2.id_plus2(s1)->id_plus2(s1);
	//s2.id_plus3(s1).id_plus3(s1);

	cout << s2.id << endl;
}
