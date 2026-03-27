#include <iostream>
using namespace std;

class Rectangle { //클래스는 상태 행동으로 구성
	//선언부
public :
	int width, height;
	double getArea();
};

//구현부
double Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은" << rect.getArea() << "입니다." << endl;
}