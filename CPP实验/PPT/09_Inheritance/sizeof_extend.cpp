#include <iostream>
using namespace std;

class Father {
public:
	int id;
protected:
	int age;
private:
	int bank_card;
};

//class Father {
//public:
//	//double bank_card;
//	//char id;
//	//short age;
//
//	//char id;
//	//double bank_card;
//	//short age;
//
//	//char id;
//	//short age;
//	//double bank_card;
//};

class Son : public Father {
public:
	int n_toy;

	void sonShow() {
		//cout << id << endl;
		//cout << age << endl;
		//cout << bank_card << endl;
	}
};

void main() {
	//cl /d1 reportSingleClassLayout[class] file_name
}
