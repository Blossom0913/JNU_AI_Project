#include <iostream>
using namespace std;

class Person {
public:
	int id;
	int age;

	Person(int _id, int _age) : id(_id), age(_age) {}

	//bool operator==(const Person& p) {
	//	return (id==p.id && age==p.age);
	//}

	//bool operator!=(const Person& p) {
	//	return (id != p.id || age != p.age);
	//}
};

void main() {
	Person p1(0, 18);
	Person p2(1, 28);

	cout << (p1 == p2) << endl;
	//cout << (p1 != p2) << endl;
}
