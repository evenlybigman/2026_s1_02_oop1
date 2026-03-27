#include <iostream>
using namespace std;

//클래스 선언부
class Circle {
public:
	int radius;
	double getArea();
};

// 구현부
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	int n; // 정수 타입의 n생성.
			//정수를 저장할 공간 할당받고 그 공간을 n이라고 부르겠다.
	Circle donut; // Circle 타입의 객체 donut 생성. 
			//Circle의 멤버들을 모두 저장할 공간을 할당받고
			// 이 공간(객체)를 donut이라고 부르겠다.

	//객체 활용
	donut.radius = 1;
	double area = donut.getArea();
	cout << " donut의 면적은" << area << "입니다." << endl;
}