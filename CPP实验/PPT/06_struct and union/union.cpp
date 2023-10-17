#include <iostream>
using namespace std;

union info {
	char gender;
	int age;
	double score;
};

void main() {
	info a;
	cout << sizeof(a) << endl;
	a.gender = 'F';
	cout << a.gender << endl;
	a.age = 18;
	cout << a.age << endl;
	a.score = 95.5;
	cout << a.score << endl;
}
