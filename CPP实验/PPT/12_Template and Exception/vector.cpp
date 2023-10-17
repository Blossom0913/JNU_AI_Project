#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
		cout << *i << ' ';
	}
	cout << endl;
}

void construct(vector<int>& v) {
	vector<int> v1(v.begin(), v.end());
	print(v1);

	vector<int> v2(8, 6);
	print(v2);

	vector<int> v3(v2);
	print(v3);
}

void assign(vector<int>& v) {
	vector<int> v1 = v;
	print(v1);

	vector<int> v2;
	v2.assign(v.begin(), v.end());
	print(v2);

	vector<int> v3;
	v3.assign(8, 6);
	print(v3);
}

void length(vector<int>& v) {
	cout << v.empty() << endl;
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	for (int i = 0; i < 32; ++i) {
		v.push_back(i);
		cout << v.capacity() << ' ';
	}
	cout << endl;

	v.resize(8);
	print(v);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(12);
	print(v);

	v.resize(16, 1);
	print(v);
}

void insert_delete(vector<int>& v) {
	v.pop_back();
	print(v);
	cout << v.capacity() << endl;

	v.insert(v.begin(), 10);
	print(v);

	v.insert(v.begin(), 2, 18);
	print(v);

	v.erase(v.begin());
	print(v);
	cout << v.capacity() << endl;

	v.erase(v.begin() + 1, v.end());
	print(v);
	cout << v.capacity() << endl;

	v.clear();
	print(v);
	cout << v.capacity() << endl;
}

void access(vector<int>& v) {
	cout << v.at(2) << endl;
	cout << v[2] << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
}

void swap(vector<int>& v) {
	vector<int> v1;
	print(v1);
	cout << v.capacity() << endl;
	cout << v1.capacity() << endl;

	cout << "After swap" << endl;
	v.swap(v1);
	print(v1);
	cout << v.capacity() << endl;
	cout << v1.capacity() << endl;
}

void shrink(vector<int>& v) {
	cout << v.capacity() << endl;
	vector<int>().swap(v);
	cout << v.capacity() << endl;
}

void main() {
	vector<int> v;
	for (int i = 0; i < 8; ++i) {
		v.push_back(i);
	}
	print(v);

	//construct(v);
	//assign(v);
	//length(v);
	//insert_delete(v);
	//access(v);
	//swap(v);
	shrink(v);
}