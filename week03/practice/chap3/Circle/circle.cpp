#include <iostream>
using namespace std;

//선언부
class Circle {
public:
	int radius;
public:
	double getArea();
	int getRadius();
	Circle(); // 생성자 함수 생성
	Circle(int r);
	~Circle();
};

//구현부
Circle::Circle() { 
	radius = 1;
	cout << "생성자 실행..." << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행..." << radius << endl;
}

Circle::~Circle() {
	cout << radius << "의 원이 소멸됩니다.\n";
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int Circle::getRadius() {
	return radius;
}


int main() {
	int n;
	Circle donut; //반지름이 1인 원 생성
	double area = donut.getArea(); //멤버는 .
	cout << "도넛의 면적은" << area << "입니다.\n";
	Circle pizza(30);
	cout << "피자의 면적은" << pizza.getArea() << "입니다.\n";

	return 0;
}
