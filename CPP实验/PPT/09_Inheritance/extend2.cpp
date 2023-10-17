#include <iostream>
#include <string>
using namespace std;

class Father {
public:
	int a;
protected:
	int b;
private:
	int c;
};

class Son1 : public Father {
public:
	void show() {
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
};

class Son2 : protected Father {
public:
	void show() {
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
};

class Son3 : private Father {
public:
	void show() {
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
};

class GrandSon : public Son3 {
public:
	void show() {
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
};

void main() {
	//Father f;
	//cout << f.a << endl;
	//cout << f.b << endl;
	//cout << f.c << endl;

	//Son1 s1;
	//cout << s1.a << endl;
	//cout << s1.b << endl;
	//cout << s1.c << endl;

	//Son2 s2;
	//cout << s2.a << endl;
	//cout << s2.b << endl;
	//cout << s2.c << endl;

	//Son3 s3;
	//cout << s3.a << endl;
	//cout << s3.b << endl;
	//cout << s3.c << endl;
}
