#include <iostream>
#include <string>
using namespace std;

struct A {
	char x;
	int y;
	short z;
};

struct B {
	char x;
	short z;
	int y;
};

struct Teacher {
	string name;
	int age;
	char gender;
};

typedef struct Student {
	string name;
	int age;
	char gender;
}Stu;

void fun1(Stu s) {
	s.age = 38;
}

void fun2(Stu* s) {
	s->age = 38;
}

void main() {
	struct A a;
	cout << sizeof(a) << endl;

	struct B b;
	cout << sizeof(b) << endl;

	struct Teacher t1;
	t1.name = "Xueyuan Gong";
	t1.age = 18;
	t1.gender = 'M';
	cout << "(" << t1.name << ", " << t1.age << ", " << t1.gender << ")" << endl;
	cout << sizeof(t1) << endl;

	Stu s1 = { "Steven", 18, 'M' };
	cout << "(" << s1.name << ", " << s1.age << ", " << s1.gender << ")" << endl;

	Stu s2[2] = { { "Lydia", 18, 'F' }, { "Samantha", 18, 'F' } };
	cout << "(" << s2[0].name << ", " << s2[0].age << ", " << s2[0].gender << ")" << endl;
	cout << "(" << s2[1].name << ", " << s2[1].age << ", " << s2[1].gender << ")" << endl;

	Stu* s3 = &s1;
	cout << "(" << s3->name << ", " << s3->age << ", " << s3->gender << ")" << endl;

	Stu s4 = { "Evelyn", 18, 'M' };
	fun1(s4);
	//fun2(&s4);
	cout << "(" << s4.name << ", " << s4.age << ", " << s4.gender << ")" << endl;
}
