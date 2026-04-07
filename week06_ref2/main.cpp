#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int radius) { this->radius = radius; }
	Circle& plus(int n);
	int getRadius() { return radius; }
};

Circle& Circle::plus(int n) {
	radius += n;
	return *this;
}

int main() {
	Circle a(5);
	a.plus(1).plus(5).plus(200);
	cout << a.getRadius() << endl;

	string x("hello");
	x.append(" Kitae").append("!");
	cout << x;
	return 0;
}