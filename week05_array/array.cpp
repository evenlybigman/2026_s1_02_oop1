#include <iostream>
using namespace std;

class Circle {
	int radius = 1;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main() {
	Circle Circles[3] = { Circle(1),Circle(5), Circle() };
	for (int i = 0; i < 3; i++) {
		cout << Circles[i].getArea() << "\t";
	}
	int n = 0;
	int* q = &n;
	q++;

	cout << endl;
	Circle* p;
	p = Circles; // &Circles[0]과 같은 뜻, 주소는 정수 = p에는 정수값이 들어있음.
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << "\t";
		p++; //p++ 한번지는 1바이트 int는 4바이트를 저장하기 때문에 4가 오름
		//한바이트는 포켓몬인데
	}
	return 0;
}