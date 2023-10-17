#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void write_file() {
	ofstream ofs;

	ofs.open("test.txt", ios::out);

	ofs << "Name: Gong" << endl;
	ofs << "Age: 18" << endl;

	ofs.close();
}

void read_file() {
	ifstream ifs;

	ifs.open("test.txt", ios::in);

	if (!ifs.is_open()) {
		cout << "Open file failed" << endl;
		return;
	}

	char buf1[1024] = { 0 };
	while (ifs >> buf1) {
		cout << buf1 << endl;
	}

	//char buf2[1024] = { 0 };
	//while (ifs.getline(buf2, sizeof(buf2))) {
	//	cout << buf2 << endl;
	//}

	//string buf3;
	//while (getline(ifs, buf3)) {
	//	cout << buf3 << endl;
	//}

	//char c;
	//while ((c = ifs.get()) != EOF) {
	//	cout << c;
	//}

	ifs.close();
}

class Person {
public:
	char name[10];
	int age;
};

void write_binary_file() {
	ofstream ofs;

	ofs.open("test.txt", ios::out | ios::binary);

	Person p = { "Gong", 18 };
	//short p = 26984;
	ofs.write((const char*)&p, sizeof(p));

	ofs.close();
}

void read_binary_file() {
	ifstream ifs;

	ifs.open("test.txt", ios::in | ios::binary);

	if (!ifs.is_open()) {
		cout << "Open file failed" << endl;
		return;
	}

	Person p;
	ifs.read((char*)&p, sizeof(p));

	cout << "Name: " << p.name << endl;
	cout << "Age: " << p.age << endl;

	ifs.close();
}

void main() {
	//write_file();
	//read_file();
	write_binary_file();
	read_binary_file();
}