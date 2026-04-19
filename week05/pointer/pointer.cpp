#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // donut 이름의 Circle 타입의 객체 생성
	Circle pizza(30); //반지름 30의 Circle 타입의 객체 생성

	cout << donut.getArea() << endl;
	Circle* p; //변수 선언문. p라는 변수. p변수에 저장되는 값은 Circle 객체의 주소
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
}