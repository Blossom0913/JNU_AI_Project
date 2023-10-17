#include <iostream>
using namespace std;

class Animal {
public:
	int age;
};

//class Yang: public Animal {};
//class Tuo: public Animal {};

class Yang : virtual public Animal {};
class Tuo : virtual public Animal {};

class YangTuo : public Yang, public Tuo {};

//cl /d1 reportSingleClassLayout[class] file_name
void main() {
	YangTuo s;

	//s.age = 18;
	//s.Yang::age = 18;
	//s.Tuo::age = 28;
}