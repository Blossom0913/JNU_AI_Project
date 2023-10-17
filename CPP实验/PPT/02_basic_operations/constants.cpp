#include <iostream>
using namespace std;

int main()
{
	cout << "2:    " << typeid(2).name() << endl;
	cout << "2l:   " << typeid(2l).name() << endl;
	cout << "2.0f: " << typeid(2.0f).name() << endl;
	cout << "2.0:  " << typeid(2.0).name() << endl;

	char a = 'x';
	//char a = "x";
	cout << "a: " << a << endl;

	cout << ".145:     " << .145 << endl;
	cout << "2.145E-1: " << 2.145E-1 << endl;
	cout << "2.145e2:  " << 2.145e2 << endl;

	//const int b = 1;
	//b = 2;
}
