#include <iostream>
using namespace std;

template<class IdType, class AgeType>
class Person {
public:
	IdType id;
	AgeType age;

	Person(IdType _id, AgeType _age) : id(_id), age(_age) {}
};

template<class StuIdType>
class Student :public Person<int, int> {
public:
	StuIdType stu_id;

	Student(StuIdType _stu_id, int _id, int _age) : stu_id(_stu_id), Person<int, int>(_id, _age) {}
};

//template<class StuIdType, class IdType, class AgeType>
//class Student :public Person<IdType, AgeType> {
//public:
//	StuIdType stu_id;
//
//	Student(StuIdType _stu_id, IdType _id, AgeType _age) : stu_id(_stu_id), Person<IdType, AgeType>(_id, _age) {}
//};

void main() {
	Person<int, int> p(1, 18);
	//Person<int, int> p = Person<int, int>(1, 18);
	cout << p.id << ", " << p.age << endl;

	Student<int> s(0, 18, 1);
	//Student<int, int, int> s(0, 18, 1);
	cout << s.id << ", " << s.age << ", " << s.stu_id << endl;
}
