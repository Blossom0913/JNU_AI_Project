#include <iostream>
using namespace std;

class Student {
public:
	char color;
	static int n_eyes;

	Student() : color('b') {}

	void modify() {
		color = 'w';
		n_eyes = 100;
	}

	static void revise() {
		//color = 'r';
		n_eyes = 10;
	}
};

int Student::n_eyes = 2;

void main() {
	Student s;
	Student s1;

	//Student::n_eyes = 5;
	//s1.n_eyes = 5;

	//Student::revise();
	//s1.revise();

	//s.modify();

	cout << Student::n_eyes << endl;
	cout << s.color << endl;
	cout << s.n_eyes << endl;
	cout << s1.color << endl;
	cout << s1.n_eyes << endl;
}
