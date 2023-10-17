#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;

	Point() : x(0), y(0) {}
	Point(int _x, int _y) : x(_x), y(_y) {}

	Point operator+(Point& p) {
		Point temp;
		temp.x = this->x + p.x;
		temp.y = this->y + p.y;
		return temp;
	}
};

void main() {
	Point p1 = Point();
	Point p2 = Point(1, 2);

	int a = 3 + 4;
	Point p3 = p1 + p2;

	cout << a << endl;
	cout << p3.x << "," << p3.y << endl;
}