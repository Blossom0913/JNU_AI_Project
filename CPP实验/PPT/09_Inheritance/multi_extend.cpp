#include <iostream>
using namespace std;

class Father {
public:
	int height;
	int age;
};

class Mother {
public:
	int beauty;
	int age;
};

class Son : public Father, public Mother {
};

//cl /d1 reportSingleClassLayout[class] file_name
void main() {
	Son s;

	cout << s.age << endl;
	cout << s.Father::age << endl;
	cout << s.Mother::age << endl;
}
