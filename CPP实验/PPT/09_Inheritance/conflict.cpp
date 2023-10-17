#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	char dream;
};

class Father {
public:
	char dream;

	Father() : dream('b') {}

	void study() {
		cout << "Father::study() " << "biology" << endl;
	}

	//void study(string a) {
	//	cout << "Father::study(string a) " << a << endl;
	//}
};

class Son : public Father {
public:
	char dream;

	Son() : dream('c') {}

	void study() {
		cout << "Son::study() " << "computer science" << endl;
	}
};

//cl /d1 reportSingleClassLayout[class] file_name
void main() {
	Son s;

	cout << s.dream << endl;
	cout << s.Father::dream << endl;
	cout << s.Son::dream << endl;

	s.study();
	s.Father::study();
	s.Son::study();

	//s.study("music");
	//s.Father::study("music");
}
