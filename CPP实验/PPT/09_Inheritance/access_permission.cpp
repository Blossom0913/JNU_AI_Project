#include <iostream>
#include <string>
using namespace std;

class Father {
private:
	int password;
protected:
	float age;
public:
	string name;

	void fatherShow() {
		cout << password << endl;
		cout << age << endl;
		cout << name << endl;
	}
};

class Son : public Father {
	void sonShow() {
		cout << password << endl;
		cout << age << endl;
		cout << name << endl;
	}
};

void main() {
	Father f = Father();
	cout << f.password << endl;
	cout << f.age << endl;
	cout << f.name << endl;
}
