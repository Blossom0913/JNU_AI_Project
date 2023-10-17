#include <iostream>
using namespace std;

//None
//2
//3
class Student {
public:
	int id;

	//Student() {
	//	id = 0;
	//	cout << "Student()" << endl;
	//}

	//Student(int _id) {
	//	id = _id;
	//cout << "Student(int _id)" << endl;
	//}

	//Student(const Student& s) {
	//	id = s.id;
	//	cout << "Student(const Student & s)" << endl;
	//}
};

void main() {
	Student s1 = Student();
	Student s2 = Student(1);
	Student s3 = Student(s1);

	cout << s1.id << endl;
	cout << s2.id << endl;
	cout << s3.id << endl;
}
